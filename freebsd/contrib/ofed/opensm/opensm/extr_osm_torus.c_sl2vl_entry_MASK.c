
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct torus {TYPE_4__* osm; } ;
struct t_switch {TYPE_2__** port; } ;
struct TYPE_7__ {unsigned int min_sw_data_vls; unsigned int min_data_vls; } ;
struct TYPE_8__ {TYPE_3__ subn; } ;
struct TYPE_6__ {TYPE_1__* pgrp; } ;
struct TYPE_5__ {int port_grp; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static
unsigned FUNC_6(struct torus *VAR_1, struct t_switch *VAR_2,
       int VAR_3, int VAR_4, unsigned VAR_5)
{
 unsigned VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_2 && VAR_2->port[VAR_3])
  VAR_6 = VAR_2->port[VAR_3]->pgrp->port_grp / 2;
 else
  VAR_6 = VAR_0;

 if (VAR_2 && VAR_2->port[VAR_4])
  VAR_7 = VAR_2->port[VAR_4]->pgrp->port_grp / 2;
 else
  VAR_7 = VAR_0;

 if (VAR_2)
  VAR_9 = VAR_1->osm->subn.min_sw_data_vls;
 else
  VAR_9 = VAR_1->osm->subn.min_data_vls;

 VAR_8 = 0;
 if (VAR_2 && VAR_7 != VAR_0) {
  if (VAR_9 >= 2)
   VAR_8 |= FUNC_3(FUNC_1(VAR_5, VAR_7));
  if (VAR_9 >= 4)
   VAR_8 |= FUNC_5(VAR_6, VAR_7);
  if (VAR_9 >= 8)
   VAR_8 |= FUNC_4(FUNC_0(VAR_5));
 } else {
  if (VAR_9 >= 2)
   VAR_8 |= FUNC_2(FUNC_0(VAR_5));
 }
 return VAR_8;
}
