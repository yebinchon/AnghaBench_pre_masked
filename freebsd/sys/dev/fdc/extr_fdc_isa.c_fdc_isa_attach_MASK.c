
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int fdc_dev; } ;
typedef int device_t ;


 struct fdc_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct fdc_data*) ;
 int FUNC_4 (struct fdc_data*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 struct fdc_data *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 VAR_1->fdc_dev = VAR_0;
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 == 0)
  VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == 0)
  VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == 0)
  FUNC_5(VAR_0);
 else
  FUNC_4(VAR_1);
 return (VAR_2);
}
