
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dirty; } ;
struct TYPE_6__ {int lock; TYPE_1__ sa; } ;
typedef TYPE_2__ osm_opensm_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int VAR_1 ;

int FUNC_3(osm_opensm_t * VAR_2)
{
 int VAR_3 = 1;

 FUNC_0(&VAR_2->lock);
 if (VAR_2->sa.dirty) {
  VAR_3 = FUNC_2(
   VAR_2, "opensm-sa.dump", VAR_1);
  if (!VAR_3)
   VAR_2->sa.dirty = VAR_0;
 }
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
