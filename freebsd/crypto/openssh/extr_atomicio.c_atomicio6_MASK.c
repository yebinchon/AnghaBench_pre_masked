
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
typedef int ssize_t ;
typedef int f ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 ssize_t FUNC_1 (int,void*,size_t) ;

size_t
FUNC_2(ssize_t (*VAR_7) (int, void *, size_t), int VAR_8, void *VAR_9, size_t VAR_10,
    int (*VAR_11)(void *, size_t), void *VAR_12)
{
 char *VAR_13 = VAR_9;
 size_t VAR_14 = 0;
 ssize_t VAR_15;
 struct pollfd VAR_16;


 VAR_16.fd = VAR_8;
 VAR_16.events = VAR_7 == FUNC_1 ? VAR_4 : VAR_5;

 while (VAR_10 > VAR_14) {
  VAR_15 = (VAR_7) (VAR_8, VAR_13 + VAR_14, VAR_10 - VAR_14);
  switch (VAR_15) {
  case -1:
   if (VAR_6 == VAR_1)
    continue;
   if (VAR_6 == VAR_0 || VAR_6 == VAR_3) {

    (void)FUNC_0(&VAR_16, 1, -1);

    continue;
   }
   return 0;
  case 0:
   VAR_6 = VAR_2;
   return VAR_14;
  default:
   VAR_14 += (size_t)VAR_15;
   if (VAR_11 != ((void*)0) && VAR_11(VAR_12, (size_t)VAR_15) == -1) {
    VAR_6 = VAR_1;
    return VAR_14;
   }
  }
 }
 return VAR_14;
}
