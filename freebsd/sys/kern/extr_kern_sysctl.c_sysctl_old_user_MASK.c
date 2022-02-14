
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {size_t oldidx; scalar_t__ lock; size_t validlen; int * oldptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,char*) ;
 int FUNC_1 (void const*,char*,size_t) ;
 int FUNC_2 (void const*,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct sysctl_req *VAR_4, const void *VAR_5, size_t VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_9 = VAR_4->oldidx;
 VAR_4->oldidx += VAR_6;
 if (VAR_4->oldptr == ((void*)0))
  return (0);





 if (VAR_4->lock != VAR_1)
  FUNC_0(VAR_2 | VAR_3, ((void*)0),
      "sysctl_old_user()");
 VAR_7 = VAR_6;
 VAR_8 = VAR_4->validlen;
 if (VAR_8 <= VAR_9)
  VAR_7 = 0;
 else {
  if (VAR_7 > VAR_8 - VAR_9)
   VAR_7 = VAR_8 - VAR_9;
  if (VAR_4->lock == VAR_1) {
   VAR_10 = FUNC_2(VAR_5, (char *)VAR_4->oldptr +
       VAR_9, VAR_7);
  } else
   VAR_10 = FUNC_1(VAR_5, (char *)VAR_4->oldptr + VAR_9, VAR_7);
  if (VAR_10 != 0)
   return (VAR_10);
 }
 if (VAR_7 < VAR_6)
  return (VAR_0);
 return (0);
}
