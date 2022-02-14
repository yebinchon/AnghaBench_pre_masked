
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_dev {int * ha; } ;
struct ib_ah_attr {int dummy; } ;
struct ib_ah {int device; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct qlnxr_dev* FUNC_1 (int ) ;

int
FUNC_2(struct ib_ah *VAR_1, struct ib_ah_attr *VAR_2)
{
 struct qlnxr_dev *VAR_3;
 qlnx_host_t *VAR_4;

 VAR_3 = FUNC_1((VAR_1->device));
 VAR_4 = VAR_3->ha;
 FUNC_0(VAR_4, "Query AH not supported\n");
 return -VAR_0;
}
