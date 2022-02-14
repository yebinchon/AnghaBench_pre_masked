
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct smp_report_general_request {scalar_t__ request_len; int response_len; int function; int frame_type; } ;
struct ccb_smpio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smp_report_general_request*,int) ;
 int FUNC_1 (struct ccb_smpio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int *,scalar_t__,int *,int,int ) ;

void
FUNC_2(struct ccb_smpio *VAR_5, uint32_t VAR_6,
     void (*VAR_7)(struct cam_periph *, union ccb *),
     struct smp_report_general_request *VAR_8, int VAR_9,
     uint8_t *VAR_10, int VAR_11, int VAR_12,
     uint32_t VAR_13)
{
 FUNC_1(VAR_5,
         VAR_6,
         VAR_7,
                  VAR_0,
         (uint8_t *)VAR_8,
         VAR_9 - VAR_1,
         VAR_10,
         VAR_11,
         VAR_13);

 FUNC_0(VAR_8, sizeof(*VAR_8));

 VAR_8->frame_type = VAR_2;
 VAR_8->function = VAR_3;
 VAR_8->response_len = VAR_12 ? VAR_4 : 0;
 VAR_8->request_len = 0;
}
