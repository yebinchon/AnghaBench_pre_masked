
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct smp_discover_request {int phy; int ignore_zone_group; int request_len; int response_len; int function; int frame_type; } ;
struct ccb_smpio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct smp_discover_request*,int) ;
 int FUNC_1 (struct ccb_smpio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int *,scalar_t__,int *,int,int ) ;

void
FUNC_2(struct ccb_smpio *VAR_7, uint32_t VAR_8,
      void (*VAR_9)(struct cam_periph *, union ccb *),
      struct smp_discover_request *VAR_10, int VAR_11,
      uint8_t *VAR_12, int VAR_13, int VAR_14,
      int VAR_15, int VAR_16, uint32_t VAR_17)
{
 FUNC_1(VAR_7,
         VAR_8,
         VAR_9,
                  VAR_0,
         (uint8_t *)VAR_10,
         VAR_11 - VAR_1,
         VAR_12,
         VAR_13,
         VAR_17);

 FUNC_0(VAR_10, sizeof(*VAR_10));
 VAR_10->frame_type = VAR_5;
 VAR_10->function = VAR_6;
 VAR_10->response_len = VAR_14 ? VAR_4 : 0;
 VAR_10->request_len = VAR_14 ? VAR_3 : 0;
 if (VAR_15 != 0)
  VAR_10->ignore_zone_group |= VAR_2;
 VAR_10->phy = VAR_16;
}
