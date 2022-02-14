
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adc_softc {int ih; int * res; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct adc_softc*,int ) ;
 int FUNC_1 (struct adc_softc*,int ,int) ;
 int VAR_12 ;
 struct adc_softc* VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int,int *,int ,struct adc_softc*,int *) ;
 struct adc_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_15)
{
 struct adc_softc *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_4(VAR_15);

 if (FUNC_2(VAR_15, VAR_14, VAR_16->res)) {
  FUNC_5(VAR_15, "could not allocate resources\n");
  return (VAR_6);
 }


 VAR_16->bst = FUNC_7(VAR_16->res[0]);
 VAR_16->bsh = FUNC_6(VAR_16->res[0]);

 VAR_13 = VAR_16;


 VAR_17 = FUNC_3(VAR_15, VAR_16->res[1], VAR_11 | VAR_10,
     ((void*)0), VAR_12, VAR_16, &VAR_16->ih);
 if (VAR_17) {
  FUNC_5(VAR_15, "Unable to alloc interrupt resource.\n");
  return (VAR_6);
 }


 VAR_18 = FUNC_0(VAR_16, VAR_0);
 VAR_18 &= ~(VAR_4 << VAR_5);
 VAR_18 |= (VAR_3 << VAR_5);
 FUNC_1(VAR_16, VAR_0, VAR_18);


 VAR_18 = FUNC_0(VAR_16, VAR_1);
 VAR_18 |= (VAR_7 | VAR_8);
 FUNC_1(VAR_16, VAR_1, VAR_18);


 VAR_18 = FUNC_0(VAR_16, VAR_2);
 VAR_18 &= VAR_9;
 FUNC_1(VAR_16, VAR_2, VAR_18);

 return (0);
}
