
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ibm_softc {int events_mask_supported; int light_val; int light_cmd_on; int light_cmd_off; int light_set_supported; int fan_levels; int ec_handle; void* thermal_updt_supported; int * fan_handle; int handle; void* light_get_supported; int * light_handle; int * cmos_handle; int * mic_led_handle; } ;
typedef int ACPI_OBJECT_TYPE ;
typedef int * ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int **) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (struct acpi_ibm_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct acpi_ibm_softc *VAR_7, int VAR_8)
{
 int VAR_9;
 ACPI_OBJECT_TYPE VAR_10;
 ACPI_HANDLE VAR_11;

 switch (VAR_8) {
 case 139:
  return (VAR_6);

 case 140:
  return (VAR_7->events_mask_supported);

 case 134:
 case 141:
 case 129:
 case 132:

  return (VAR_6);

 case 133:
  if (FUNC_1(FUNC_2(VAR_7->handle, "MMTS", &VAR_7->mic_led_handle)))
  {

   FUNC_5 (VAR_7, 0);
   return(VAR_6);
  }
  else
   VAR_7->mic_led_handle = ((void*)0);
  return (VAR_1);

 case 130:
  VAR_7->cmos_handle = ((void*)0);
  VAR_7->light_get_supported = FUNC_1(FUNC_4(
      VAR_7->ec_handle, VAR_2, &VAR_7->light_val));

  if ((FUNC_1(FUNC_2(VAR_7->handle, "\\UCMS", &VAR_7->light_handle)) ||
       FUNC_1(FUNC_2(VAR_7->handle, "\\CMOS", &VAR_7->light_handle)) ||
       FUNC_1(FUNC_2(VAR_7->handle, "\\CMS", &VAR_7->light_handle))) &&
       FUNC_1(FUNC_3(VAR_7->light_handle, &VAR_10)) &&
       VAR_10 == VAR_0) {
   VAR_7->light_cmd_on = 0x0c;
   VAR_7->light_cmd_off = 0x0d;
   VAR_7->cmos_handle = VAR_7->light_handle;
  }
  else if (FUNC_1(FUNC_2(VAR_7->handle, "\\LGHT", &VAR_7->light_handle))) {
   VAR_7->light_cmd_on = 1;
   VAR_7->light_cmd_off = 0;
  }
  else
   VAR_7->light_handle = ((void*)0);

  VAR_7->light_set_supported = (VAR_7->light_handle &&
      FUNC_0(FUNC_2(VAR_7->ec_handle, "LEDB", &VAR_11)));

  if (VAR_7->light_get_supported)
   return (VAR_6);

  if (VAR_7->light_set_supported) {
   VAR_7->light_val = 0;
   return (VAR_6);
  }

  return (VAR_1);

 case 142:
 case 128:
  if (FUNC_1(FUNC_4(VAR_7->handle, VAR_5, &VAR_9)))
   return (VAR_6);
  return (VAR_1);

 case 137:




  VAR_7->fan_levels =
      (FUNC_1(FUNC_2(VAR_7->handle, "GFAN", &VAR_7->fan_handle)) ||
       FUNC_1(FUNC_2(VAR_7->handle, "\\FSPD", &VAR_7->fan_handle)));
  return (VAR_6);

 case 138:
 case 136:




  if (VAR_7->fan_levels)
   return (VAR_1);
  return (VAR_6);

 case 131:
  if (FUNC_1(FUNC_4(VAR_7->ec_handle, VAR_3, &VAR_9))) {
   VAR_7->thermal_updt_supported = FUNC_1(FUNC_4(VAR_7->ec_handle, VAR_4, &VAR_9));
   return (VAR_6);
  }
  return (VAR_1);

 case 135:
  return (VAR_6);
 }
 return (VAR_1);
}
