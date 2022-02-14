
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netmap_kring {scalar_t__ tx; TYPE_2__* na; TYPE_1__* ring; } ;
struct TYPE_4__ {int na_flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline int
FUNC_0(struct netmap_kring *VAR_4)
{
 return ((VAR_3 || VAR_4->ring->flags & VAR_1) &&
   VAR_4->na->na_flags & VAR_0 &&
   VAR_4->tx == VAR_2);
}
