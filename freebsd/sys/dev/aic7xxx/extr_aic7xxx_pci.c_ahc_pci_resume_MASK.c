
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct seeprom_descriptor {void* sd_dataout_offset; void* sd_status_offset; void* sd_control_offset; struct ahc_softc* sd_ahc; } ;
struct TYPE_4__ {int csize_lattime; int command; int devconfig; } ;
struct TYPE_5__ {TYPE_1__ pci_softc; } ;
struct ahc_softc {int flags; TYPE_3__* seep_config; TYPE_2__ bus_softc; int dev_softc; } ;
struct TYPE_6__ {int adapter_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct ahc_softc*,struct seeprom_descriptor*) ;
 int FUNC_1 (struct seeprom_descriptor*) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct ahc_softc*,int ) ;
 int FUNC_5 (struct ahc_softc*,struct seeprom_descriptor*,int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct ahc_softc *VAR_6)
{

 FUNC_4(VAR_6, VAR_1);







 FUNC_3(VAR_6->dev_softc, VAR_3,
        VAR_6->bus_softc.pci_softc.devconfig, 4);
 FUNC_3(VAR_6->dev_softc, VAR_4,
        VAR_6->bus_softc.pci_softc.command, 1);
 FUNC_3(VAR_6->dev_softc, VAR_2,
        VAR_6->bus_softc.pci_softc.csize_lattime,
                 1);
 if ((VAR_6->flags & VAR_0) != 0) {
  struct seeprom_descriptor VAR_7;
  u_int VAR_8;

  VAR_7.sd_ahc = VAR_6;
  VAR_7.sd_control_offset = VAR_5;
  VAR_7.sd_status_offset = VAR_5;
  VAR_7.sd_dataout_offset = VAR_5;

  FUNC_0(VAR_6, &VAR_7);
  FUNC_5(VAR_6, &VAR_7,
          VAR_6->seep_config->adapter_control,
          &VAR_8);
  FUNC_1(&VAR_7);
 }
 return (FUNC_2(VAR_6));
}
