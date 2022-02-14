
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 char* FUNC_4 (int) ;

int
FUNC_5(gid_t VAR_2, gid_t VAR_3, gid_t VAR_4)
{
 int VAR_5 = 0, VAR_6;

 if (VAR_2 != VAR_4) {
  VAR_1 = VAR_0;
  return -1;
 }
 if (FUNC_1(VAR_3) < 0) {
  VAR_6 = VAR_1;
  FUNC_0("setegid %u: %.100s", (u_int)VAR_3, FUNC_4(VAR_1));
  VAR_1 = VAR_6;
  VAR_5 = -1;
 }
 if (FUNC_2(VAR_2) < 0) {
  VAR_6 = VAR_1;
  FUNC_0("setgid %u: %.100s", VAR_2, FUNC_4(VAR_1));
  VAR_1 = VAR_6;
  VAR_5 = -1;
 }

 return VAR_5;
}
