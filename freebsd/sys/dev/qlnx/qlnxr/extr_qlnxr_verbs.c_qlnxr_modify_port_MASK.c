
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qlnxr_dev {int * ha; } ;
struct ib_port_modify {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 struct qlnxr_dev* FUNC_1 (struct ib_device*) ;

int
FUNC_2(struct ib_device *VAR_1, uint8_t VAR_2, int VAR_3,
 struct ib_port_modify *VAR_4)
{
 struct qlnxr_dev *VAR_5;
 qlnx_host_t *VAR_6;

 VAR_5 = FUNC_1(VAR_1);
 VAR_6 = VAR_5->ha;

 FUNC_0(VAR_6, "enter\n");

 if (VAR_2 > 1) {
  FUNC_0(VAR_6, "port (%d) > 1\n", VAR_2);
  return -VAR_0;
 }

 FUNC_0(VAR_6, "exit\n");
 return 0;
}
