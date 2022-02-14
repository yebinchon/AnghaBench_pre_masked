
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * config_rom; } ;
struct fwohci_softc {TYPE_1__ fc; } ;
struct firewire_comm {int dev; } ;


 int FUNC_0 (struct firewire_comm*) ;
 int FUNC_1 (struct firewire_comm*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct fwohci_softc*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct fwohci_softc*,int ) ;
 int FUNC_5 (struct fwohci_softc*,int ,int) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct firewire_comm *VAR_7)
{
 struct fwohci_softc *VAR_8;
 uint32_t VAR_9;

 FUNC_3(VAR_7->dev, "Initiate bus reset\n");
 VAR_8 = (struct fwohci_softc *)VAR_7;

 FUNC_0(VAR_7);




 FUNC_2(VAR_8, VAR_6, FUNC_6(VAR_8->fc.config_rom[0]));
 FUNC_2(VAR_8, VAR_5, FUNC_6(VAR_8->fc.config_rom[2]));






 VAR_9 = FUNC_4(VAR_8, VAR_1);
 VAR_9 |= VAR_0 | VAR_4;
 VAR_9 = FUNC_5(VAR_8, VAR_1, VAR_9);





 FUNC_1(VAR_7);
}
