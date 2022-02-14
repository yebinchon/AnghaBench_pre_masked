
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int na_atime; } ;
struct TYPE_5__ {scalar_t__ am_timeo; int am_ttl; TYPE_1__ am_fattr; scalar_t__ am_timeo_w; } ;
typedef TYPE_2__ am_node ;


 int FUNC_0 (int *) ;

void
FUNC_1(am_node *VAR_0)
{
  VAR_0->am_timeo_w = 0;
  VAR_0->am_ttl = FUNC_0(&VAR_0->am_fattr.na_atime);
  VAR_0->am_ttl += VAR_0->am_timeo;
}
