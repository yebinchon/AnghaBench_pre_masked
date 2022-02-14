
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qlnxr_dev {int * ha; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*) ;

void
FUNC_1(void *VAR_0, u8 VAR_1)
{
        struct qlnxr_dev *VAR_2 = (struct qlnxr_dev *)VAR_0;
 qlnx_host_t *VAR_3;

 VAR_3 = VAR_2->ha;

 FUNC_0(VAR_3, "enter/exit \n");
 return;
}
