
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cf_setting {int freq; } ;
struct acpi_throttle_softc {int cpu_thr_state; int cpu_p_cnt; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 struct acpi_throttle_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, const struct cf_setting *VAR_5)
{
 struct acpi_throttle_softc *VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9;

 if (VAR_5 == ((void*)0))
  return (VAR_2);
 VAR_6 = FUNC_2(VAR_4);





 VAR_9 = VAR_5->freq * VAR_0 / 10000;
 if (VAR_9 * 10000 != VAR_5->freq * VAR_0 ||
     VAR_9 < 1 || VAR_9 > VAR_0)
  return (VAR_2);


 if (VAR_9 == VAR_6->cpu_thr_state)
  return (0);


 VAR_8 = FUNC_0(VAR_6->cpu_p_cnt);
 VAR_8 &= ~VAR_1;
 FUNC_1(VAR_6->cpu_p_cnt, VAR_8);


 if (VAR_9 < VAR_0) {

  VAR_7 = (VAR_0 - 1) << VAR_3;
  VAR_8 &= ~VAR_7;
  VAR_8 |= (VAR_9 << VAR_3);


  FUNC_1(VAR_6->cpu_p_cnt, VAR_8);
  VAR_8 |= VAR_1;
  FUNC_1(VAR_6->cpu_p_cnt, VAR_8);
 }
 VAR_6->cpu_thr_state = VAR_9;

 return (0);
}
