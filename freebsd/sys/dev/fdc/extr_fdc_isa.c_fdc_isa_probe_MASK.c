
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int fdc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct fdc_data* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct fdc_data*) ;
 int FUNC_4 (int ,struct fdc_data*) ;
 int FUNC_5 (struct fdc_data*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 int VAR_3;
 struct fdc_data *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 VAR_4->fdc_dev = VAR_2;


 VAR_3 = FUNC_0(FUNC_1(VAR_2), VAR_2, VAR_1);
 if (VAR_3 == VAR_0)
  return (VAR_0);


 VAR_3 = FUNC_4(VAR_2, VAR_4);
 if (VAR_3 == 0)
  VAR_3 = FUNC_3(VAR_2, VAR_4);

 FUNC_5(VAR_4);
 return (VAR_3);
}
