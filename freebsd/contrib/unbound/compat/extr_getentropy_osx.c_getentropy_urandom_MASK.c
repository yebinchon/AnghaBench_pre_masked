
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (void*,size_t) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (int,char*,size_t) ;

__attribute__((used)) static int
FUNC_7(void *VAR_10, size_t VAR_11)
{
 struct stat VAR_12;
 size_t VAR_13;
 int VAR_14, VAR_15;
 int VAR_16 = VAR_9;

start:

 VAR_15 = VAR_8;






 VAR_14 = FUNC_5("/dev/urandom", VAR_15, 0);
 if (VAR_14 == -1) {
  if (VAR_9 == VAR_1)
   goto start;
  goto nodevrandom;
 }

 FUNC_2(VAR_14, VAR_5, FUNC_2(VAR_14, VAR_4) | VAR_3);



 if (FUNC_3(VAR_14, &VAR_12) == -1 || !FUNC_0(VAR_12.st_mode)) {
  FUNC_1(VAR_14);
  goto nodevrandom;
 }
 for (VAR_13 = 0; VAR_13 < VAR_11; ) {
  size_t VAR_17 = VAR_11 - VAR_13;
  ssize_t VAR_18 = FUNC_6(VAR_14, (char*)VAR_10 + VAR_13, VAR_17);

  if (VAR_18 == -1) {
   if (VAR_9 == VAR_0 || VAR_9 == VAR_1)
    continue;
   FUNC_1(VAR_14);
   goto nodevrandom;
  }
  VAR_13 += VAR_18;
 }
 FUNC_1(VAR_14);
 if (FUNC_4(VAR_10, VAR_11) == 0) {
  VAR_9 = VAR_16;
  return 0;
 }
nodevrandom:
 VAR_9 = VAR_2;
 return -1;
}
