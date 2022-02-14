
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_clock_softc {int res; int * clkdom; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct jz4780_clock_softc*) ;
 int FUNC_1 (struct jz4780_clock_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 struct jz4780_clock_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (struct jz4780_clock_softc*) ;
 scalar_t__ FUNC_10 (struct jz4780_clock_softc*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 struct jz4780_clock_softc *VAR_4;

 VAR_4 = FUNC_7(VAR_3);
 if (FUNC_2(VAR_3, VAR_2, VAR_4->res)) {
  FUNC_8(VAR_3, "could not allocate resources for device\n");
  return (VAR_0);
 }

 VAR_4->dev = VAR_3;
 FUNC_1(VAR_4);

 VAR_4->clkdom = FUNC_4(VAR_3);
 if (VAR_4->clkdom == ((void*)0))
  goto fail;
 if (FUNC_10(VAR_4) != 0)
  goto fail;
 if (FUNC_6(VAR_4->clkdom) != 0)
  goto fail;
 if (FUNC_9(VAR_4) != 0)
  goto fail;
 if (VAR_1)
  FUNC_5(VAR_4->clkdom);

 return (0);
fail:
 FUNC_3(VAR_3, VAR_2, VAR_4->res);
 FUNC_0(VAR_4);

 return (VAR_0);
}
