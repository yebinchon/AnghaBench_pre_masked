
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_2, const char *VAR_3, char *VAR_4)
{
 while (*VAR_2) {
  FUNC_0(2, VAR_4);
  if (VAR_3[(int)*VAR_2] == VAR_0)
   FUNC_1(VAR_1, VAR_4);
  FUNC_1(*VAR_2++, VAR_4);
 }
 return (VAR_4);
}
