
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct acpi_cx {int trans_lat; scalar_t__ type; scalar_t__ mwait_bm_avoidance; int * p_lvlx; int mwait_hint; scalar_t__ do_mwait; } ;
struct acpi_cpu_softc {int cpu_prev_sleep; int cpu_cx_lowest; int cpu_non_c2; int cpu_non_c3; int * cpu_cx_stats; struct acpi_cx* cpu_cx_states; } ;
typedef int sbintime_t ;
struct TYPE_2__ {scalar_t__ td_critnest; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int,int,int*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int) ;
 int VAR_6 ;
 int FUNC_8 (int,char*) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct acpi_cpu_softc** VAR_10 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (struct acpi_cpu_softc*) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static void
FUNC_17(sbintime_t VAR_14)
{
    struct acpi_cpu_softc *VAR_15;
    struct acpi_cx *VAR_16;
    uint64_t VAR_17;
    uint32_t VAR_18, VAR_19;
    ACPI_STATUS VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24;






    VAR_15 = VAR_10[FUNC_9(VAR_11)];
    if (VAR_15 == ((void*)0)) {
 FUNC_11();
 return;
    }


    if (FUNC_15(VAR_15)) {
 FUNC_11();
 return;
    }


    VAR_24 = VAR_15->cpu_prev_sleep;
    if (VAR_14 >= 0 && VAR_24 > (VAR_14 >> 12))
 VAR_24 = (VAR_14 >> 12);
    VAR_22 = 0;
    if (VAR_7)
 VAR_23 = FUNC_16(VAR_15->cpu_cx_lowest, VAR_15->cpu_non_c2);
    else if (VAR_8)
 VAR_23 = FUNC_16(VAR_15->cpu_cx_lowest, VAR_15->cpu_non_c3);
    else
 VAR_23 = VAR_15->cpu_cx_lowest;
    for (; VAR_23 >= 0; VAR_23--) {
 if (VAR_15->cpu_cx_states[VAR_23].trans_lat * 3 <= VAR_24) {
     VAR_22 = VAR_23;
     break;
 }
    }







    if ((VAR_9 & VAR_6) == 0 &&
 VAR_22 > VAR_15->cpu_non_c3) {
 VAR_20 = FUNC_5(VAR_2, &VAR_21);
 if (FUNC_2(VAR_20) && VAR_21 != 0) {
     FUNC_6(VAR_2, 1);
     VAR_22 = VAR_15->cpu_non_c3;
 }
    }


    VAR_16 = &VAR_15->cpu_cx_states[VAR_22];
    VAR_15->cpu_cx_stats[VAR_22]++;
    FUNC_8(VAR_16->type != VAR_3, ("acpi_cpu_idle: C0 sleep"));







    if (VAR_16->type == VAR_4) {
 VAR_17 = FUNC_14();
 if (VAR_16->p_lvlx != ((void*)0)) {

     FUNC_7(VAR_16->p_lvlx, 1);
 }
 if (VAR_16->do_mwait)
     FUNC_12(VAR_16->mwait_hint);
 else
     FUNC_11();
 VAR_19 = ((FUNC_14() - VAR_17) << 20) / FUNC_13();
 if (VAR_12->td_critnest == 0)
  VAR_19 = FUNC_16(VAR_19, 500000 / VAR_13);

 if (VAR_16->do_mwait)
     FUNC_0();
 VAR_15->cpu_prev_sleep = (VAR_15->cpu_prev_sleep * 3 + VAR_19) / 4;
 return;
    }





    if (VAR_16->type == VAR_5 || VAR_16->mwait_bm_avoidance) {
 if ((VAR_9 & VAR_6) == 0) {
     FUNC_6(VAR_0, 1);
     FUNC_6(VAR_1, 1);
 } else
     FUNC_1();
    }







    if (VAR_16->type == VAR_5) {
 FUNC_3(&VAR_18);
 VAR_17 = 0;
    } else {
 VAR_18 = 0;
 VAR_17 = FUNC_14();
    }
    if (VAR_16->do_mwait)
 FUNC_12(VAR_16->mwait_hint);
    else
 FUNC_7(VAR_16->p_lvlx, 1);







    FUNC_3(&VAR_19);
    if (VAR_16->type == VAR_5) {
 FUNC_3(&VAR_19);
 FUNC_4(VAR_18, VAR_19, &VAR_19);
    } else
 VAR_19 = ((FUNC_14() - VAR_17) << 20) / FUNC_13();


    if ((VAR_16->type == VAR_5 || VAR_16->mwait_bm_avoidance) &&
      (VAR_9 & VAR_6) == 0) {
 FUNC_6(VAR_0, 0);
 FUNC_6(VAR_1, 0);
    }
    FUNC_0();

    VAR_15->cpu_prev_sleep = (VAR_15->cpu_prev_sleep * 3 + FUNC_10(VAR_19)) / 4;
}
