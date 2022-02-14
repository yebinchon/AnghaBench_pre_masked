
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hwrm_func_drv_rgtr_input {int * async_event_fwd; int enables; int member_0; } ;
struct bnxt_softc {int dummy; } ;
typedef int req ;
typedef int bitstr_t ;


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
 int * FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (unsigned long*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_func_drv_rgtr_input*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bnxt_softc*,struct hwrm_func_drv_rgtr_input*,int) ;
 int FUNC_7 (int *,int ,int) ;

int FUNC_8(struct bnxt_softc *VAR_10, unsigned long *VAR_11,
                                     int VAR_12)
{
 struct hwrm_func_drv_rgtr_input VAR_13 = {0};
 bitstr_t *VAR_14;
 uint32_t *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_0(256, VAR_7, VAR_8|VAR_9);
 VAR_15 = (uint32_t *)VAR_14;

 FUNC_3(VAR_10, &VAR_13, VAR_5);

 VAR_13.enables =
  FUNC_5(VAR_6);

 FUNC_7(VAR_14, 0, sizeof(256 / 8));

 FUNC_1(VAR_14, VAR_1);
 FUNC_1(VAR_14, VAR_2);
 FUNC_1(VAR_14, VAR_3);
 FUNC_1(VAR_14, VAR_4);
 FUNC_1(VAR_14, VAR_0);

 if (VAR_11 && VAR_12) {
  for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
   if (FUNC_2(VAR_11, VAR_16))
    FUNC_1(VAR_14, VAR_16);
  }
 }

 for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
  VAR_13.async_event_fwd[VAR_16] |= FUNC_5(VAR_15[VAR_16]);

 FUNC_4(VAR_14, VAR_7);

 return FUNC_6(VAR_10, &VAR_13, sizeof(VAR_13));
}
