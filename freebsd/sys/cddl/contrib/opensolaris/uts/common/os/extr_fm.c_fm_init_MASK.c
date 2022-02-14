
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct erpt_kstat {int dummy; } ;
struct TYPE_4__ {int * ks_data; } ;
typedef TYPE_1__ kstat_t ;
typedef int kstat_named_t ;
typedef int errorq_func_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int * FUNC_2 (char*,int ,int *,int,scalar_t__,int ,int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (scalar_t__,int ) ;
 TYPE_1__* FUNC_4 (char*,int ,char*,char*,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_21 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,int ,int *) ;

void
FUNC_9(void)
{
 kstat_t *VAR_22;
 if (VAR_17 == 0)
  VAR_17 = VAR_2 * FUNC_0(VAR_21, 4);

 if (VAR_18 == 0)
  VAR_18 = VAR_1;
 VAR_14 = FUNC_3(VAR_18, VAR_9);
 VAR_15 = VAR_18;


 VAR_22 = FUNC_4("unix", 0, "fm", "misc", VAR_11,
     sizeof (struct erpt_kstat) / sizeof (kstat_named_t),
     VAR_10);

 if (VAR_22 != ((void*)0)) {
  VAR_22->ks_data = &VAR_19;
  FUNC_5(VAR_22);
 } else {
  FUNC_1(VAR_0, "failed to create fm/misc kstat\n");

 }
}
