
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_consumer {scalar_t__ ace; scalar_t__ acw; scalar_t__ acr; } ;



int
FUNC_0(struct g_consumer *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (0);

 if (VAR_0->acr || VAR_0->acw || VAR_0->ace)
  return (1);

 return (0);
}
