
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_dev {int * ha; } ;
struct qlnxr_ah {int dummy; } ;
struct ib_ah {int device; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*) ;
 struct qlnxr_ah* FUNC_1 (struct ib_ah*) ;
 struct qlnxr_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct qlnxr_ah*) ;

int
FUNC_4(struct ib_ah *VAR_0)
{
 struct qlnxr_dev *VAR_1;
 qlnx_host_t *VAR_2;
 struct qlnxr_ah *VAR_3 = FUNC_1(VAR_0);

 VAR_1 = FUNC_2((VAR_0->device));
 VAR_2 = VAR_1->ha;

 FUNC_0(VAR_2, "in destroy_ah\n");

 FUNC_3(VAR_3);
 return 0;
}
