
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_dev {int ha; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct qlnxr_dev*) ;

int
FUNC_2(struct qlnxr_dev *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(VAR_0->ha, "enter\n");

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->ha, "exit rc = %d\n", VAR_1);
 return (VAR_1);
}
