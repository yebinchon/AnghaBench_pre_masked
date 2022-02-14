
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int o_mode_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_0(uint32_t VAR_9, o_mode_t *VAR_10, boolean_t VAR_11)
{
 int VAR_12 = 0;
 o_mode_t VAR_13 = 0;
 uint32_t VAR_14, VAR_15;


 if (VAR_9 & VAR_3)
  VAR_13 |= VAR_6;


 VAR_15 = (VAR_4 | VAR_0);
 if (VAR_11)
  VAR_15 |= VAR_1;
 VAR_14 = VAR_9 & VAR_15;
 if (VAR_14 != 0) {
  if (VAR_14 != VAR_15) {
   VAR_12 = VAR_5;
   goto out;
  }
  VAR_13 |= VAR_7;
 }


 if (VAR_9 & VAR_2) {
  VAR_13 |= VAR_8;
 }

 *VAR_10 = VAR_13;

out:
 return (VAR_12);
}
