
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct parse {char* keyword; TYPE_1__* argval; } ;
struct TYPE_2__ {char* string; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,char const*,int *,size_t*,char const**) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*,char*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10 (
 struct parse *VAR_5,
 FILE *VAR_6
 )
{
 const char *VAR_7;
 u_short VAR_8;
 size_t VAR_9;
 const char *VAR_10;
 char *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_7 = VAR_5->argval[0].string;

 if (VAR_1 > 2)
  FUNC_2(VAR_3,
   "In Config\n"
   "Keyword = %s\n"
   "Command = %s\n", VAR_5->keyword, VAR_7);

 VAR_12 = FUNC_0(VAR_0, 0, 1,
        FUNC_9(VAR_7), VAR_7,
        &VAR_8, &VAR_9, &VAR_10);

 if (VAR_12 != 0)
  return;

 if (VAR_9 > 0 && '\n' == VAR_10[VAR_9 - 1])
  VAR_9--;

 VAR_11 = FUNC_1(VAR_9 + 1);
 FUNC_6(VAR_11, VAR_10, VAR_9);
 VAR_11[VAR_9] = '\0';

 VAR_13 = -1;
 if (1 == FUNC_8(VAR_11, "column %d syntax error", &VAR_13)
     && VAR_13 >= 0 && (size_t)VAR_13 <= FUNC_9(VAR_7) + 1) {
  if (VAR_2)
   FUNC_4("             *", VAR_4);
  else
   FUNC_7("%s\n", VAR_7);
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
   FUNC_3('_', VAR_4);
  FUNC_4("^\n", VAR_4);
 }
 FUNC_7("%s\n", VAR_11);
 FUNC_5(VAR_11);
}
