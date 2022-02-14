
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simplebus_softc {int node; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 struct simplebus_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,scalar_t__,int ,int *,int,int *) ;
 scalar_t__ FUNC_6 (int ,struct simplebus_softc*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct simplebus_softc *VAR_2;
 phandle_t VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_7(VAR_1, 0);
 if (FUNC_6(VAR_2->node, VAR_2) < 0) {
  FUNC_4(VAR_1, "could not get ranges\n");
  return (VAR_0);
 }






 for (VAR_3 = FUNC_0(VAR_2->node); VAR_3 > 0; VAR_3 = FUNC_1(VAR_3))
  FUNC_5(VAR_1, VAR_3, 0, ((void*)0), -1, ((void*)0));
 return (FUNC_2(VAR_1));
}
