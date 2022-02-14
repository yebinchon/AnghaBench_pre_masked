
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {scalar_t__ nif_unit; } ;
struct devdesc {scalar_t__ d_unit; } ;



__attribute__((used)) static int
FUNC_0(struct netif *VAR_0, void *VAR_1)
{
 struct devdesc *VAR_2 = VAR_1;

 if (VAR_2->d_unit == VAR_0->nif_unit)
  return (1);
 return(0);
}
