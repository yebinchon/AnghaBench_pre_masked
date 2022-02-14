
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int * spec; int dev; int volts; int lat; int power; int freq; } ;
struct acpi_px {int sts_val; int ctrl_val; int trans_lat; int power; int core_freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_4, struct acpi_px *VAR_5, struct cf_setting *VAR_6)
{

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_1);

 VAR_6->freq = VAR_5->core_freq;
 VAR_6->power = VAR_5->power;

 VAR_6->lat = VAR_5->trans_lat;
 VAR_6->volts = VAR_0;
 VAR_6->dev = VAR_4;
 VAR_6->spec[VAR_2] = VAR_5->ctrl_val;
 VAR_6->spec[VAR_3] = VAR_5->sts_val;

 return (0);
}
