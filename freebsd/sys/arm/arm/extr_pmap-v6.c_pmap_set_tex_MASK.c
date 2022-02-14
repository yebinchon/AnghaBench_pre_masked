
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ coherent_walk; } ;


 int FUNC_0 (int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_13 ;
 int FUNC_3 (int) ;
 int VAR_14 ;
 int* VAR_15 ;
 int FUNC_4 () ;
 int VAR_16 ;

void
FUNC_5(void)
{
 uint32_t VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23;
 VAR_14 = VAR_12;
 VAR_16 = FUNC_3(0);


 VAR_17 = 0;
 VAR_18 = 0;


 for (VAR_23 = 0; VAR_23 < 8; VAR_23++) {
  VAR_19 = (VAR_15[VAR_23] >> VAR_10) &
   VAR_9;
  VAR_20 = (VAR_15[VAR_23] >> VAR_4) &
   VAR_3;
  VAR_21 = (VAR_15[VAR_23] >> VAR_8) &
   VAR_7;
  VAR_22 = (VAR_15[VAR_23] >> VAR_6) &
   VAR_5;

  VAR_17 |= VAR_19 << (VAR_23 * 2);
  VAR_17 |= VAR_22 << (VAR_23 + 24);
  VAR_18 |= VAR_20 << (VAR_23 * 2);
  VAR_18 |= VAR_21 << (VAR_23 * 2 + 16);
 }

 VAR_17 |= VAR_0 | VAR_1;







 FUNC_2(VAR_17);
 FUNC_1(VAR_18);


 FUNC_4();
}
