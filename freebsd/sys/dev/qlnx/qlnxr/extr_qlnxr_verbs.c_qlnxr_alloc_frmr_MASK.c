
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mr {int dummy; } ;
struct qlnxr_mr {struct ib_mr ibmr; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_pd {int device; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct qlnxr_mr*) ;
 int FUNC_2 (int *,char*,...) ;
 struct qlnxr_mr* FUNC_3 (struct ib_pd*,int) ;
 struct qlnxr_dev* FUNC_4 (int ) ;

struct ib_mr *
FUNC_5(struct ib_pd *VAR_1, int VAR_2)
{
 struct qlnxr_dev *VAR_3;
 struct qlnxr_mr *VAR_4;
 qlnx_host_t *VAR_5;
 struct ib_mr *VAR_6 = ((void*)0);

 VAR_3 = FUNC_4((VAR_1->device));
 VAR_5 = VAR_3->ha;

 FUNC_2(VAR_5, "enter\n");

 VAR_4 = FUNC_3(VAR_1, VAR_2);

 if (FUNC_1(VAR_4)) {
  VAR_6 = FUNC_0(-VAR_0);
 } else {
  VAR_6 = &VAR_4->ibmr;
 }

 FUNC_2(VAR_5, "exit %p\n", VAR_6);
 return (VAR_6);
}
