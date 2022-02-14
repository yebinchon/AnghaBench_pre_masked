
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct smp_report_manuf_info_request {int request_len; int response_len; int function; int frame_type; } ;
struct ccb_smpio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smp_report_manuf_info_request*,int) ;
 int FUNC_1 (struct ccb_smpio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int *,scalar_t__,int *,int,int ) ;

void
FUNC_2(struct ccb_smpio *VAR_6, uint32_t VAR_7,
        void (*VAR_8)(struct cam_periph *, union ccb *),
        struct smp_report_manuf_info_request *VAR_9,
        int VAR_10, uint8_t *VAR_11, int VAR_12,
        int VAR_13, uint32_t VAR_14)
{
 FUNC_1(VAR_6,
         VAR_7,
         VAR_8,
                  VAR_0,
         (uint8_t *)VAR_9,
         VAR_10 - VAR_1,
         VAR_11,
         VAR_12,
         VAR_14);

 FUNC_0(VAR_9, sizeof(*VAR_9));

 VAR_9->frame_type = VAR_2;
 VAR_9->function = VAR_3;
 VAR_9->response_len = VAR_13 ? VAR_5 : 0;
 VAR_9->request_len = VAR_13 ? VAR_4 : 0;
}
