
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int xport; } ;
typedef TYPE_1__ ocs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int ,...) ;
 scalar_t__ FUNC_3 (char*,scalar_t__*) ;

int
FUNC_4(ocs_t *VAR_3, char *VAR_4, char *VAR_5)
{
 int VAR_6;
 uint64_t VAR_7;

 if (FUNC_1(VAR_5, "default") == 0) {
  VAR_7 = 0;
 }
 else if (FUNC_3(VAR_5, &VAR_7) != 0) {
  FUNC_0(VAR_3, "Invalid WWPN: %s\n", VAR_5);
  return 1;
 }

 VAR_6 = FUNC_2(VAR_3->xport, VAR_2, VAR_7);

 if(VAR_6) {
  FUNC_0(VAR_3, "OCS_XPORT_WWPN_SET failed: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_3->xport, VAR_0);
 if (VAR_6) {
  FUNC_0(VAR_3, "port offline failed : %d\n", VAR_6);
 }

 VAR_6 = FUNC_2(VAR_3->xport, VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_3, "port online failed : %d\n", VAR_6);
 }

 return VAR_6;
}
