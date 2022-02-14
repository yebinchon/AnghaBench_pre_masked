
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {scalar_t__ oldlen; scalar_t__ oldidx; scalar_t__ oldptr; } ;


 int VAR_0 ;
 int FUNC_0 (void const*,char*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct sysctl_req *VAR_1, const void *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;

 if (VAR_1->oldptr) {
  VAR_4 = VAR_3;
  if (VAR_1->oldlen <= VAR_1->oldidx)
   VAR_4 = 0;
  else
   if (VAR_4 > VAR_1->oldlen - VAR_1->oldidx)
    VAR_4 = VAR_1->oldlen - VAR_1->oldidx;
  if (VAR_4 > 0)
   FUNC_0(VAR_2, (char *)VAR_1->oldptr + VAR_1->oldidx, VAR_4);
 }
 VAR_1->oldidx += VAR_3;
 if (VAR_1->oldptr && VAR_4 != VAR_3)
  return (VAR_0);
 return (0);
}
