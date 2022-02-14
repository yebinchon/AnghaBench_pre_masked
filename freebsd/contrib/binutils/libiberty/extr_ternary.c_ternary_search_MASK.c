
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int splitchar; struct TYPE_3__* hikid; struct TYPE_3__* lokid; struct TYPE_3__* eqkid; } ;
typedef TYPE_1__ ternary_node ;
typedef int * PTR ;



PTR
FUNC_0 (const ternary_node *VAR_0, const char *VAR_1)
{
  const ternary_node *VAR_2;
  int VAR_3, VAR_4;
  VAR_4 = *VAR_1;
  VAR_2 = VAR_0;

  while (VAR_2)
    {

      VAR_3 = VAR_4 - VAR_2->splitchar;

      if (VAR_3 == 0)
 {
   if (VAR_4 == 0)
     return (PTR) VAR_2->eqkid;
   VAR_4 = *++VAR_1;
   VAR_2 = VAR_2->eqkid;
 }

      else if (VAR_3 < 0)
 VAR_2 = VAR_2->lokid;

      else
 VAR_2 = VAR_2->hikid;
    }
  return ((void*)0);
}
