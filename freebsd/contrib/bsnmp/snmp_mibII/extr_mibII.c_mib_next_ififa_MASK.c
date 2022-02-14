
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibifa {scalar_t__ ifindex; } ;


 struct mibifa* FUNC_0 (struct mibifa*,int ) ;
 int VAR_0 ;

struct mibifa *
FUNC_1(struct mibifa *VAR_1)
{
 struct mibifa *VAR_2;

 VAR_2 = VAR_1;
 while ((VAR_2 = FUNC_0(VAR_2, VAR_0)) != ((void*)0))
  if (VAR_2->ifindex == VAR_1->ifindex)
   return (VAR_2);
 return (((void*)0));
}
