
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int const*,int ) ;

__attribute__((used)) static void
FUNC_1(const uint8_t VAR_11[], uint32_t VAR_12[], int VAR_13, int VAR_14)
{
 int VAR_15;
 VAR_15 = 0;


 if (FUNC_0(VAR_11, VAR_8))
  VAR_12[VAR_15++] = VAR_0;
 if (FUNC_0(VAR_11, VAR_9))
  VAR_12[VAR_15++] = VAR_0 | VAR_1;
 if (FUNC_0(VAR_11, VAR_10)) {
  VAR_12[VAR_15++] = VAR_0 | VAR_1 |
      VAR_4;
 }


 if (VAR_13) {
  VAR_12[VAR_15++] = VAR_0 | VAR_3;
 }
 if (VAR_13 && FUNC_0(VAR_11, VAR_10)) {
  VAR_12[VAR_15++] = VAR_0 | VAR_3
      | VAR_6;
 }
 if (VAR_13) {
  VAR_12[VAR_15++] = VAR_0 | VAR_2;
 }
 if (VAR_13 && FUNC_0(VAR_11, VAR_10)) {
  VAR_12[VAR_15++] = VAR_0 | VAR_2
      | VAR_5;
 }


 if (VAR_14 && FUNC_0(VAR_11, VAR_10)) {
  VAR_12[VAR_15++] = VAR_0 |
      VAR_3 | VAR_7;
  VAR_12[VAR_15++] = VAR_0 |
      VAR_2 | VAR_7;
 }



 VAR_12[VAR_15] = 0;
}
