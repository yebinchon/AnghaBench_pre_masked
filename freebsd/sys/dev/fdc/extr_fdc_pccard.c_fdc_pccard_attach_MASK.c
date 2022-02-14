
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int flags; int fdct; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct fdc_data* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct fdc_data*) ;
 int FUNC_6 (struct fdc_data*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 int VAR_4;
 struct fdc_data *VAR_5;
 device_t VAR_6;

 VAR_5 = FUNC_1(VAR_3);
 VAR_5->flags = VAR_1 | VAR_2;
 VAR_5->fdct = VAR_0;
 VAR_4 = FUNC_5(VAR_3, VAR_5);
 if (VAR_4 == 0)
  VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 == 0) {
  VAR_6 = FUNC_3(VAR_3, "fd", -1);
  FUNC_2(VAR_6, 0x24);
  VAR_4 = FUNC_0(VAR_3);
 }
 if (VAR_4 == 0)
  FUNC_7(VAR_3);
 else
  FUNC_6(VAR_5);
 return (VAR_4);
}
