
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef int volatile ssize_t ;
typedef int volatile off_t ;


 int FUNC_0 (int volatile,int volatile) ;
 int volatile VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (struct timeval*,struct timeval*,struct timeval*) ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,char*,int volatile) ;

__attribute__((used)) static int
FUNC_8(int VAR_3, int VAR_4, char *VAR_5, size_t VAR_6,
 int VAR_7, int VAR_8)
{
 volatile off_t VAR_9;
 ssize_t VAR_10, VAR_11;
 char *VAR_12;
 struct timeval VAR_13, VAR_14, VAR_15;
 off_t VAR_16, VAR_17;
 int VAR_18;

 VAR_9 = VAR_8;
 if (VAR_7)
  VAR_17 = VAR_7;
 else
  VAR_17 = VAR_6;

 while (1) {
  if (VAR_7) {
   (void)FUNC_2(&VAR_13, ((void*)0));
  }
  VAR_1 = 0;
  VAR_10 = VAR_11 = 0;

  VAR_16 = VAR_17;
  while (VAR_16 > 0) {
   VAR_10 = FUNC_4(VAR_3, VAR_5, FUNC_0((off_t)VAR_6, VAR_16));
   if (VAR_10 <= 0)
    goto copy_done;
   VAR_0 += VAR_10;
   VAR_16 -= VAR_10;
   VAR_12 = VAR_5;
   while (VAR_10 > 0) {
    VAR_11 = FUNC_7(VAR_4, VAR_12, VAR_10);
    if (VAR_11 < 0)
     goto copy_done;
    VAR_10 -= VAR_11;
    VAR_12 += VAR_11;
   }
   if (VAR_8) {
    while (VAR_0 >= VAR_9) {
     (void)FUNC_3('#', VAR_2);
     VAR_9 += VAR_8;
    }
    (void)FUNC_1(VAR_2);
   }
  }
  if (VAR_7) {
   while (1) {
    (void)FUNC_2(&VAR_14, ((void*)0));
    FUNC_5(&VAR_14, &VAR_13, &VAR_15);
    if (VAR_15.tv_sec > 0)
     break;
    FUNC_6(1000000 - VAR_15.tv_usec);
   }
  }
 }

 copy_done:
 VAR_18 = VAR_1;
 if (VAR_8 && VAR_0 > 0) {
  if (VAR_0 < VAR_8)
   (void)FUNC_3('#', VAR_2);
  (void)FUNC_3('\n', VAR_2);
  (void)FUNC_1(VAR_2);
 }
 VAR_1 = VAR_18;
 if (VAR_10 == -1)
  return 1;
 if (VAR_11 == -1)
  return 2;

 return 0;
}
