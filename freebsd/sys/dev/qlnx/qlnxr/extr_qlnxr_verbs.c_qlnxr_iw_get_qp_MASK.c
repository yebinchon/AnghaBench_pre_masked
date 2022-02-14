
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_dev {int qpidr; int * ha; } ;
struct ib_qp {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*,struct qlnxr_dev*,...) ;
 struct qlnxr_dev* FUNC_1 (struct ib_device*) ;
 struct ib_qp* FUNC_2 (int *,int) ;

struct ib_qp *
FUNC_3(struct ib_device *VAR_0, int VAR_1)
{
 struct qlnxr_dev *VAR_2 = FUNC_1(VAR_0);
 struct ib_qp *VAR_3;
 qlnx_host_t *VAR_4;

 VAR_4 = VAR_2->ha;

 FUNC_0(VAR_4, "enter dev = %p ibdev = %p qpn = %d\n", VAR_2, VAR_0, VAR_1);

 VAR_3 = FUNC_2(&VAR_2->qpidr, VAR_1);

 FUNC_0(VAR_4, "exit qp = %p\n", VAR_3);

 return (VAR_3);
}
