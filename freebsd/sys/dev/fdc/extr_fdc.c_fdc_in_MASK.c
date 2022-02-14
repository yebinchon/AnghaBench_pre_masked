
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct fdc_data*,char*) ;
 int FUNC_2 (struct fdc_data*) ;
 int FUNC_3 (struct fdc_data*) ;

__attribute__((used)) static int
FUNC_4(struct fdc_data *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = 1;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7 += VAR_8) {
         VAR_6 = FUNC_3(VAR_4) & (VAR_1 | VAR_2);
         if (VAR_6 == (VAR_1|VAR_2)) {
   VAR_6 = FUNC_2(VAR_4);
   if (VAR_5)
    *VAR_5 = VAR_6;
   return (0);
  }
  if (VAR_6 == VAR_2)
   return (FUNC_1(VAR_4, "ready for output in input\n"));
  VAR_8 += VAR_8;
  FUNC_0(VAR_8);
 }
 return (FUNC_1(VAR_4, VAR_3? "input ready timeout\n": 0));
}
