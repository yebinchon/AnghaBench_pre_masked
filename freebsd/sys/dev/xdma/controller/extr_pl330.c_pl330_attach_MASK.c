
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl330_softc {int * ih; int ** res; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int ,int *,int,int *,int ,struct pl330_softc*,int ) ;
 struct pl330_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 struct pl330_softc *VAR_7;
 phandle_t VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_4(VAR_6);
 VAR_7->dev = VAR_6;

 if (FUNC_2(VAR_6, VAR_5, VAR_7->res)) {
  FUNC_5(VAR_6, "could not allocate resources for device\n");
  return (VAR_0);
 }


 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_7->res[VAR_11 + 1] == ((void*)0))
   break;
  VAR_10 = FUNC_3(VAR_6, VAR_7->res[VAR_11 + 1], VAR_2 | VAR_1,
      ((void*)0), VAR_4, VAR_7, VAR_7->ih[VAR_11]);
  if (VAR_10) {
   FUNC_5(VAR_6, "Unable to alloc interrupt resource.\n");
   return (VAR_0);
  }
 }

 VAR_9 = FUNC_6(VAR_6);
 VAR_8 = FUNC_1(VAR_9);
 FUNC_0(VAR_8, VAR_6);

 return (0);
}
