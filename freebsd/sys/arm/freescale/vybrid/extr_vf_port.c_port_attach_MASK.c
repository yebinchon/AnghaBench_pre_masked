
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_softc {int * gpio_ih; int * res; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *,struct port_softc*,int *) ;
 struct port_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 struct port_softc* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 struct port_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6);

 if (FUNC_0(VAR_6, VAR_5, VAR_7->res)) {
  FUNC_3(VAR_6, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_7->bst = FUNC_5(VAR_7->res[0]);
 VAR_7->bsh = FUNC_4(VAR_7->res[0]);

 VAR_4 = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8 ++) {
  if ((FUNC_1(VAR_6, VAR_7->res[1 + VAR_8], VAR_1,
      VAR_3, ((void*)0), VAR_7, &VAR_7->gpio_ih[VAR_8]))) {
   FUNC_3(VAR_6,
       "ERROR: Unable to register interrupt handler\n");
   return (VAR_0);
  }
 }

 return (0);
}
