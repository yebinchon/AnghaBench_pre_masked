
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int pqi_reset_quiesce_allowed; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*,int*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(pqisrc_softstate_t *VAR_5)
{
 int VAR_6 = VAR_1;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;

 FUNC_1("IN\n");

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to switch back the adapter to SIS mode!\n");
  goto err_out;
 }


 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6) {
  FUNC_0("PQI Controller is not ready !!!\n");
  goto err_out;
 }


 VAR_6 = FUNC_4(VAR_5, &VAR_7, &VAR_8);
 if (VAR_6) {
  FUNC_0("Failed to get adapter properties\n");
  goto err_out;
 }
 if (!((VAR_7 & VAR_2) &&
  (VAR_8 & VAR_3))) {
  FUNC_0("PQI Mode Not Supported\n");
  VAR_6 = VAR_0;
  goto err_out;
 }

 VAR_5->pqi_reset_quiesce_allowed = 0;
 if (VAR_8 & VAR_4)
  VAR_5->pqi_reset_quiesce_allowed = 1;


 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to get adapter pref settings\n");
  goto err_out;
 }


 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to get PQI Capabilities\n");
  goto err_out;
 }


 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to set init struct base addr\n");
  goto err_out;
 }

 FUNC_1("OUT\n");
 return VAR_6;

err_out:
 FUNC_1("OUT failed\n");
 return VAR_6;
}
