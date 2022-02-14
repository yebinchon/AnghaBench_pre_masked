
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct mpt_softc {TYPE_1__* mpt_dev_page1; } ;
struct TYPE_3__ {int Header; int RequestedParameters; } ;
typedef TYPE_1__ CONFIG_PAGE_SCSI_DEVICE_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct mpt_softc*,int ,char*,int,int ) ;
 int FUNC_2 (struct mpt_softc*,char*) ;
 int FUNC_3 (struct mpt_softc*,int,int *,int,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct mpt_softc *VAR_2, int VAR_3)
{
 CONFIG_PAGE_SCSI_DEVICE_1 VAR_4;
 int VAR_5;

 FUNC_1(VAR_2, VAR_1,
     "mpt_update_spi_config[%d].page1: Requested Params 0x%08x\n",
     VAR_3, VAR_2->mpt_dev_page1[VAR_3].RequestedParameters);
 VAR_4 = VAR_2->mpt_dev_page1[VAR_3];
 FUNC_0(&VAR_4);
 VAR_5 = FUNC_3(VAR_2, VAR_3,
     &VAR_4.Header, sizeof(VAR_4), VAR_0, 5000);
 if (VAR_5) {
  FUNC_2(VAR_2, "mpt_update_spi_config: write cur page failed\n");
  return (-1);
 }
 return (0);
}
