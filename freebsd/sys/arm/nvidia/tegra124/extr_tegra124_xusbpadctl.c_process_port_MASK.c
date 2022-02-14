
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padctl_softc {int dev; } ;
struct padctl_port {int type; int internal; int enabled; int * lane; int idx; int supply_vbus; int companion; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ,char*,void**) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ,char*,int *) ;
 void* FUNC_6 (struct padctl_softc*,int ,int ) ;
 struct padctl_port* FUNC_7 (struct padctl_softc*,char*) ;
 int * FUNC_8 (struct padctl_softc*,int ) ;

__attribute__((used)) static int
FUNC_9(struct padctl_softc *VAR_4, phandle_t VAR_5)
{

 struct padctl_port *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_7 = ((void*)0);
 VAR_8 = FUNC_1(VAR_5, "name", (void **)&VAR_7);
 if (VAR_8 <= 0) {
  FUNC_4(VAR_4->dev, "Cannot read port name.\n");
  return (VAR_0);
 }

 VAR_6 = FUNC_7(VAR_4, VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_4->dev, "Unknown port: %s\n", VAR_7);
  VAR_8 = VAR_0;
  goto end;
 }

 if (VAR_6->type == 128) {
  VAR_8 = FUNC_0(VAR_5, "nvidia,usb2-companion",
     &(VAR_6->companion), sizeof(VAR_6->companion));
  if (VAR_8 <= 0) {
   FUNC_4(VAR_4->dev,
       "Missing 'nvidia,usb2-companion' property "
       "for port: %s\n", VAR_7);
   VAR_8 = VAR_0;
   goto end;
  }
 }

 if (FUNC_2(VAR_5, "vbus-supply")) {
  VAR_8 = FUNC_5(VAR_4->dev, 0,
      "vbus-supply", &VAR_6->supply_vbus);
  if (VAR_8 <= 0) {
   FUNC_4(VAR_4->dev,
       "Cannot get 'vbus-supply' regulator "
       "for port: %s\n", VAR_7);
   VAR_8 = VAR_0;
   goto end;
  }
 }

 if (FUNC_2(VAR_5, "nvidia,internal"))
  VAR_6->internal = 1;

 if (VAR_6->lane == ((void*)0)) {
  switch(VAR_6->type) {

  case 129:
   VAR_6->lane = FUNC_6(VAR_4, VAR_3,
       VAR_6->idx);
   break;
  case 130:
   VAR_6->lane = FUNC_6(VAR_4, VAR_2,
       VAR_6->idx);
   break;
  case 131:
   VAR_6->lane = FUNC_6(VAR_4, VAR_1,
       VAR_6->idx);
   break;
  case 128:
   VAR_6->lane = FUNC_8(VAR_4, VAR_6->idx);
   break;
  }
 }
 if (VAR_6->lane == ((void*)0)) {
  FUNC_4(VAR_4->dev, "Cannot find lane for port: %s\n", VAR_7);
  VAR_8 = VAR_0;
  goto end;
 }
 VAR_6->enabled = 1;
 VAR_8 = 0;
end:
 if (VAR_7 != ((void*)0))
  FUNC_3(VAR_7);
 return (VAR_8);
}
