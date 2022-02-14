
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int (* ips_poll_cmd ) (TYPE_4__*) ;int (* ips_issue_cmd ) (TYPE_4__*) ;int command_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_11__ {int addr; int len; } ;
typedef TYPE_2__ ips_sg_element_t ;
struct TYPE_12__ {int segnum; int buffaddr; int length; int command; } ;
typedef TYPE_3__ ips_io_cmd ;
struct TYPE_13__ {int data_dmamap; int data_dmatag; int command_dmamap; scalar_t__ command_phys_addr; scalar_t__ command_buffer; TYPE_1__* sc; } ;
typedef TYPE_4__ ips_command_t ;
struct TYPE_14__ {int ds_addr; int ds_len; } ;
typedef TYPE_5__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_5, bus_dma_segment_t *VAR_6, int VAR_7, int VAR_8)
{
 ips_softc_t *VAR_9;
 ips_command_t *VAR_10;
 ips_sg_element_t *VAR_11;
 ips_io_cmd *VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = (ips_command_t *)VAR_5;
 VAR_9 = VAR_10->sc;
 VAR_14 = 0;

 if (VAR_8) {
  FUNC_2("ipsd_dump_map_sg: error %d\n", VAR_8);
  FUNC_1(VAR_10, VAR_8);
  return;
 }

 VAR_12 = (ips_io_cmd *)VAR_10->command_buffer;

 if (VAR_7 != 1) {
  VAR_12->segnum = VAR_7;
  VAR_11 = (ips_sg_element_t *)((uint8_t *)
      VAR_10->command_buffer + VAR_2);
  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
   VAR_11[VAR_13].addr = VAR_6[VAR_13].ds_addr;
   VAR_11[VAR_13].len = VAR_6[VAR_13].ds_len;
   VAR_14 += VAR_6[VAR_13].ds_len;
  }
  VAR_12->buffaddr =
      (uint32_t)VAR_10->command_phys_addr + VAR_2;
  VAR_12->command = VAR_3;
 } else {
  VAR_12->buffaddr = VAR_6[0].ds_addr;
  VAR_14 = VAR_6[0].ds_len;
  VAR_12->segnum = 0;
  VAR_12->command = VAR_4;
 }

 VAR_14 = (VAR_14 + VAR_1 - 1) / VAR_1;
 VAR_12->length = VAR_14;
 FUNC_0(VAR_9->command_dmatag, VAR_10->command_dmamap,
     VAR_0);
 FUNC_0(VAR_10->data_dmatag, VAR_10->data_dmamap,
     VAR_0);

 VAR_9->ips_issue_cmd(VAR_10);
 VAR_9->ips_poll_cmd(VAR_10);
 return;
}
