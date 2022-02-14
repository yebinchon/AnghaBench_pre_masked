
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int osm_mgrp_t ;
struct TYPE_4__ {int mgrp_list; } ;
typedef TYPE_1__ osm_mgrp_box_t ;


 int * FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(osm_mgrp_box_t *VAR_1)
{
 osm_mgrp_t *VAR_2;

 while (FUNC_1(&VAR_1->mgrp_list)) {
  VAR_2 = FUNC_0(FUNC_2(&VAR_1->mgrp_list),
       VAR_2, VAR_0);
  FUNC_4(VAR_2);
 }
 FUNC_3(VAR_1);
}
