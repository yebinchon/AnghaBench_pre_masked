
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ternary_tree ;
struct TYPE_4__ {struct TYPE_4__* hikid; struct TYPE_4__* eqkid; scalar_t__ splitchar; struct TYPE_4__* lokid; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (ternary_tree VAR_0)
{
  if (VAR_0)
    {
      FUNC_1 (VAR_0->lokid);
      if (VAR_0->splitchar)
 FUNC_1 (VAR_0->eqkid);
      FUNC_1 (VAR_0->hikid);
      FUNC_0 (VAR_0);
    }
}
