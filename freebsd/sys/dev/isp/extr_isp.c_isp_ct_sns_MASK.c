
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int* param; } ;
typedef TYPE_1__ mbreg_t ;
struct TYPE_13__ {int isp_dblev; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_14__ {int isp_scratch; int isp_scdma; } ;
typedef TYPE_3__ fcparam ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ,int ,int) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,char*,int,int ) ;

__attribute__((used)) static int
FUNC_9(ispsoftc_t *VAR_7, int VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 fcparam *VAR_11 = FUNC_4(VAR_7, VAR_8);
 mbreg_t VAR_12;

 if (VAR_7->isp_dblev & VAR_0)
  FUNC_8(VAR_7, "CT SNS request", VAR_9, VAR_11->isp_scratch);
 FUNC_6(VAR_7, VAR_6, 0, VAR_9, VAR_8);

 FUNC_5(&VAR_12, VAR_4, VAR_1, 10000000);
 VAR_12.param[1] = VAR_9 >> 1;
 VAR_12.param[2] = FUNC_1(VAR_11->isp_scdma);
 VAR_12.param[3] = FUNC_0(VAR_11->isp_scdma);
 VAR_12.param[6] = FUNC_3(VAR_11->isp_scdma);
 VAR_12.param[7] = FUNC_2(VAR_11->isp_scdma);
 FUNC_7(VAR_7, &VAR_12);
 if (VAR_12.param[0] != VAR_2) {
  if (VAR_12.param[0] == VAR_3) {
   return (1);
  } else {
   return (-1);
  }
 }

 FUNC_6(VAR_7, VAR_5, 0, VAR_10, VAR_8);
 if (VAR_7->isp_dblev & VAR_0)
  FUNC_8(VAR_7, "CT response", VAR_10, VAR_11->isp_scratch);
 return (0);
}
