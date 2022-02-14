
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {size_t newlen; size_t newidx; scalar_t__ newptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,char*) ;
 int FUNC_1 (char const*,void*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct sysctl_req *VAR_3, void *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (!VAR_3->newptr)
  return (0);
 if (VAR_3->newlen - VAR_3->newidx < VAR_5)
  return (VAR_0);
 FUNC_0(VAR_1 | VAR_2, ((void*)0),
     "sysctl_new_user()");
 VAR_6 = FUNC_1((const char *)VAR_3->newptr + VAR_3->newidx, VAR_4, VAR_5);
 VAR_3->newidx += VAR_5;
 return (VAR_6);
}
