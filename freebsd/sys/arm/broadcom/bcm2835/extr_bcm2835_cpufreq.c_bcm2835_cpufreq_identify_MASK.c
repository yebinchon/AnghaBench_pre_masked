
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_compat_data {scalar_t__ ocd_data; int * ocd_str; } ;
typedef int phandle_t ;
typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (char*) ;
 struct ofw_compat_data* VAR_0 ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(driver_t *VAR_1, device_t VAR_2)
{
 const struct ofw_compat_data *VAR_3;
 phandle_t VAR_4;

 VAR_4 = FUNC_2("/");
 for (VAR_3 = VAR_0; VAR_3->ocd_str != ((void*)0); VAR_3++)
  if (FUNC_5(VAR_4, VAR_3->ocd_str))
   break;

 if (VAR_3->ocd_data == 0)
  return;

 FUNC_1("driver=%p, parent=%p\n", VAR_1, VAR_2);
 if (FUNC_3(VAR_2, "bcm2835_cpufreq", -1) != ((void*)0))
  return;
 if (FUNC_0(VAR_2, 0, "bcm2835_cpufreq", -1) == ((void*)0))
  FUNC_4(VAR_2, "add child failed\n");
}
