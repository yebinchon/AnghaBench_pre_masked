
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_blksize; int st_mode; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t,size_t) ;
 int VAR_2 ;
 size_t FUNC_1 (int ,int) ;
 long VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 char* FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (int,char*,size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 long FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (int,char*,size_t) ;

__attribute__((used)) static void
FUNC_11(int VAR_9)
{
 long VAR_10;
 int VAR_11, VAR_12;
 ssize_t VAR_13, VAR_14;
 static size_t VAR_15;
 static char *VAR_16 = ((void*)0);
 struct stat VAR_17;

 VAR_12 = FUNC_4(VAR_8);
 if (VAR_16 == ((void*)0)) {
  if (FUNC_5(VAR_12, &VAR_17))
   FUNC_3(1, "stdout");
  if (FUNC_2(VAR_17.st_mode)) {

   if (FUNC_8(VAR_5) > VAR_3)
    VAR_15 = FUNC_1(VAR_0, VAR_2 * 8);
   else
    VAR_15 = VAR_1;
  } else {
   VAR_15 = VAR_17.st_blksize;
   VAR_10 = FUNC_8(VAR_4);
   if (VAR_10 > 0)
    VAR_15 = FUNC_0(VAR_15, (size_t)VAR_10);
  }
  if ((VAR_16 = FUNC_6(VAR_15)) == ((void*)0))
   FUNC_3(1, "malloc() failure of IO buffer");
 }
 while ((VAR_13 = FUNC_7(VAR_9, VAR_16, VAR_15)) > 0)
  for (VAR_11 = 0; VAR_13; VAR_13 -= VAR_14, VAR_11 += VAR_14)
   if ((VAR_14 = FUNC_10(VAR_12, VAR_16 + VAR_11, (size_t)VAR_13)) < 0)
    FUNC_3(1, "stdout");
 if (VAR_13 < 0) {
  FUNC_9("%s", VAR_6);
  VAR_7 = 1;
 }
}
