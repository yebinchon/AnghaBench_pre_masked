
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mcast_group {int timeout_work; TYPE_4__* demux; int last_req_tid; } ;
struct TYPE_6__ {int interface_id; } ;
struct TYPE_7__ {TYPE_1__ global; } ;
struct ib_sa_mcmember_data {TYPE_2__ port_gid; } ;
struct TYPE_8__ {int tid; } ;
struct ib_sa_mad {TYPE_3__ mad_hdr; int data; } ;
struct ib_mad {int dummy; } ;
struct TYPE_9__ {int mcg_wq; int * guid_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_sa_mad*,struct ib_sa_mad*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_4__*,struct ib_mad*) ;

__attribute__((used)) static int FUNC_5(struct mcast_group *VAR_1, struct ib_sa_mad *VAR_2)
{
 struct ib_sa_mad VAR_3;
 struct ib_sa_mcmember_data *VAR_4 = (struct ib_sa_mcmember_data *)&VAR_3.data;
 int VAR_5;


 FUNC_0(&VAR_3, VAR_2, sizeof VAR_3);


 VAR_4->port_gid.global.interface_id = VAR_1->demux->guid_cache[0];


 VAR_3.mad_hdr.tid = FUNC_1(VAR_1->demux);
 VAR_1->last_req_tid = VAR_3.mad_hdr.tid;

 VAR_5 = FUNC_4(VAR_1->demux, (struct ib_mad *)&VAR_3);

 if (!VAR_5) {

  FUNC_3(VAR_1->demux->mcg_wq, &VAR_1->timeout_work,
    FUNC_2(VAR_0));
 }

 return VAR_5;
}
