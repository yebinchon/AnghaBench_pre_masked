
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rsize_t ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;

errno_t
FUNC_1(void *VAR_2, rsize_t VAR_3, int VAR_4, rsize_t VAR_5)
{
 errno_t VAR_6;
 rsize_t VAR_7;
 unsigned char VAR_8;
 volatile unsigned char *VAR_9;

 VAR_6 = VAR_0;
 VAR_7 = VAR_5 < VAR_3 ? VAR_5 : VAR_3;
 VAR_8 = (unsigned char)VAR_4;
 VAR_9 = (unsigned char *)VAR_2;
 if (VAR_2 == ((void*)0)) {
  FUNC_0("memset_s : s is NULL", VAR_6);
 } else if (VAR_3 > VAR_1) {
  FUNC_0("memset_s : smax > RSIZE_MAX",
      VAR_6);
 } else if (VAR_5 > VAR_1) {
  FUNC_0("memset_s : n > RSIZE_MAX", VAR_6);
 } else {
  while (VAR_7 > 0)
   VAR_9[--VAR_7] = VAR_8;
  if (VAR_5 > VAR_3) {
   FUNC_0("memset_s : n > smax",
       VAR_6);
  } else {
   VAR_6 = 0;
  }
 }
 return (VAR_6);
}
