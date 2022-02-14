
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {int pcie_cap_addr; int width; } ;
struct TYPE_11__ {scalar_t__ rev; TYPE_1__ pci; } ;
struct TYPE_12__ {TYPE_2__ params; } ;
typedef TYPE_3__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int,int*) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int,int) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_11(adapter_t *VAR_16)
{
 static const u16 VAR_17[4][6] = {
  { 237, 416, 559, 1071, 2095, 4143 },
  { 128, 217, 289, 545, 1057, 2081 },
  { 73, 118, 154, 282, 538, 1050 },
  { 67, 107, 86, 150, 278, 534 }
 };
 static const u16 VAR_18[4][6] = {
  { 711, 1248, 1677, 3213, 6285, 12429 },
  { 384, 651, 867, 1635, 3171, 6243 },
  { 219, 354, 462, 846, 1614, 3150 },
  { 201, 321, 258, 450, 834, 1602 }
 };

 u16 VAR_19, VAR_20;
 unsigned int VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25, VAR_26;

 FUNC_6(VAR_16,
    VAR_16->params.pci.pcie_cap_addr + VAR_12,
    &VAR_19);
 VAR_22 = (VAR_19 & VAR_13) >> 5;





 FUNC_6(VAR_16, 0x2, &VAR_20);
 if (VAR_20 == 0x37) {
  FUNC_7(VAR_16,
      VAR_16->params.pci.pcie_cap_addr + VAR_12,
      VAR_19 & ~VAR_14 & ~VAR_13);
  VAR_22 = 0;
 }

 FUNC_6(VAR_16,
    VAR_16->params.pci.pcie_cap_addr + VAR_15,
           &VAR_19);

 VAR_24 = FUNC_0(FUNC_8(VAR_16, VAR_2));
 VAR_23 = VAR_16->params.rev == 0 ? VAR_24 :
   FUNC_1(FUNC_8(VAR_16, VAR_1));
 VAR_21 = FUNC_5(VAR_16->params.pci.width) - 1;
 VAR_25 = VAR_17[VAR_21][VAR_22];
 if (VAR_19 & 1)
  VAR_25 += VAR_24 * 4;
 VAR_26 = VAR_18[VAR_21][VAR_22] + VAR_23 * 4;

 if (VAR_16->params.rev == 0)
  FUNC_9(VAR_16, VAR_3,
     FUNC_4(VAR_11),
     FUNC_4(VAR_25));
 else
  FUNC_9(VAR_16, VAR_3, FUNC_2(VAR_9),
     FUNC_2(VAR_25));

 FUNC_9(VAR_16, VAR_2, FUNC_3(VAR_10),
    FUNC_3(VAR_26));

 FUNC_10(VAR_16, VAR_4, 0xffffffff);
 FUNC_9(VAR_16, VAR_0, 0,
    VAR_6 | VAR_5 |
    VAR_8 | VAR_7);
}
