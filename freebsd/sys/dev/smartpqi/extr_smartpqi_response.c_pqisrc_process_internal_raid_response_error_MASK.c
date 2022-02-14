
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {char* error_info; int req_pending; void* status; } ;
typedef TYPE_2__ rcb_t ;
struct TYPE_10__ {scalar_t__ status; scalar_t__ data_in_result; scalar_t__ data_out_result; } ;
typedef TYPE_3__ raid_path_error_info_elem_t ;
struct TYPE_8__ {scalar_t__ virt_addr; } ;
struct TYPE_11__ {TYPE_1__ err_buf_dma_mem; } ;
typedef TYPE_4__ pqisrc_softstate_t ;
typedef int error_info ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (TYPE_3__*,char*,int) ;

void FUNC_3(pqisrc_softstate_t *VAR_4,
           rcb_t *VAR_5, uint16_t VAR_6)
{
 raid_path_error_info_elem_t VAR_7;

 FUNC_0("IN");

 VAR_5->error_info = (char *) (VAR_4->err_buf_dma_mem.virt_addr) +
     (VAR_6 * VAR_0);
 VAR_5->status = VAR_3;
 FUNC_2(&VAR_7, VAR_5->error_info, sizeof(VAR_7));

 FUNC_1("error_status 0x%x data_in_result 0x%x data_out_result 0x%x\n",
  VAR_7.status, VAR_7.data_in_result, VAR_7.data_out_result);

 if (VAR_7.status != 0)
  VAR_5->status = VAR_2;
 if (VAR_7.data_in_result != VAR_1)
  VAR_5->status = VAR_2;
 if (VAR_7.data_out_result != VAR_1)
  VAR_5->status = VAR_2;

 VAR_5->req_pending = 0;

 FUNC_0("OUT");
}
