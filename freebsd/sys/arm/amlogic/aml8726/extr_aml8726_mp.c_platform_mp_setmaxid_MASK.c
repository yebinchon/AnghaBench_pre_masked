
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int phandle_t ;
struct TYPE_5__ {int r_bushandle; void* r_bustag; } ;
struct TYPE_4__ {int r_bushandle; void* r_bustag; } ;
struct TYPE_6__ {int errata_764369; TYPE_2__ cbus_res; TYPE_1__ aobus_res; int cpucfg_size; int cpucfg_res; int scu_size; int scu_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (void*,int ,int,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 void* VAR_6 ;
 int FUNC_4 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;

void
FUNC_6(void)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 phandle_t VAR_14;
 phandle_t VAR_15;
 uint32_t VAR_16;

 if (VAR_8 != 0)
  return;

 VAR_13 = 1;





 if ((VAR_15 = FUNC_4("scu", VAR_9)) == 0)
  goto moveon;

 if ((VAR_14 = FUNC_4("cpuconfig",
     VAR_5)) == 0)
  goto moveon;

 if (FUNC_1(VAR_15, &VAR_4.scu_res,
     &VAR_4.scu_size) != 0)
  FUNC_5("Could not allocate resource for SCU");

 if (FUNC_1(VAR_14, &VAR_4.cpucfg_res,
     &VAR_4.cpucfg_size) != 0)
  FUNC_5("Could not allocate resource for CPUCONFIG");
 VAR_4.aobus_res.r_bustag = VAR_6;

 VAR_11 = FUNC_2(VAR_4.aobus_res.r_bustag,
     VAR_2, 0x100000,
     0, &VAR_4.aobus_res.r_bushandle);

 if (VAR_11)
  FUNC_5("Could not allocate resource for AOBUS");

 VAR_4.cbus_res.r_bustag = VAR_6;

 VAR_11 = FUNC_2(VAR_4.cbus_res.r_bustag,
     VAR_3, 0x100000,
     0, &VAR_4.cbus_res.r_bushandle);

 if (VAR_11)
  FUNC_5("Could not allocate resource for CBUS");

 VAR_4.errata_764369 = 0;
 for (VAR_12 = 0; VAR_10[VAR_12]; VAR_12++)
  if (FUNC_3(VAR_15, VAR_10[VAR_12])) {
   VAR_4.errata_764369 = 1;
   break;
  }




 VAR_16 = FUNC_0(VAR_1);
 VAR_13 = (VAR_16 & VAR_0) + 1;

moveon:
 VAR_8 = VAR_13;
 VAR_7 = VAR_13 - 1;
}
