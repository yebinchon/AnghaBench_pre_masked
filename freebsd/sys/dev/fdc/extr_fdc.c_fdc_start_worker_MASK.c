
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int fdc_thread; } ;
typedef int device_t ;


 struct fdc_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct fdc_data*,int *,int ,int ,char*,int ) ;

void
FUNC_3(device_t VAR_1)
{
 struct fdc_data *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_2, &VAR_2->fdc_thread, 0, 0,
     "fdc%d", FUNC_1(VAR_1));
}
