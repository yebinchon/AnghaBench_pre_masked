
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* immd_src; int isgl_src; } ;
struct TYPE_5__ {void* plen; TYPE_1__ u; scalar_t__ r4; scalar_t__ r3; scalar_t__ stag_inv; void* sendop_pkd; } ;
union t4_wr {TYPE_2__ send; } ;
typedef int u8 ;
typedef int u32 ;
struct t4_sq {int dummy; } ;
struct ibv_send_wr {int num_sge; int send_flags; int sg_list; } ;
struct fw_ri_sge {int dummy; } ;
struct fw_ri_isgl {int dummy; } ;
struct fw_ri_immd {int dummy; } ;
struct TYPE_6__ {scalar_t__ immdlen; scalar_t__ r2; scalar_t__ r1; int op; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct t4_sq*,TYPE_3__*,struct ibv_send_wr*,int ,int*) ;
 int FUNC_3 (int ,int ,int,int*) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct t4_sq *VAR_8, union t4_wr *VAR_9,
      struct ibv_send_wr *VAR_10, u8 *VAR_11)
{
 u32 VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_10->num_sge > VAR_7)
  return -VAR_0;
 if (VAR_10->send_flags & VAR_5)
  VAR_9->send.sendop_pkd = FUNC_4(
   FUNC_1(VAR_3));
 else
  VAR_9->send.sendop_pkd = FUNC_4(
   FUNC_1(VAR_2));
 VAR_9->send.stag_inv = 0;
 VAR_9->send.r3 = 0;
 VAR_9->send.r4 = 0;

 VAR_12 = 0;
 if (VAR_10->num_sge) {
  if (VAR_10->send_flags & VAR_4) {
   VAR_14 = FUNC_2(VAR_8, VAR_9->send.u.immd_src, VAR_10,
      VAR_6, &VAR_12);
   if (VAR_14)
    return VAR_14;
   VAR_13 = sizeof VAR_9->send + sizeof(struct fw_ri_immd) +
          VAR_12;
  } else {
   VAR_14 = FUNC_3(VAR_9->send.u.isgl_src,
      VAR_10->sg_list, VAR_10->num_sge, &VAR_12);
   if (VAR_14)
    return VAR_14;
   VAR_13 = sizeof VAR_9->send + sizeof(struct fw_ri_isgl) +
          VAR_10->num_sge * sizeof (struct fw_ri_sge);
  }
 } else {
  VAR_9->send.u.immd_src[0].op = VAR_1;
  VAR_9->send.u.immd_src[0].r1 = 0;
  VAR_9->send.u.immd_src[0].r2 = 0;
  VAR_9->send.u.immd_src[0].immdlen = 0;
  VAR_13 = sizeof VAR_9->send + sizeof(struct fw_ri_immd);
  VAR_12 = 0;
 }
 *VAR_11 = FUNC_0(VAR_13, 16);
 VAR_9->send.plen = FUNC_4(VAR_12);
 return 0;
}
