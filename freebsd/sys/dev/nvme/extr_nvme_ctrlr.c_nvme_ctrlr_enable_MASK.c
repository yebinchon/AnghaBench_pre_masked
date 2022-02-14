
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int num_entries; int cpl_bus_addr; int cmd_bus_addr; } ;
struct nvme_controller {TYPE_1__ adminq; } ;


 int FUNC_0 (int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct nvme_controller*,int) ;
 int FUNC_2 (struct nvme_controller*,int) ;
 int FUNC_3 (struct nvme_controller*,int,int) ;
 int FUNC_4 (struct nvme_controller*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct nvme_controller *VAR_17)
{
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 uint32_t VAR_21;
 uint8_t VAR_22, VAR_23;
 int VAR_24;

 VAR_18 = FUNC_2(VAR_17, VAR_18);
 VAR_19 = FUNC_2(VAR_17, VAR_19);

 VAR_22 = (VAR_18 >> VAR_7) & VAR_6;
 VAR_23 = (VAR_19 >> VAR_13) & VAR_12;




 if (VAR_22 == 1) {
  if (VAR_23 == 1)
   return (0);
  else
   return (FUNC_1(VAR_17, 1));
 } else {

  VAR_24 = FUNC_1(VAR_17, 0);
  if (VAR_24 != 0)
   return (VAR_24);
 }

 FUNC_4(VAR_17, VAR_16, VAR_17->adminq.cmd_bus_addr);
 FUNC_0(5000);
 FUNC_4(VAR_17, VAR_15, VAR_17->adminq.cpl_bus_addr);
 FUNC_0(5000);


 VAR_21 = VAR_17->adminq.num_entries - 1;

 VAR_20 = 0;
 VAR_20 = (VAR_21 & VAR_0) << VAR_1;
 VAR_20 |= (VAR_21 & VAR_2) << VAR_3;
 FUNC_3(VAR_17, VAR_20, VAR_20);
 FUNC_0(5000);


 VAR_18 = 0;
 VAR_18 |= 1 << VAR_7;
 VAR_18 |= 0 << VAR_5;
 VAR_18 |= 0 << VAR_4;
 VAR_18 |= 0 << VAR_11;
 VAR_18 |= 6 << VAR_9;
 VAR_18 |= 4 << VAR_8;


 VAR_18 |= (VAR_14 >> 13) << VAR_10;

 FUNC_3(VAR_17, VAR_18, VAR_18);

 return (FUNC_1(VAR_17, 1));
}
