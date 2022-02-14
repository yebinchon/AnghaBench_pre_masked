
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, char *VAR_4[])
{
 int VAR_5;
 char *VAR_6;

 if (VAR_3 > 2) {
  VAR_2 = "wrong number of arguments";
  return (VAR_0);
 }

 if (VAR_3 == 2) {
  VAR_5 = FUNC_2(VAR_4[1]);
 } else {
  VAR_6 = FUNC_0("zfs_be_root");
  if (VAR_6 == ((void*)0)) {

   return (VAR_1);
  }
  VAR_5 = FUNC_2(VAR_6);
 }

 if (VAR_5 != 0) {
  VAR_2 = FUNC_1(VAR_5);
  return (VAR_0);
 }

 return (VAR_1);
}
