
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_2(char **VAR_2, int *VAR_3, const char *VAR_4)
{
 const char *VAR_5 = *VAR_2;

 VAR_1 = 0;
 *VAR_3 = FUNC_1(*VAR_2, VAR_2, 0);
 if (VAR_1 || *VAR_2 == VAR_5) {
  FUNC_0("'%s' is not a valid number.\n", VAR_4);
  return -VAR_0;
 }
 return 0;
}
