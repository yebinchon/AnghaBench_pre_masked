
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_softc {int query; } ;


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
 int FUNC_0 (struct bhnd_pmu_softc*,int ,int,int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct bhnd_pmu_softc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bhnd_pmu_softc *VAR_10)
{
 uint32_t VAR_11 = FUNC_3(&VAR_10->query) / 1000;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;

 VAR_13 = VAR_14 = VAR_15 = VAR_17 = VAR_11 / 80;
 VAR_16 = VAR_11 / 160;

 if (FUNC_2(VAR_10))
  VAR_12 = VAR_11 / 80;
 else
  VAR_12 = VAR_11 / 90;

 VAR_18 = 0;
 VAR_18 |= FUNC_1(VAR_12, VAR_0);
 VAR_18 |= FUNC_1(VAR_13, VAR_1);
 VAR_18 |= FUNC_1(VAR_14, VAR_2);
 VAR_18 |= FUNC_1(VAR_15, VAR_3);

 FUNC_0(VAR_10, VAR_8, VAR_18, ~0);

 VAR_19 = 0;
 VAR_19 |= FUNC_1(VAR_16, VAR_4);
 VAR_19 |= FUNC_1(VAR_17, VAR_6);

 FUNC_0(VAR_10, VAR_9, VAR_19,
     VAR_5 | VAR_7);
}
