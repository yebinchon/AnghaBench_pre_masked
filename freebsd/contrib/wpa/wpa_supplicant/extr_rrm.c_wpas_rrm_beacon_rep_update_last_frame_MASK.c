
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rrm_measurement_report_element {int len; scalar_t__ eid; scalar_t__ type; scalar_t__ variable; } ;
struct rrm_measurement_beacon_report {int* variable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_5, size_t VAR_6)
{
 struct rrm_measurement_report_element *VAR_7;
 u8 *VAR_8 = VAR_5 + VAR_6;
 u8 *VAR_9;
 struct rrm_measurement_beacon_report *VAR_10 = ((void*)0);
 u8 *VAR_11;


 while (VAR_8 - VAR_5 >= (int) sizeof(*VAR_7)) {
  VAR_7 = (struct rrm_measurement_report_element *) VAR_5;
  VAR_9 = VAR_5 + VAR_7->len + 2;

  if (VAR_7->eid != VAR_4 ||
      VAR_9 > VAR_8) {

   FUNC_0(VAR_2,
       "RRM: non-measurement report element in measurement report frame");
   return -1;
  }

  if (VAR_7->type == VAR_1)
   VAR_10 = (struct rrm_measurement_beacon_report *)
    VAR_7->variable;

  VAR_5 += VAR_5[1] + 2;
 }

 if (!VAR_10)
  return 0;

 VAR_11 = VAR_10->variable;
 while (VAR_11 + 2 < VAR_9 &&
        VAR_11[0] != VAR_3)
  VAR_11 += 2 + VAR_11[1];

 if (VAR_11 + 2 < VAR_9 &&
     VAR_11[0] == VAR_3 &&
     VAR_11[1] == 1 &&
     VAR_11 + VAR_0 <= VAR_8)
  VAR_11[2] = 1;

 return 0;
}
