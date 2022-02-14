
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_6__ {int PortSettings; } ;
struct TYPE_8__ {int Configuration; int Header; } ;
struct mpt_softc {int mpt_disc_enable; int mpt_ini_id; TYPE_2__* mpt_dev_page1; TYPE_1__ mpt_port_page2; TYPE_3__ mpt_port_page1; scalar_t__ mpt_tag_enable; } ;
struct TYPE_7__ {scalar_t__ Configuration; scalar_t__ RequestedParameters; } ;
typedef TYPE_3__ CONFIG_PAGE_SCSI_PORT_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct mpt_softc*,int ,char*) ;
 int FUNC_3 (struct mpt_softc*,char*,...) ;
 int FUNC_4 (struct mpt_softc*,int ,int *,int,int ,int) ;
 int FUNC_5 (struct mpt_softc*,int) ;
 int FUNC_6 (struct mpt_softc*,int ,int *,int,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_5->mpt_disc_enable = 0xff;
 VAR_5->mpt_tag_enable = 0;

 VAR_8 = ((1 << VAR_5->mpt_ini_id) <<
     VAR_1) | VAR_5->mpt_ini_id;
 if (VAR_5->mpt_port_page1.Configuration != VAR_8) {
  CONFIG_PAGE_SCSI_PORT_1 VAR_9;

  FUNC_3(VAR_5, "SPI Port Page 1 Config value bad (%x)- should "
      "be %x\n", VAR_5->mpt_port_page1.Configuration, VAR_8);
  VAR_9 = VAR_5->mpt_port_page1;
  VAR_9.Configuration = VAR_8;
  FUNC_0(&VAR_9);
  VAR_6 = FUNC_6(VAR_5, 0,
      &VAR_9.Header, sizeof(VAR_9), VAR_0, 5000);
  if (VAR_6) {
   return (-1);
  }
  VAR_6 = FUNC_4(VAR_5, 0,
      &VAR_9.Header, sizeof(VAR_9), VAR_0, 5000);
  if (VAR_6) {
   return (-1);
  }
  FUNC_1(&VAR_9);
  if (VAR_9.Configuration != VAR_8) {
   FUNC_3(VAR_5,
       "failed to reset SPI Port Page 1 Config value\n");
   return (-1);
  }
  VAR_5->mpt_port_page1 = VAR_9;
 }
 VAR_7 = VAR_5->mpt_port_page2.PortSettings &
     VAR_3;
 if (VAR_7 == VAR_2) {
  FUNC_2(VAR_5, VAR_4,
      "honoring BIOS transfer negotiations\n");
 } else {
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   VAR_5->mpt_dev_page1[VAR_7].RequestedParameters = 0;
   VAR_5->mpt_dev_page1[VAR_7].Configuration = 0;
   (void) FUNC_5(VAR_5, VAR_7);
  }
 }
 return (0);
}
