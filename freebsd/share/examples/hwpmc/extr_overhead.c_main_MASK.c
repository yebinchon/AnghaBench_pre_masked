
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int pmc_value_t ;
typedef int pmc_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int ,int *,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_10 () ;

int
FUNC_11(int VAR_3, char **VAR_4)
{
 pmc_id_t VAR_5;
 pmc_value_t VAR_6;
 pmc_value_t VAR_7;
 uint64_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 char *VAR_13;

 if (VAR_3 != 2)
  FUNC_0(VAR_1, "counter-name required");

 VAR_13 = VAR_4[1];

 if (FUNC_2() != 0)
  FUNC_0(VAR_0, "hwpmc(4) not loaded, kldload or update your kernel");

 if (FUNC_1(VAR_13, VAR_2, 0, 0, &VAR_5, 64*1024) < 0)
  FUNC_0(VAR_0, "failed to allocate %s as a system counter in counting mode",
      VAR_13);

 VAR_8 = FUNC_10();
 if (FUNC_8(VAR_5, 0) < 0)
  FUNC_0(VAR_0, "failed to zero counter %s", VAR_13);
 VAR_9 = FUNC_10() - VAR_8;

 VAR_8 = FUNC_10();
 if (FUNC_6(VAR_5) < 0)
  FUNC_0(VAR_0, "failed to start counter %s", VAR_13);
 VAR_10 = FUNC_10() - VAR_8;

 VAR_8 = FUNC_10();
 if (FUNC_3(VAR_5, &VAR_6) < 0)
  FUNC_0(VAR_0, "failed to read counter %s", VAR_13);
 VAR_11 = FUNC_10() - VAR_8;

 VAR_8 = FUNC_10();
 if (FUNC_7(VAR_5) < 0)
  FUNC_0(VAR_0, "failed to stop counter %s", VAR_13);
 VAR_12 = FUNC_10() - VAR_8;

 if (FUNC_5(VAR_5, 0, &VAR_7))
  FUNC_0(VAR_0, "failed to read and zero %s", VAR_13);

 if (FUNC_4(VAR_5) < 0)
  FUNC_0(VAR_0, "failed to release %s as a system counter in counting mode",
      VAR_13);

 FUNC_9("Counter %s, read value %ld, read/clear value %ld\n",
     VAR_13, VAR_6, VAR_7);
 FUNC_9("Cycles to start: %ld\tstop: %ld\tread: %ld\twrite: %ld\n",
     VAR_10, VAR_12, VAR_11, VAR_12);

 return(0);
}
