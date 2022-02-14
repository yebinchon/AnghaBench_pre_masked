
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iomux_softc {int last_gpregaddr; int * mem_res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 struct iomux_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 struct iomux_softc* VAR_3 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct iomux_softc * VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4);
 VAR_5->dev = VAR_4;

 switch (FUNC_5()) {
 case 134:
  VAR_5->last_gpregaddr = 1 * sizeof(uint32_t);
  break;
 case 133:
  VAR_5->last_gpregaddr = 2 * sizeof(uint32_t);
  break;
 case 132:
 case 130:
 case 129:
 case 131:
  VAR_5->last_gpregaddr = 13 * sizeof(uint32_t);
  break;
 case 128:
  VAR_5->last_gpregaddr = 14 * sizeof(uint32_t);
  break;
 default:
  FUNC_2(VAR_4, "Unknown SoC type\n");
  return (VAR_0);
 }

 VAR_6 = 0;
 VAR_5->mem_res = FUNC_0(VAR_4, VAR_2, &VAR_6,
     VAR_1);
 if (VAR_5->mem_res == ((void*)0)) {
  FUNC_2(VAR_4, "Cannot allocate memory resources\n");
  return (VAR_0);
 }

 VAR_3 = VAR_5;
 FUNC_4(VAR_4, "fsl,pins");
 FUNC_3(VAR_4);

 return (0);
}
