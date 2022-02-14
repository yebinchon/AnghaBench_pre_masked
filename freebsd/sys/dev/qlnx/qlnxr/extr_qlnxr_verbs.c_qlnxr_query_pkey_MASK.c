
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qlnxr_dev {int * ha; } ;
struct ib_device {int dummy; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 struct qlnxr_dev* FUNC_1 (struct ib_device*) ;

int
FUNC_2(struct ib_device *VAR_3, u8 VAR_4, u16 VAR_5, u16 *VAR_6)
{
 struct qlnxr_dev *VAR_7;
 qlnx_host_t *VAR_8;

 VAR_7 = FUNC_1(VAR_3);
 VAR_8 = VAR_7->ha;

 FUNC_0(VAR_8, "enter index = 0x%x\n", VAR_5);

 if (VAR_5 > VAR_2)
  return -VAR_0;

 *VAR_6 = VAR_1;

 FUNC_0(VAR_8, "exit\n");
 return 0;
}
