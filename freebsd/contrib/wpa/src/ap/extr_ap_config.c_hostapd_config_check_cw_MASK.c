
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_config {TYPE_2__* wmm_ac_params; TYPE_1__* tx_queue; } ;
struct TYPE_4__ {int cwmin; int cwmax; } ;
struct TYPE_3__ {int cwmin; int cwmax; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct hostapd_config *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->tx_queue[VAR_2].cwmin;
 int VAR_4 = VAR_1->tx_queue[VAR_2].cwmax;
 int VAR_5 = VAR_1->wmm_ac_params[VAR_2].cwmin;
 int VAR_6 = VAR_1->wmm_ac_params[VAR_2].cwmax;

 if (VAR_3 > VAR_4) {
  FUNC_0(VAR_0,
      "Invalid TX queue cwMin/cwMax values. cwMin(%d) greater than cwMax(%d)",
      VAR_3, VAR_4);
  return -1;
 }
 if (VAR_5 > VAR_6) {
  FUNC_0(VAR_0,
      "Invalid WMM AC cwMin/cwMax values. cwMin(%d) greater than cwMax(%d)",
      VAR_5, VAR_6);
  return -1;
 }
 return 0;
}
