
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int argc; int iflags; TYPE_1__** argv; } ;
struct TYPE_8__ {char* tag_last; } ;
struct TYPE_7__ {int len; int bp; } ;
typedef int TAGQ ;
typedef int SCR ;
typedef TYPE_2__ EX_PRIVATE ;
typedef TYPE_3__ EXCMD ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_3 (int *,int ) ;
 long FUNC_4 (char*) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ,char*) ;
 scalar_t__ FUNC_9 (int *,int *,int ,int ) ;
 char* FUNC_10 (int *,int ,int ) ;

int
FUNC_11(SCR *VAR_5, EXCMD *VAR_6)
{
 EX_PRIVATE *VAR_7;
 TAGQ *VAR_8;
 long VAR_9;

 VAR_7 = FUNC_0(VAR_5);
 switch (VAR_6->argc) {
 case 1:
  if (VAR_7->tag_last != ((void*)0))
   FUNC_7(VAR_7->tag_last);

  if ((VAR_7->tag_last = FUNC_10(VAR_5, VAR_6->argv[0]->bp,
      VAR_6->argv[0]->len)) == ((void*)0)) {
   FUNC_8(VAR_5, VAR_3, ((void*)0));
   return (1);
  }


  if ((VAR_9 =
      FUNC_3(VAR_5, VAR_4)) != 0 && FUNC_4(VAR_7->tag_last) > VAR_9)
   VAR_7->tag_last[VAR_9] = '\0';
  break;
 case 0:
  if (VAR_7->tag_last == ((void*)0)) {
   FUNC_8(VAR_5, VAR_2, "158|No previous tag entered");
   return (1);
  }
  break;
 default:
  FUNC_5();
 }


 if ((VAR_8 = FUNC_6(VAR_5, VAR_7->tag_last)) == ((void*)0))
  return (1);

 if (FUNC_9(VAR_5, VAR_8, FUNC_2(VAR_6, VAR_1),
          FUNC_1(VAR_6->iflags, VAR_0)))
  return 1;

 return 0;
}
