
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {size_t newlen; size_t newidx; scalar_t__ newptr; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct sysctl_req *VAR_1, void *VAR_2, size_t VAR_3)
{
 if (!VAR_1->newptr)
  return (0);
 if (VAR_1->newlen - VAR_1->newidx < VAR_3)
  return (VAR_0);
 FUNC_0((const char *)VAR_1->newptr + VAR_1->newidx, VAR_2, VAR_3);
 VAR_1->newidx += VAR_3;
 return (0);
}
