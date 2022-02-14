
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint8_t ;
struct disk {TYPE_2__* d_drv1; } ;
typedef size_t off_t ;
struct TYPE_12__ {size_t disk_number; TYPE_3__* sc; } ;
typedef TYPE_2__ ipsdisk_softc_t ;
struct TYPE_13__ {TYPE_1__* drives; int sg_dmatag; } ;
typedef TYPE_3__ ips_softc_t ;
struct TYPE_14__ {size_t lba; int drivenum; int id; } ;
typedef TYPE_4__ ips_io_cmd ;
struct TYPE_15__ {int sc; int data_dmamap; int data_dmatag; int id; scalar_t__ command_buffer; int callback; } ;
typedef TYPE_5__ ips_command_t ;
struct TYPE_11__ {int drivenum; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,void*,size_t,int ,TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_5__**,int ) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_8, void *VAR_9, vm_offset_t VAR_10, off_t VAR_11,
   size_t VAR_12)
{
 ipsdisk_softc_t *VAR_13;
 ips_softc_t *VAR_14;
 ips_command_t *VAR_15;
 ips_io_cmd *VAR_16;
 struct disk *VAR_17;
 void *VAR_18;
 off_t VAR_19;
 size_t VAR_20;
 int VAR_21 = 0;

 VAR_17 = VAR_8;
 VAR_13 = VAR_17->d_drv1;

 if (VAR_13 == ((void*)0))
  return (VAR_1);
 VAR_14 = VAR_13->sc;

 if (FUNC_2(VAR_14, &VAR_15, 0) != 0) {
  FUNC_4("ipsd: failed to get cmd for dump\n");
  return (VAR_3);
 }

 VAR_15->data_dmatag = VAR_14->sg_dmatag;
 VAR_15->callback = VAR_6;

 VAR_16 = (ips_io_cmd *)VAR_15->command_buffer;
 VAR_16->id = VAR_15->id;
 VAR_16->drivenum= VAR_14->drives[VAR_13->disk_number].drivenum;

 VAR_19 = VAR_11;
 VAR_18 = VAR_9;

 while (VAR_12 > 0) {
  VAR_20 =
      (VAR_12 > VAR_5) ? VAR_5 : VAR_12;

  VAR_16->lba = VAR_19 / VAR_4;

  if (FUNC_1(VAR_15->data_dmatag, VAR_15->data_dmamap,
      VAR_18, VAR_20, VAR_7, VAR_15, VAR_0) != 0) {
   VAR_21 = VAR_2;
   break;
  }
  if (FUNC_0(VAR_15)) {
   VAR_21 = VAR_2;
   break;
  }

  VAR_12 -= VAR_20;
  VAR_19 += VAR_20;
  VAR_18 = (uint8_t *)VAR_18 + VAR_20;
 }

 FUNC_3(VAR_15->sc, VAR_15);
 return (VAR_21);
}
