
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct part_conf {TYPE_2__* p_subn; } ;
struct TYPE_8__ {int part_guid_tbl; int full_guid_tbl; } ;
typedef TYPE_3__ osm_prtn_t ;
struct TYPE_9__ {int p_node; } ;
typedef TYPE_4__ osm_physp_t ;
typedef scalar_t__ membership_t ;
typedef int ib_net64_t ;
typedef int cl_map_t ;
typedef int cl_map_iterator_t ;
struct TYPE_6__ {int allow_both_pkeys; } ;
struct TYPE_7__ {TYPE_1__ opt; } ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 unsigned int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct part_conf *VAR_2, osm_prtn_t * VAR_3,
         unsigned VAR_4, membership_t VAR_5,
         ib_net64_t VAR_6)
{
 cl_map_t *VAR_7;
 cl_map_iterator_t VAR_8, VAR_9;
 osm_physp_t *VAR_10;
 if (!VAR_2->p_subn->opt.allow_both_pkeys || VAR_5 == VAR_0)
  return;

 switch (VAR_4){

 case 0:
  FUNC_6(VAR_5 == VAR_1 ?
      &VAR_3->full_guid_tbl : &VAR_3->part_guid_tbl);
  break;

 case 0xFF:
  FUNC_5(VAR_5 == VAR_1 ?
         &VAR_3->full_guid_tbl : &VAR_3->part_guid_tbl,
         FUNC_0(VAR_6));
  break;

 case 130:
 case 128:
 case 129:
  VAR_7 = (VAR_5 == VAR_1) ?
    &VAR_3->full_guid_tbl : &VAR_3->part_guid_tbl;

  VAR_8 = FUNC_2(VAR_7);
  while (VAR_8 != FUNC_1(VAR_7)) {
   VAR_9 = VAR_8;
   VAR_8 = FUNC_3(VAR_9);
   VAR_10 = (osm_physp_t *) FUNC_4(VAR_9);
   if (FUNC_8(VAR_10->p_node) == VAR_4)
    FUNC_7(VAR_7, VAR_9);
  }
  break;
 default:
  break;

 }
}
