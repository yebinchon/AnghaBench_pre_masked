
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ipt_argcnt; int ipt_ftype; int ipt_wrap; int * ipt_func; } ;
typedef TYPE_1__ image_patch_table ;
typedef int funcptr ;
typedef void* driver_dispatch ;
struct TYPE_6__ {void** dro_dispatch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ,int *,int,int ) ;

int
FUNC_2(void)
{
 image_patch_table *VAR_22;
 int VAR_23;

 VAR_22 = VAR_7;
 while (VAR_22->ipt_func != ((void*)0)) {
  FUNC_1((funcptr)VAR_22->ipt_func,
      (funcptr *)&VAR_22->ipt_wrap,
      VAR_22->ipt_argcnt, VAR_22->ipt_ftype);
  VAR_22++;
 }

 FUNC_1((funcptr)VAR_10,
     (funcptr *)&VAR_11, 2, VAR_5);
 FUNC_1((funcptr)VAR_8,
     (funcptr *)&VAR_9, 2, VAR_5);
 FUNC_1((funcptr)VAR_14,
     (funcptr *)&VAR_15, 2, VAR_5);
 FUNC_1((funcptr)VAR_16,
     (funcptr *)&VAR_17, 2, VAR_5);
 FUNC_1((funcptr)VAR_12,
     (funcptr *)&VAR_13, 2, VAR_5);
 FUNC_1((funcptr)VAR_18,
     (funcptr *)&VAR_19, 2, VAR_5);
 FUNC_1((funcptr)VAR_20,
     (funcptr *)&VAR_21, 2, VAR_5);



 FUNC_0(&VAR_6, "USB Bus");


 for (VAR_23 = 0; VAR_23 <= VAR_2; VAR_23++)
  VAR_6.dro_dispatch[VAR_23] =
   (driver_dispatch)VAR_11;

 VAR_6.dro_dispatch[VAR_1] =
     (driver_dispatch)VAR_9;
 VAR_6.dro_dispatch[VAR_0] =
     (driver_dispatch)VAR_9;
 VAR_6.dro_dispatch[VAR_4] =
     (driver_dispatch)VAR_17;
 VAR_6.dro_dispatch[VAR_3] =
     (driver_dispatch)VAR_15;

 return (0);
}
