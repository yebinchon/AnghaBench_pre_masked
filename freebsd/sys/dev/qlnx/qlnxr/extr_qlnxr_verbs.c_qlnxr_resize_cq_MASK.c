
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_dev {int * ha; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int device; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*) ;
 struct qlnxr_dev* FUNC_1 (int ) ;

int FUNC_2(struct ib_cq *VAR_0, int VAR_1, struct ib_udata *VAR_2)
{
 int VAR_3 = 0;
 struct qlnxr_dev *VAR_4 = FUNC_1((VAR_0->device));
 qlnx_host_t *VAR_5;

 VAR_5 = VAR_4->ha;

 FUNC_0(VAR_5, "enter/exit\n");

 return VAR_3;
}
