
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {size_t oldlen; scalar_t__ lock; scalar_t__ oldfunc; size_t validlen; scalar_t__ oldptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,size_t) ;

int
FUNC_1(struct sysctl_req *VAR_3, size_t VAR_4)
{
 int VAR_5;
 size_t VAR_6;

 VAR_6 = (VAR_4 > 0 && VAR_4 < VAR_3->oldlen) ? VAR_4 : VAR_3->oldlen;
 VAR_5 = 0;
 if (VAR_3->lock != VAR_1 && VAR_3->oldptr &&
     VAR_3->oldfunc == VAR_2) {
  if (VAR_6 != 0) {
   VAR_5 = FUNC_0(VAR_3->oldptr, VAR_6);
   if (VAR_5 != 0) {
    if (VAR_5 != VAR_0)
     return (VAR_5);
    VAR_6 = 0;
   }
  }
  VAR_3->lock = VAR_1;
  VAR_3->validlen = VAR_6;
 }
 return (0);
}
