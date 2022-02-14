
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int isp_dblev; int isp_confopts; } ;
typedef TYPE_1__ ispsoftc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,char*,int*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_9, ispsoftc_t *VAR_10)
{
 int VAR_11;

 VAR_11 = 0;
 if (FUNC_2(FUNC_0(VAR_9), FUNC_1(VAR_9), "fwload_disable", &VAR_11) == 0 && VAR_11 != 0) {
  VAR_10->isp_confopts |= VAR_1;
 }
 VAR_11 = 0;
 if (FUNC_2(FUNC_0(VAR_9), FUNC_1(VAR_9), "ignore_nvram", &VAR_11) == 0 && VAR_11 != 0) {
  VAR_10->isp_confopts |= VAR_0;
 }
 VAR_11 = 0;
 (void) FUNC_2(FUNC_0(VAR_9), FUNC_1(VAR_9), "debug", &VAR_11);
 if (VAR_11) {
  VAR_10->isp_dblev = VAR_11;
 } else {
  VAR_10->isp_dblev = VAR_5|VAR_3;
 }
 if (VAR_6) {
  VAR_10->isp_dblev |= VAR_2|VAR_4;
 }
 VAR_11 = -1;
 (void) FUNC_2(FUNC_0(VAR_9), FUNC_1(VAR_9), "vports", &VAR_11);
 if (VAR_11 > 0 && VAR_11 <= 254) {
  VAR_7 = VAR_11;
 }
 VAR_11 = 7;
 (void) FUNC_2(FUNC_0(VAR_9), FUNC_1(VAR_9), "quickboot_time", &VAR_11);
 VAR_8 = VAR_11;
}
