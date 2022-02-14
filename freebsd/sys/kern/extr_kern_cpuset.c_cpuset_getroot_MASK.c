
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int cs_flags; struct cpuset* cs_parent; } ;


 int VAR_0 ;

__attribute__((used)) static struct cpuset *
FUNC_0(struct cpuset *VAR_1)
{

 while ((VAR_1->cs_flags & VAR_0) == 0 && VAR_1->cs_parent != ((void*)0))
  VAR_1 = VAR_1->cs_parent;
 return (VAR_1);
}
