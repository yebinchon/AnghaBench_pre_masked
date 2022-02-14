
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snps_softc {int * reset; int * apb_pclk; int * baudclk; } ;
typedef int * hwreset_t ;
typedef int device_t ;
typedef int * clk_t ;


 int FUNC_0 (int *) ;
 struct snps_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{





 int VAR_1;
 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 != 0)
  return (VAR_1);
 return (0);
}
