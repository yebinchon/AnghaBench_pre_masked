
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u8 ;
struct qlnxr_dev {TYPE_1__* ha; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int primary_mac; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 struct qlnxr_dev* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

int
FUNC_4(struct ib_device *VAR_0, u8 VAR_1, int VAR_2,
 union ib_gid *VAR_3)
{
 struct qlnxr_dev *VAR_4;
 qlnx_host_t *VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = VAR_4->ha;

 FUNC_0(VAR_5, "enter\n");

 FUNC_3(VAR_3->raw, 0, sizeof(VAR_3->raw));

 FUNC_2(VAR_3->raw, VAR_4->ha->primary_mac, sizeof (VAR_4->ha->primary_mac));

 FUNC_0(VAR_5, "exit\n");

 return 0;
}
