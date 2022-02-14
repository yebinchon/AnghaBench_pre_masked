
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtmmio_softc {int * vtmmio_child_dev; int * res; int * dev; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int*,int ) ;
 int * FUNC_1 (int *,int *,int) ;
 struct vtmmio_softc* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vtmmio_softc*) ;
 int FUNC_6 (struct vtmmio_softc*) ;
 int FUNC_7 (int *,int ) ;

int
FUNC_8(device_t VAR_6)
{
 struct vtmmio_softc *VAR_7;
 device_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6);
 VAR_7->dev = VAR_6;

 VAR_9 = 0;
 VAR_7->res[0] = FUNC_0(VAR_6, VAR_3, &VAR_9,
   VAR_2);
 if (!VAR_7->res[0]) {
  FUNC_3(VAR_6, "Cannot allocate memory window.\n");
  return (VAR_1);
 }

 FUNC_6(VAR_7);


 FUNC_7(VAR_6, VAR_4);

 if ((VAR_8 = FUNC_1(VAR_6, ((void*)0), -1)) == ((void*)0)) {
  FUNC_3(VAR_6, "Cannot create child device.\n");
  FUNC_7(VAR_6, VAR_5);
  FUNC_4(VAR_6);
  return (VAR_0);
 }

 VAR_7->vtmmio_child_dev = VAR_8;
 FUNC_5(VAR_7);

 return (0);
}
