
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {scalar_t__ fdc_errs; int fdc_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct fdc_data *VAR_1, const char *VAR_2)
{
 VAR_1->fdc_errs++;
 if (VAR_2) {
  if (VAR_1->fdc_errs < VAR_0)
   FUNC_0(VAR_1->fdc_dev, "%s", VAR_2);
  else if (VAR_1->fdc_errs == VAR_0)
   FUNC_0(VAR_1->fdc_dev, "too many errors, not "
          "logging any more\n");
 }

 return (1);
}
