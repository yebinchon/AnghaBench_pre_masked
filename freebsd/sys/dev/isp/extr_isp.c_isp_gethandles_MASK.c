
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {int* param; int ibits; } ;
typedef TYPE_1__ mbreg_t ;
typedef int ispsoftc_t ;
struct TYPE_16__ {int pnhle_port_id_lo; int pnhle_port_id_hi; int pnhle_handle; int pnhle_port_id_hi_handle; } ;
typedef TYPE_2__ isp_pnhle_24xx_t ;
typedef TYPE_2__ isp_pnhle_23xx_t ;
typedef TYPE_2__ isp_pnhle_21xx_t ;
struct TYPE_17__ {int isp_portid; TYPE_2__* isp_scratch; int isp_scdma; } ;
typedef TYPE_5__ fcparam ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_1__*,int ,int ,int) ;
 int FUNC_10 (int *,int ,int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_12 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_13 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_14 (int *,TYPE_1__*) ;
 int FUNC_15 (int *,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_16(ispsoftc_t *VAR_8, int VAR_9, uint16_t *VAR_10, int *VAR_11, int VAR_12)
{
 fcparam *VAR_13 = FUNC_4(VAR_8, VAR_9);
 mbreg_t VAR_14;
 isp_pnhle_21xx_t VAR_15, *VAR_16;
 isp_pnhle_23xx_t VAR_17, *VAR_18;
 isp_pnhle_24xx_t VAR_19, *VAR_20;
 int VAR_21, VAR_22;
 uint32_t VAR_23;
 uint16_t VAR_24;

 FUNC_9(&VAR_14, VAR_4, VAR_2, 250000);
 if (FUNC_8(VAR_8)) {
  VAR_14.param[2] = FUNC_1(VAR_13->isp_scdma);
  VAR_14.param[3] = FUNC_0(VAR_13->isp_scdma);
  VAR_14.param[6] = FUNC_3(VAR_13->isp_scdma);
  VAR_14.param[7] = FUNC_2(VAR_13->isp_scdma);
  VAR_14.param[8] = VAR_0;
  VAR_14.param[9] = VAR_9;
 } else {
  VAR_14.ibits = (1 << 1)|(1 << 2)|(1 << 3)|(1 << 6);
  VAR_14.param[1] = FUNC_1(VAR_13->isp_scdma);
  VAR_14.param[2] = FUNC_0(VAR_13->isp_scdma);
  VAR_14.param[3] = FUNC_3(VAR_13->isp_scdma);
  VAR_14.param[6] = FUNC_2(VAR_13->isp_scdma);
 }
 if (FUNC_5(VAR_8, VAR_9)) {
  FUNC_15(VAR_8, VAR_1, VAR_7);
  return (-1);
 }
 FUNC_10(VAR_8, VAR_6, 0, VAR_0, VAR_9);
 FUNC_14(VAR_8, &VAR_14);
 if (VAR_14.param[0] != VAR_3) {
  FUNC_6(VAR_8, VAR_9);
  return (VAR_14.param[0] | (VAR_14.param[1] << 16));
 }
 FUNC_10(VAR_8, VAR_5, 0, VAR_0, VAR_9);
 VAR_16 = VAR_13->isp_scratch;
 VAR_18 = VAR_13->isp_scratch;
 VAR_20 = VAR_13->isp_scratch;
 for (VAR_21 = 0, VAR_22 = 0; VAR_21 < VAR_14.param[1] && VAR_22 < *VAR_11; VAR_21++) {
  if (FUNC_8(VAR_8)) {
   FUNC_13(VAR_8, &VAR_20[VAR_21], &VAR_19);
   VAR_23 = VAR_19 |
       (VAR_19 << 16);
   VAR_24 = VAR_19;
  } else if (FUNC_7(VAR_8)) {
   FUNC_12(VAR_8, &VAR_18[VAR_21], &VAR_17);
   VAR_23 = VAR_17 |
       (VAR_17 << 16);
   VAR_24 = VAR_17;
  } else {
   FUNC_11(VAR_8, &VAR_16[VAR_21], &VAR_15);
   VAR_23 = VAR_15 |
       ((VAR_15 & 0xff) << 16);
   VAR_24 = VAR_15 >> 8;
  }
  if (VAR_12 && (VAR_23 >> 8) != (VAR_13->isp_portid >> 8))
   continue;
  VAR_10[VAR_22++] = VAR_24;
 }
 *VAR_11 = VAR_22;
 FUNC_6(VAR_8, VAR_9);
 return (0);
}
