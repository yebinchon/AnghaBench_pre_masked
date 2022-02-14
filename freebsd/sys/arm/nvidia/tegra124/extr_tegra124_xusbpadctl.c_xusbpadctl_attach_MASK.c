
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padctl_softc {int rst; int * mem_res; int dev; } ;
struct padctl_port {int (* init ) (struct padctl_softc*,struct padctl_port*) ;int name; int enabled; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 struct padctl_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,int *) ;
 int FUNC_5 (struct padctl_softc*) ;
 int FUNC_6 (struct padctl_port*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct padctl_softc*,int ) ;
 struct padctl_port* VAR_3 ;
 int FUNC_9 (struct padctl_softc*,struct padctl_port*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 struct padctl_softc * VAR_5;
 int VAR_6, VAR_7, VAR_8;
 struct padctl_port *VAR_9;
 phandle_t VAR_10;

 VAR_5 = FUNC_1(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_10 = FUNC_7(VAR_4);

 VAR_7 = 0;
 VAR_5->mem_res = FUNC_0(VAR_4, VAR_2, &VAR_7,
     VAR_1);
 if (VAR_5->mem_res == ((void*)0)) {
  FUNC_2(VAR_4, "Cannot allocate memory resources\n");
  return (VAR_0);
 }

 VAR_8 = FUNC_4(VAR_4, 0, "padctl", &VAR_5->rst);
 if (VAR_8 != 0) {
  FUNC_2(VAR_4, "Cannot get 'padctl' reset: %d\n", VAR_8);
  return (VAR_8);
 }
 VAR_8 = FUNC_3(VAR_5->rst);
 if (VAR_8 != 0) {
  FUNC_2(VAR_4, "Cannot unreset 'padctl' reset: %d\n", VAR_8);
  return (VAR_8);
 }

 FUNC_5(VAR_5);

 VAR_8 = FUNC_8(VAR_5, VAR_10);
 if (VAR_8 != 0) {
  FUNC_2(VAR_4, "Cannot parse fdt configuration: %d\n", VAR_8);
  return (VAR_8);
 }
 for (VAR_6 = 0; VAR_6 < FUNC_6(VAR_3); VAR_6++) {
  VAR_9 = VAR_3 + VAR_6;
  if (!VAR_9->enabled)
   continue;
  if (VAR_9->init == ((void*)0))
   continue;
  VAR_8 = VAR_9->init(VAR_5, VAR_9);
  if (VAR_8 != 0) {
   FUNC_2(VAR_4, "Cannot init port '%s'\n",
       VAR_9->name);
   return (VAR_8);
  }
 }
 return (0);
}
