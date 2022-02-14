
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tgt_data; int enable_tgt; int enable_ini; int wwnn; int wwpn; TYPE_2__* sport; } ;
typedef TYPE_1__ ocs_vport_spec_t ;
struct TYPE_6__ {int is_vport; int sm; int ini_data; int tgt_data; } ;
typedef TYPE_2__ ocs_sport_t ;
typedef int ocs_domain_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ,int *) ;
 TYPE_2__* FUNC_2 (int *,int ,int ,int ,int ,int ) ;

int32_t
FUNC_3(ocs_domain_t *VAR_2, ocs_vport_spec_t *VAR_3)
{
 ocs_sport_t *VAR_4 = ((void*)0);

 if (VAR_2 == ((void*)0)) {
  return (0);
 }

 FUNC_0((VAR_3->sport == ((void*)0)), -1);


 VAR_3->sport = VAR_4 = FUNC_2(VAR_2, VAR_3->wwpn, VAR_3->wwnn, VAR_0, VAR_3->enable_ini, VAR_3->enable_tgt);

 if (VAR_4 == ((void*)0)) {
  return -1;
 }

 VAR_4->is_vport = 1;
 VAR_4->tgt_data = VAR_3->tgt_data;
 VAR_4->ini_data = VAR_3->tgt_data;


 FUNC_1(&VAR_4->sm, VAR_1, ((void*)0));

 return (0);
}
