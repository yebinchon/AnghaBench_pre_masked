
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_desc {void* args; void* half_liner; } ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct script_desc *VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0], *VAR_4;
 FILE *VAR_5;

 VAR_5 = FUNC_2(VAR_2, "r");
 if (!VAR_5)
  return -1;

 while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_5)) {
  VAR_4 = FUNC_3(VAR_3);
  if (FUNC_5(VAR_4) == 0)
   continue;
  if (*VAR_4 != '#')
   continue;
  VAR_4++;
  if (FUNC_5(VAR_4) && *VAR_4 == '!')
   continue;

  VAR_4 = FUNC_3(VAR_4);
  if (FUNC_5(VAR_4) && VAR_4[FUNC_5(VAR_4) - 1] == '\n')
   VAR_4[FUNC_5(VAR_4) - 1] = '\0';

  if (!FUNC_6(VAR_4, "description:", FUNC_5("description:"))) {
   VAR_4 += FUNC_5("description:");
   VAR_1->half_liner = FUNC_4(FUNC_3(VAR_4));
   continue;
  }

  if (!FUNC_6(VAR_4, "args:", FUNC_5("args:"))) {
   VAR_4 += FUNC_5("args:");
   VAR_1->args = FUNC_4(FUNC_3(VAR_4));
   continue;
  }
 }

 FUNC_0(VAR_5);

 return 0;
}
