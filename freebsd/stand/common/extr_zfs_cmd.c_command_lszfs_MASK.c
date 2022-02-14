
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, char *VAR_4[])
{
 int VAR_5;

 if (VAR_3 != 2) {
  VAR_2 = "a single dataset must be supplied";
  return (VAR_0);
 }

 VAR_5 = FUNC_1(VAR_4[1]);
 if (VAR_5 != 0) {
  VAR_2 = FUNC_0(VAR_5);
  return (VAR_0);
 }
 return (VAR_1);
}
