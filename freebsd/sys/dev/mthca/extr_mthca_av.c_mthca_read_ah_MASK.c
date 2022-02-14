
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int gid_table_len; } ;
struct mthca_dev {TYPE_2__ limits; int ib_dev; } ;
struct mthca_ah {scalar_t__ type; TYPE_5__* av; } ;
struct TYPE_8__ {int raw; } ;
struct TYPE_9__ {int traffic_class; int flow_label; TYPE_3__ destination_gid; int source_gid; int hop_limit; } ;
struct TYPE_6__ {int service_level; int source_lid; int destination_lid; } ;
struct ib_ud_header {TYPE_4__ grh; TYPE_1__ lrh; } ;
struct TYPE_10__ {int sl_tclass_flowlabel; int g_slid; int port_pd; int gid_index; int dgid; int hop_limit; int dlid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int,int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (struct mthca_ah*) ;

int FUNC_6(struct mthca_dev *VAR_2, struct mthca_ah *VAR_3,
    struct ib_ud_header *VAR_4)
{
 if (VAR_3->type == VAR_1)
  return -VAR_0;

 VAR_4->lrh.service_level = FUNC_0(VAR_3->av->sl_tclass_flowlabel) >> 28;
 VAR_4->lrh.destination_lid = VAR_3->av->dlid;
 VAR_4->lrh.source_lid = FUNC_1(VAR_3->av->g_slid & 0x7f);
 if (FUNC_5(VAR_3)) {
  VAR_4->grh.traffic_class =
   (FUNC_0(VAR_3->av->sl_tclass_flowlabel) >> 20) & 0xff;
  VAR_4->grh.flow_label =
   VAR_3->av->sl_tclass_flowlabel & FUNC_2(0xfffff);
  VAR_4->grh.hop_limit = VAR_3->av->hop_limit;
  FUNC_3(&VAR_2->ib_dev,
      FUNC_0(VAR_3->av->port_pd) >> 24,
      VAR_3->av->gid_index % VAR_2->limits.gid_table_len,
      &VAR_4->grh.source_gid, ((void*)0));
  FUNC_4(VAR_4->grh.destination_gid.raw,
         VAR_3->av->dgid, 16);
 }

 return 0;
}
