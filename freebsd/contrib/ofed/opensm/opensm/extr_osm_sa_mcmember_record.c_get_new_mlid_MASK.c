
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int str ;
struct TYPE_11__ {scalar_t__ consolidate_ipv6_snm_req; } ;
struct TYPE_12__ {scalar_t__ max_mcast_lid_ho; int * mboxes; TYPE_1__ opt; } ;
typedef TYPE_2__ osm_subn_t ;
struct TYPE_13__ {TYPE_2__* p_subn; int p_log; } ;
typedef TYPE_3__ osm_sa_t ;
typedef scalar_t__ ib_net16_t ;
struct TYPE_15__ {int raw; } ;
struct TYPE_14__ {TYPE_6__ mgid; scalar_t__ mlid; } ;
typedef TYPE_4__ ib_member_rec_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_4 (int ,int ,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static ib_net16_t FUNC_7(osm_sa_t * VAR_4, ib_member_rec_t * VAR_5)
{
 osm_subn_t *VAR_6 = VAR_4->p_subn;
 ib_net16_t VAR_7 = VAR_5->mlid;
 unsigned VAR_8, VAR_9;

 if (VAR_7 && FUNC_2(VAR_7) >= VAR_1
     && FUNC_2(VAR_7) <= VAR_6->max_mcast_lid_ho
     && !FUNC_6(VAR_6, VAR_7))
  return VAR_7;

 if (VAR_4->p_subn->opt.consolidate_ipv6_snm_req
     && FUNC_5(&VAR_5->mgid)
     && (VAR_7 = FUNC_3(VAR_4->p_subn, &VAR_5->mgid))) {
  char VAR_10[VAR_2];
  FUNC_0(VAR_4->p_log, VAR_3,
   "Special Case Solicited Node Mcast Join for MGID %s\n",
   FUNC_4(VAR_0, VAR_5->mgid.raw, VAR_10, sizeof(VAR_10)));
  return VAR_7;
 }

 VAR_9 = VAR_6->max_mcast_lid_ho - VAR_1 + 1;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  if (!VAR_4->p_subn->mboxes[VAR_8])
   return FUNC_1(VAR_8 + VAR_1);

 return 0;
}
