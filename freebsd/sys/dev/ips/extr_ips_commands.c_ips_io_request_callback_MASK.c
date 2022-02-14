
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct bio {int bio_pblkno; scalar_t__ bio_driver1; int bio_error; int bio_flags; } ;
struct TYPE_10__ {int (* ips_issue_cmd ) (TYPE_4__*) ;int command_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_11__ {int addr; int len; } ;
typedef TYPE_2__ ips_sg_element_t ;
struct TYPE_12__ {uintptr_t drivenum; int segnum; int buffaddr; int length; int lba; int command; int id; } ;
typedef TYPE_3__ ips_io_cmd ;
struct TYPE_13__ {int id; int data_dmamap; int data_dmatag; int command_dmamap; scalar_t__ command_phys_addr; scalar_t__ command_buffer; TYPE_1__* sc; struct bio* arg; } ;
typedef TYPE_4__ ips_command_t ;
struct TYPE_14__ {int ds_addr; int ds_len; } ;
typedef TYPE_5__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,int ,int,int ,int,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(void *VAR_10, bus_dma_segment_t *VAR_11,int VAR_12, int VAR_13)
{
 ips_softc_t *VAR_14;
 ips_command_t *VAR_15 = VAR_10;
 ips_sg_element_t *VAR_16;
 ips_io_cmd *VAR_17;
 struct bio *VAR_18 = VAR_15->arg;
 int VAR_19, VAR_20 = 0;
 u_int8_t VAR_21;

 VAR_14 = VAR_15->sc;
 if(VAR_13){
  FUNC_6("ips: error = %d in ips_sg_request_callback\n", VAR_13);
  FUNC_2(VAR_15->data_dmatag, VAR_15->data_dmamap);
  VAR_18->bio_flags |= VAR_0;
  VAR_18->bio_error = VAR_3;
  FUNC_3(VAR_14, VAR_15);
  FUNC_5(VAR_18);
  return;
 }
 VAR_17 = (ips_io_cmd *)VAR_15->command_buffer;
 VAR_17->id = VAR_15->id;
 VAR_17->drivenum = (uintptr_t)VAR_18->bio_driver1;
 if(VAR_12 != 1){
  if(FUNC_4(VAR_18))
   VAR_21 = VAR_7;
  else
   VAR_21 = VAR_8;
  VAR_17->segnum = VAR_12;
  VAR_16 = (ips_sg_element_t *)((u_int8_t *)
      VAR_15->command_buffer + VAR_5);
  for(VAR_19 = 0; VAR_19 < VAR_12; VAR_19++){
   VAR_16[VAR_19].addr = VAR_11[VAR_19].ds_addr;
   VAR_16[VAR_19].len = VAR_11[VAR_19].ds_len;
   VAR_20 += VAR_11[VAR_19].ds_len;
  }
  VAR_17->buffaddr =
          (u_int32_t)VAR_15->command_phys_addr + VAR_5;
 } else {
  if(FUNC_4(VAR_18))
   VAR_21 = VAR_6;
  else
   VAR_21 = VAR_9;
  VAR_17->buffaddr = VAR_11[0].ds_addr;
  VAR_20 = VAR_11[0].ds_len;
 }
 VAR_17->command = VAR_21;
 VAR_17->lba = VAR_18->bio_pblkno;
 VAR_20 = (VAR_20 + VAR_4 - 1)/VAR_4;
 VAR_17->length = VAR_20;
 FUNC_1(VAR_14->command_dmatag, VAR_15->command_dmamap,
   VAR_2);
 if(FUNC_4(VAR_18)) {
  FUNC_1(VAR_15->data_dmatag, VAR_15->data_dmamap,
    VAR_1);
 } else {
  FUNC_1(VAR_15->data_dmatag, VAR_15->data_dmamap,
    VAR_2);
 }
 FUNC_0(10, "ips test: command id: %d segments: %d "
  "pblkno: %lld length: %d, ds_len: %d\n", VAR_15->id, VAR_12,
  VAR_18->bio_pblkno,
  VAR_20, VAR_11[0].ds_len);

 VAR_14->ips_issue_cmd(VAR_15);
 return;
}
