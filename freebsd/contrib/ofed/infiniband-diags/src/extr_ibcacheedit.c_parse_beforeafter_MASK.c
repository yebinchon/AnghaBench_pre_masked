
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,char) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_2, uint64_t *VAR_3, uint64_t *VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;

 VAR_5 = FUNC_1(VAR_0, ':');
 if (!VAR_5 || !(*(VAR_5 + 1))) {
  FUNC_0(VAR_1, "invalid input '%s'\n", VAR_2);
  return -1;
 }
 (*VAR_5) = '\0';
 VAR_6 = VAR_2;
 VAR_7 = VAR_5 + 1;

 (*VAR_3) = FUNC_2(VAR_6, 0, 0);
 (*VAR_4) = FUNC_2(VAR_7, 0, 0);
 return 0;
}
