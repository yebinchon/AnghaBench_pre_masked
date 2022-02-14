
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ccb_scsiio {int dxfer_len; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int uintmax_t ;
struct TYPE_4__ {int gpa_ofs; int gpa_len; } ;
struct storvsc_gpa_range {int * gpa_page; TYPE_1__ gpa_range; } ;
struct hv_storvsc_request {int prp_cnt; struct storvsc_gpa_range prp_list; union ccb* ccb; } ;
struct TYPE_5__ {int ds_addr; scalar_t__ ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, bus_dma_segment_t *VAR_3, int VAR_4, int VAR_5)
{
 struct hv_storvsc_request *VAR_6 = VAR_2;
 union ccb *VAR_7 = VAR_6->ccb;
 struct ccb_scsiio *VAR_8 = &VAR_7->csio;
 struct storvsc_gpa_range *VAR_9;
 int VAR_10;

 VAR_9 = &VAR_6->prp_list;
 VAR_9->gpa_range.gpa_len = VAR_8->dxfer_len;
 VAR_9->gpa_range.gpa_ofs = VAR_3[0].ds_addr & VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9->gpa_page[VAR_10] = FUNC_1(VAR_3[VAR_10].ds_addr);
 }
 VAR_6->prp_cnt = VAR_4;
}
