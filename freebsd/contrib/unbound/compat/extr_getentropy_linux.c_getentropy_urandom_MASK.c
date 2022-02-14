
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
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (void*,size_t) ;
 int FUNC_5 (int,int ,int*) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int,char*,size_t) ;

__attribute__((used)) static int
FUNC_8(void *VAR_11, size_t VAR_12)
{
 struct stat VAR_13;
 size_t VAR_14;
 int VAR_15, VAR_16, VAR_17;
 int VAR_18 = VAR_10;

start:

 VAR_17 = VAR_8;






 VAR_15 = FUNC_6("/dev/urandom", VAR_17, 0);
 if (VAR_15 == -1) {
  if (VAR_10 == VAR_1)
   goto start;
  goto nodevrandom;
 }

 FUNC_2(VAR_15, VAR_5, FUNC_2(VAR_15, VAR_4) | VAR_3);



 if (FUNC_3(VAR_15, &VAR_13) == -1 || !FUNC_0(VAR_13.st_mode)) {
  FUNC_1(VAR_15);
  goto nodevrandom;
 }
 if (FUNC_5(VAR_15, VAR_9, &VAR_16) == -1) {
  FUNC_1(VAR_15);
  goto nodevrandom;
 }
 for (VAR_14 = 0; VAR_14 < VAR_12; ) {
  size_t VAR_19 = VAR_12 - VAR_14;
  ssize_t VAR_20 = FUNC_7(VAR_15, (char*)VAR_11 + VAR_14, VAR_19);

  if (VAR_20 == -1) {
   if (VAR_10 == VAR_0 || VAR_10 == VAR_1)
    continue;
   FUNC_1(VAR_15);
   goto nodevrandom;
  }
  VAR_14 += VAR_20;
 }
 FUNC_1(VAR_15);
 if (FUNC_4(VAR_11, VAR_12) == 0) {
  VAR_10 = VAR_18;
  return 0;
 }
nodevrandom:
 VAR_10 = VAR_2;
 return -1;
}
