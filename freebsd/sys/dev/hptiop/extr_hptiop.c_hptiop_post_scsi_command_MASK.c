
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; scalar_t__ target_lun; int target_id; int func_code; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uintmax_t ;
struct hpt_iop_srb {int dma_map; struct hpt_iop_hba* hba; union ccb* ccb; } ;
struct hpt_iop_hba {int max_sg_count; TYPE_2__* ops; int io_dmat; } ;
typedef int bus_dma_segment_t ;
struct TYPE_4__ {int (* post_req ) (struct hpt_iop_hba*,struct hpt_iop_srb*,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hpt_iop_hba*,struct hpt_iop_srb*) ;
 int FUNC_3 (struct hpt_iop_hba*,struct hpt_iop_srb*,int *,int) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, bus_dma_segment_t *VAR_2,
     int VAR_3, int VAR_4)
{
 struct hpt_iop_srb *VAR_5 = (struct hpt_iop_srb *)VAR_1;
 union ccb *VAR_6 = VAR_5->ccb;
 struct hpt_iop_hba *VAR_7 = VAR_5->hba;

 if (VAR_4 || VAR_3 > VAR_7->max_sg_count) {
  FUNC_0(("hptiop: func_code=%x tid=%x lun=%jx nsegs=%d\n",
   VAR_6->ccb_h.func_code,
   VAR_6->ccb_h.target_id,
   (uintmax_t)VAR_6->ccb_h.target_lun, VAR_3));
  VAR_6->ccb_h.status = VAR_0;
  FUNC_1(VAR_7->io_dmat, VAR_5->dma_map);
  FUNC_2(VAR_7, VAR_5);
  FUNC_4(VAR_6);
  return;
 }

 VAR_7->ops->post_req(VAR_7, VAR_5, VAR_2, VAR_3);
}
