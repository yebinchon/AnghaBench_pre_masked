
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct padctl_softc {int dev; } ;
struct padctl_port {int * supply_vbus; } ;
struct padctl_lane {int name; } ;


 int FUNC_0 (struct padctl_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct padctl_softc*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 struct padctl_port* FUNC_4 (struct padctl_softc*,struct padctl_lane*) ;

__attribute__((used)) static int
FUNC_5(struct padctl_softc *VAR_2, struct padctl_lane *VAR_3)
{
 uint32_t VAR_4;
 struct padctl_port *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_2->dev, "Cannot find port for lane: %s\n",
      VAR_3->name);
 }
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_4 |= VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_4);

 if (VAR_5 != ((void*)0) && VAR_5->supply_vbus != ((void*)0)) {
  VAR_6 = FUNC_3(VAR_5->supply_vbus);
  if (VAR_6 != 0) {
   FUNC_2(VAR_2->dev,
       "Cannot disable vbus regulator\n");
   return (VAR_6);
  }
 }
 return (0);
}
