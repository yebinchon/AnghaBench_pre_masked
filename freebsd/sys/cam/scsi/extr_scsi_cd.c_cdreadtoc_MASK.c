
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_scsiio {int dummy; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 union ccb* FUNC_0 (struct cam_periph*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (union ccb*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct ccb_scsiio*,int ,int *,int ,int ,int ,scalar_t__,int *,scalar_t__,int ,int) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static int
FUNC_4(struct cam_periph *VAR_10, u_int32_t VAR_11, u_int32_t VAR_12,
   u_int8_t *VAR_13, u_int32_t VAR_14, u_int32_t VAR_15)
{
 u_int32_t VAR_16;
        struct ccb_scsiio *VAR_17;
 union ccb *VAR_18;
 int VAR_19;

 VAR_16 = VAR_14;
 VAR_19 = 0;

 VAR_18 = FUNC_0(VAR_10, VAR_0);

 VAR_17 = &VAR_18->csio;

 FUNC_2(VAR_17,
                      VAR_8,
                     ((void*)0),
                         VAR_4,
                          (VAR_11 == VAR_3) ? VAR_2 : 0,
                     VAR_6,
                   VAR_12,
                       VAR_13,
                        VAR_14,
                        VAR_7,
                      50000);

 VAR_19 = FUNC_1(VAR_18, VAR_9, VAR_1,
                   VAR_5 | VAR_15);

 FUNC_3(VAR_18);

 return(VAR_19);
}
