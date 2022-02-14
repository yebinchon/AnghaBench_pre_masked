
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int* param; int ibits; int timeout; int logval; } ;
typedef TYPE_1__ mbreg_t ;
typedef int ispsoftc_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;


 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int,char*,...) ;

__attribute__((used)) static int
FUNC_4(ispsoftc_t *VAR_4, uint16_t VAR_5, uint32_t VAR_6)
{
 mbreg_t VAR_7;

 FUNC_1(&VAR_7, VAR_3, VAR_2, 500000);
 if (FUNC_0(VAR_4)) {
  VAR_7.param[1] = VAR_5;
  VAR_7.ibits = (1 << 10);
 } else {
  VAR_7.param[1] = VAR_5 << 8;
 }
 VAR_7.param[2] = VAR_6 >> 16;
 VAR_7.param[3] = VAR_6;
 VAR_7.logval = VAR_2;
 VAR_7.timeout = 500000;
 FUNC_2(VAR_4, &VAR_7);

 switch (VAR_7.param[0]) {
 case 128:
  FUNC_3(VAR_4, VAR_0|VAR_1, "isp_port_login: portid 0x%06x already logged in as 0x%x", VAR_6, VAR_7.param[1]);
  return (128 | (VAR_7.param[1] << 16));

 case 129:
  FUNC_3(VAR_4, VAR_0|VAR_1, "isp_port_login: handle 0x%x in use for port id 0x%02xXXXX", VAR_5, VAR_7.param[1] & 0xff);
  return (129);

 case 131:
  return (0);

 case 130:
  FUNC_3(VAR_4, VAR_0|VAR_1, "isp_port_login: error 0x%x in PLOGI to port 0x%06x", VAR_7.param[1], VAR_6);
  return (130);

 case 132:
  FUNC_3(VAR_4, VAR_0|VAR_1, "isp_port_login: all IDs used for fabric login");
  return (132);

 default:
  FUNC_3(VAR_4, VAR_0, "isp_port_login: error 0x%x on port login of 0x%06x@0x%0x", VAR_7.param[0], VAR_6, VAR_5);
  return (VAR_7.param[0]);
 }
}
