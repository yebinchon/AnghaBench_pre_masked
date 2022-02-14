
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
FUNC_2(ssize_t (*VAR_7) (int, void *, size_t), int VAR_8, void *VAR_9, size_t VAR_10)
{
 char *VAR_11 = VAR_9;
 size_t VAR_12 = 0;
 ssize_t VAR_13;
 struct pollfd VAR_14;

 VAR_14.fd = VAR_8;
 VAR_14.events = VAR_7 == FUNC_1 ? VAR_4 : VAR_5;
 while (VAR_10 > VAR_12) {
  VAR_13 = (VAR_7) (VAR_8, VAR_11 + VAR_12, VAR_10 - VAR_12);
  switch (VAR_13) {
  case -1:
   if (VAR_6 == VAR_1)
    continue;
   if ((VAR_6 == VAR_0) || (VAR_6 == VAR_2)) {
    (void)FUNC_0(&VAR_14, 1, -1);
    continue;
   }
   return 0;
  case 0:
   VAR_6 = VAR_3;
   return VAR_12;
  default:
   VAR_12 += (size_t)VAR_13;
  }
 }
 return (VAR_12);
}
