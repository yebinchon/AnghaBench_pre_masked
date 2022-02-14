
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,int,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_2(VAR_1, -1, VAR_2);
  return -1;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_2);
 if (VAR_2 < 0) {
  FUNC_2(VAR_1, -1, VAR_2);
  return -1;
 }

 return 0;
}
