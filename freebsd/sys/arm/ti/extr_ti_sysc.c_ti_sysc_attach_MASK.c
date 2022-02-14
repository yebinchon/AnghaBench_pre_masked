
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sysc_softc {int sc; int * dev; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 struct ti_sysc_softc* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,scalar_t__,int ,int *,int,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_1)
{
 struct ti_sysc_softc *VAR_2;
 device_t VAR_3;
 phandle_t VAR_4, VAR_5;

 VAR_2 = FUNC_3(VAR_1);
 VAR_2->dev = VAR_1;
 VAR_4 = FUNC_6(VAR_1);

 FUNC_9(VAR_1, VAR_4);
 if (FUNC_8(VAR_4, &VAR_2->sc) < 0) {
  FUNC_4(VAR_1, "could not get ranges\n");
  return (VAR_0);
 }

 for (VAR_5 = FUNC_0(VAR_4); VAR_5 > 0; VAR_5 = FUNC_1(VAR_5)) {
  VAR_3 = FUNC_7(VAR_1, VAR_5, 0, ((void*)0), -1, ((void*)0));
  if (VAR_3 != ((void*)0))
   FUNC_5(VAR_3);
 }

 return (FUNC_2(VAR_1));
}
