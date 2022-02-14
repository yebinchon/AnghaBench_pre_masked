
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;

int
FUNC_1(int VAR_5)
{
 if (VAR_5 < 0) {
  VAR_4 = VAR_1;
  return (-1);
 }

 if (VAR_5 > 0) {
  if (VAR_5 > VAR_0) {
   VAR_4 = VAR_2;
   return (-1);
  }
  FUNC_0("ctf_version: client using version %d\n", VAR_5);
  VAR_3 = VAR_5;
 }

 return (VAR_3);
}
