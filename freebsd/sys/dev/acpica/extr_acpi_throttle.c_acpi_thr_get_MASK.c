
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cf_setting {int dev; int freq; } ;
struct acpi_throttle_softc {int cpu_thr_state; int cpu_p_cnt; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct acpi_throttle_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct cf_setting*,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, struct cf_setting *VAR_5)
{
 struct acpi_throttle_softc *VAR_6;
 uint32_t VAR_7, VAR_8;

 if (VAR_5 == ((void*)0))
  return (VAR_2);
 VAR_6 = FUNC_2(VAR_4);


 VAR_7 = FUNC_1(VAR_6->cpu_p_cnt);
 VAR_8 = (VAR_7 >> VAR_3) & (VAR_1 - 1);
 VAR_6->cpu_thr_state = VAR_8;

 FUNC_3(VAR_5, VAR_0, sizeof(*VAR_5));
 VAR_5->freq = FUNC_0(VAR_8);
 VAR_5->dev = VAR_4;

 return (0);
}
