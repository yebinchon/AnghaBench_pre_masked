
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtmmio_softc {int ih; int * res; int dev; int * platform; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,struct vtmmio_softc*) ;
 int FUNC_1 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int *,int ,struct vtmmio_softc*,int *) ;
 struct vtmmio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, enum intr_type VAR_7)
{
 struct vtmmio_softc *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_6);

 if (VAR_8->platform != ((void*)0)) {
  VAR_10 = FUNC_0(VAR_8->platform, VAR_8->dev,
     VAR_5, VAR_8);
  if (VAR_10 == 0) {

   return (0);
  }
 }

 VAR_9 = 0;
 VAR_8->res[1] = FUNC_1(VAR_6, VAR_4, &VAR_9,
  VAR_3);
 if (!VAR_8->res[1]) {
  FUNC_4(VAR_6, "Can't allocate interrupt\n");
  return (VAR_0);
 }

 if (FUNC_2(VAR_6, VAR_8->res[1], VAR_2 | VAR_1,
  ((void*)0), VAR_5, VAR_8, &VAR_8->ih)) {
  FUNC_4(VAR_6, "Can't setup the interrupt\n");
  return (VAR_0);
 }

 return (0);
}
