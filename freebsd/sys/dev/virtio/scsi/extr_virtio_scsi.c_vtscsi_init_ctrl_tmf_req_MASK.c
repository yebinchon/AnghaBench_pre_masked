
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct virtio_scsi_ctrl_tmf_req {uintptr_t tag; int subtype; int type; int lun; } ;
struct ccb_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccb_hdr*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ccb_hdr *VAR_1, uint32_t VAR_2,
    uintptr_t VAR_3, struct virtio_scsi_ctrl_tmf_req *VAR_4)
{

 FUNC_0(VAR_1, VAR_4->lun);

 VAR_4->type = VAR_0;
 VAR_4->subtype = VAR_2;
 VAR_4->tag = VAR_3;
}
