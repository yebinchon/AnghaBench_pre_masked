
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nvme_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nvme_controller*,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct nvme_controller *VAR_6,
    uint8_t VAR_7)
{

 if (VAR_7 & VAR_0)
  FUNC_0(VAR_6, "available spare space below threshold\n");

 if (VAR_7 & VAR_4)
  FUNC_0(VAR_6, "temperature above threshold\n");

 if (VAR_7 & VAR_1)
  FUNC_0(VAR_6, "device reliability degraded\n");

 if (VAR_7 & VAR_2)
  FUNC_0(VAR_6, "media placed in read only mode\n");

 if (VAR_7 & VAR_5)
  FUNC_0(VAR_6, "volatile memory backup device failed\n");

 if (VAR_7 & VAR_3)
  FUNC_0(VAR_6,
      "unknown critical warning(s): state = 0x%02x\n", VAR_7);
}
