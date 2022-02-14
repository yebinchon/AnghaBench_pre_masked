
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (void*,size_t) ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int,char*,size_t) ;

__attribute__((used)) static int
FUNC_5(void *VAR_10, size_t VAR_11)
{
 size_t VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = VAR_9;

start:

 VAR_14 = VAR_8;






 VAR_13 = FUNC_3("/dev/urandom", VAR_14, 0);
 if (VAR_13 == -1) {
  if (VAR_9 == VAR_1)
   goto start;
  goto nodevrandom;
 }





 for (VAR_12 = 0; VAR_12 < VAR_11; ) {
  size_t VAR_16 = VAR_11 - VAR_12;
  ssize_t VAR_17 = FUNC_4(VAR_13, (char*)VAR_10 + VAR_12, VAR_16);

  if (VAR_17 == -1) {
   if (VAR_9 == VAR_0 || VAR_9 == VAR_1)
    continue;
   FUNC_0(VAR_13);
   goto nodevrandom;
  }
  VAR_12 += VAR_17;
 }
 FUNC_0(VAR_13);
 if (FUNC_1(VAR_10, VAR_11) == 0) {
  VAR_9 = VAR_15;
  return 0;
 }
nodevrandom:
 VAR_9 = VAR_2;
 return -1;
}
