
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct ib_sa_mcmember_data {int scope_join_state; int port_gid; } ;
struct mcast_group {int demux; TYPE_3__* func; struct ib_sa_mcmember_data rec; } ;
struct TYPE_5__ {scalar_t__ comp_mask; void* attr_offset; int sm_key; } ;
struct TYPE_4__ {int base_version; int class_version; int attr_mod; void* attr_id; int tid; void* class_specific; void* status; int method; int mgmt_class; } ;
struct ib_sa_mad {TYPE_2__ sa_hdr; TYPE_1__ mad_hdr; int data; } ;
struct ib_mad {int dummy; } ;
struct TYPE_6__ {int join_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct ib_sa_mad*,int ,int) ;
 int FUNC_4 (int,int ,struct ib_mad*) ;

__attribute__((used)) static int FUNC_5(int VAR_3, struct mcast_group *VAR_4,
  struct ib_sa_mad *VAR_5, u16 VAR_6)
{
 struct ib_sa_mad VAR_7;
 struct ib_sa_mcmember_data *VAR_8 = (struct ib_sa_mcmember_data *)&VAR_7.data;
 struct ib_sa_mcmember_data *VAR_9 = (struct ib_sa_mcmember_data *)&VAR_5->data;
 int VAR_10;

 FUNC_3(&VAR_7, 0, sizeof VAR_7);
 VAR_7.mad_hdr.base_version = 1;
 VAR_7.mad_hdr.mgmt_class = VAR_0;
 VAR_7.mad_hdr.class_version = 2;
 VAR_7.mad_hdr.method = VAR_1;
 VAR_7.mad_hdr.status = FUNC_0(VAR_6);
 VAR_7.mad_hdr.class_specific = FUNC_0(0);
 VAR_7.mad_hdr.tid = VAR_5->mad_hdr.tid;
 *(u8 *)&VAR_7.mad_hdr.tid = 0;
 VAR_7.mad_hdr.attr_id = FUNC_0(VAR_2);
 VAR_7.mad_hdr.attr_mod = FUNC_1(0);
 VAR_7.sa_hdr.sm_key = VAR_5->sa_hdr.sm_key;
 VAR_7.sa_hdr.attr_offset = FUNC_0(7);
 VAR_7.sa_hdr.comp_mask = 0;

 *VAR_8 = VAR_4->rec;


 VAR_8->scope_join_state &= 0xf0;
 VAR_8->scope_join_state |= (VAR_4->func[VAR_3].join_state & 0x0f);
 FUNC_2(&VAR_8->port_gid, &VAR_9->port_gid, sizeof VAR_9->port_gid);

 VAR_10 = FUNC_4(VAR_3, VAR_4->demux, (struct ib_mad *)&VAR_7);
 return VAR_10;
}
