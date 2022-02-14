
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int mgrp_list; int mlid; } ;
typedef TYPE_1__ osm_mgrp_box_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static osm_mgrp_box_t *FUNC_3(uint16_t VAR_0)
{
 osm_mgrp_box_t *VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (!VAR_1)
  return ((void*)0);

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->mlid = VAR_0;
 FUNC_0(&VAR_1->mgrp_list);

 return VAR_1;
}
