
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef scalar_t__ uint32_t ;
struct jz4780_nemc_softc {scalar_t__ clock_tick_psecs; int clk; int simplebus_sc; int res; int dev; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,unsigned long long*) ;
 struct jz4780_nemc_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__,int ,int *,int,int *) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_2)
{
 struct jz4780_nemc_softc *VAR_3 = FUNC_8(VAR_2);
 phandle_t VAR_4;
 uint64_t VAR_5;

 VAR_3->dev = VAR_2;

 if (FUNC_2(VAR_2, VAR_1, VAR_3->res)) {
  FUNC_9(VAR_2, "could not allocate resources for device\n");
  return (VAR_0);
 }

 VAR_4 = FUNC_12(VAR_2);


 FUNC_14(VAR_2, VAR_4);

 if (FUNC_11(VAR_4, &VAR_3->simplebus_sc) < 0)
  goto error;


 if (FUNC_6(VAR_2, 0, 0, &VAR_3->clk) != 0) {
  FUNC_9(VAR_2, "could not lookup device clock\n");
  goto error;
 }
 if (FUNC_5(VAR_3->clk) != 0) {
  FUNC_9(VAR_2, "could not enable device clock\n");
  goto error;
 }
 if (FUNC_7(VAR_3->clk, &VAR_5) != 0) {
  FUNC_9(VAR_2, "could not determine clock speed\n");
  goto error;
 }


 VAR_3->clock_tick_psecs = (uint32_t)(1000000000000ULL / VAR_5);




 FUNC_4(VAR_2);




 for (VAR_4 = FUNC_0(VAR_4); VAR_4 > 0; VAR_4 = FUNC_1(VAR_4))
  FUNC_13(VAR_2, VAR_4, 0, ((void*)0), -1, ((void*)0));

 return (FUNC_3(VAR_2));
error:
 FUNC_10(VAR_2);
 return (VAR_0);
}
