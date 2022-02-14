
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ,char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_2,
     uint64_t *VAR_3,
     uint64_t *VAR_4,
     uint64_t *VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;

 VAR_6 = FUNC_1(VAR_0, ':');
 if (!VAR_6 || !(*(VAR_6 + 1))) {
  FUNC_0(VAR_1, "invalid input '%s'\n", VAR_2);
  return -1;
 }
 VAR_8 = VAR_2;
 VAR_9 = VAR_6 + 1;

 VAR_7 = FUNC_1(VAR_9, ':');
 if (!VAR_7 || !(*(VAR_7 + 1))) {
  FUNC_0(VAR_1, "invalid input '%s'\n", VAR_2);
  return -1;
 }
 (*VAR_6) = '\0';
 (*VAR_7) = '\0';
 VAR_10 = VAR_7 + 1;

 (*VAR_3) = FUNC_2(VAR_8, 0, 0);
 (*VAR_4) = FUNC_2(VAR_9, 0, 0);
 (*VAR_5) = FUNC_2(VAR_10, 0, 0);
 return 0;
}
