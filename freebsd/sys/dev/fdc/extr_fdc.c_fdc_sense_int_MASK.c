
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fdc_data*,int,int ,int,int*) ;
 int FUNC_1 (struct fdc_data*,char*) ;
 scalar_t__ FUNC_2 (struct fdc_data*,int*) ;

__attribute__((used)) static int
FUNC_3(struct fdc_data *VAR_4, int *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_4, 1, VAR_1, 1, &VAR_8);
 if (VAR_9) {
  (void)FUNC_1(VAR_4, "sense intr err reading stat reg 0\n");
  return (VAR_9);
 }

 if (VAR_5)
  *VAR_5 = VAR_8;

 if ((VAR_8 & VAR_2) == VAR_3) {



  return (VAR_0);
 }

 if (FUNC_2(VAR_4, &VAR_7) < 0)
  return FUNC_1(VAR_4, "can't get cyl num\n");

 if (VAR_6)
  *VAR_6 = VAR_7;

 return (0);
}
