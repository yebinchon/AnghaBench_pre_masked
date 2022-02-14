
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int argc; TYPE_1__** argv; } ;
struct TYPE_10__ {int gp; } ;
struct TYPE_9__ {char* bp; int len; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXCMD ;
typedef char CHAR_T ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int ,char*,int,char*,int,int ,int ) ;

int
FUNC_7(SCR *VAR_5, EXCMD *VAR_6)
{
 CHAR_T *VAR_7;
 size_t VAR_8;

 switch (VAR_6->argc) {
 case 0:
  if (FUNC_5(VAR_5, VAR_3, 0) == 0)
   FUNC_4(VAR_5, VAR_2, "105|No abbreviations to display");
  return (0);
 case 2:
  break;
 default:
  FUNC_2();
 }
 if (!FUNC_3(VAR_6->argv[0]->bp[VAR_6->argv[0]->len - 1])) {
  FUNC_4(VAR_5, VAR_1,
      "106|Abbreviations must end with a \"word\" character");
   return (1);
 }
 for (VAR_7 = VAR_6->argv[0]->bp; *VAR_7 != '\0'; ++VAR_7)
  if (FUNC_1(VAR_7[0])) {
   FUNC_4(VAR_5, VAR_1,
       "107|Abbreviations may not contain tabs or spaces");
   return (1);
  }
 if (VAR_6->argv[0]->len > 2)
  for (VAR_7 = VAR_6->argv[0]->bp,
      VAR_8 = VAR_6->argv[0]->len - 2; VAR_8; --VAR_8, ++VAR_7)
   if (FUNC_3(VAR_7[0]) != FUNC_3(VAR_7[1])) {
    FUNC_4(VAR_5, VAR_1,
"108|Abbreviations may not mix word/non-word characters, except at the end");
    return (1);
   }

 if (FUNC_6(VAR_5, ((void*)0), 0, VAR_6->argv[0]->bp, VAR_6->argv[0]->len,
     VAR_6->argv[1]->bp, VAR_6->argv[1]->len, VAR_3, VAR_4))
  return (1);

 FUNC_0(VAR_5->gp, VAR_0);
 return (0);
}
