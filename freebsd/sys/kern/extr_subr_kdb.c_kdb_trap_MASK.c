
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct kdb_dbbe {int (* dbbe_trap ) (int,int) ;char* dbbe_name; } ;
typedef int register_t ;
typedef int cpuset_t ;
struct TYPE_3__ {int td_stopsched; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int,int) ;
 struct kdb_dbbe* VAR_4 ;
 struct trapframe* VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct trapframe*,int *) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_7 ;
 int FUNC_15 (int,int) ;

int
FUNC_16(int VAR_8, int VAR_9, struct trapframe *VAR_10)
{



 struct kdb_dbbe *VAR_11;
 register_t VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = VAR_4;
 if (VAR_11 == ((void*)0) || VAR_11->dbbe_trap == ((void*)0))
  return (0);


 if (VAR_3)
  return (0);

 VAR_12 = FUNC_7();

 if (!FUNC_4()) {






  VAR_2->td_stopsched = 1;
  VAR_14 = 1;
 } else
  VAR_14 = 0;

 VAR_3++;

 VAR_5 = VAR_10;


 FUNC_9(VAR_8, VAR_9);

 FUNC_11(VAR_10, &VAR_6);
 FUNC_10(VAR_2);

 FUNC_5();

 for (;;) {
  VAR_13 = VAR_11->dbbe_trap(VAR_8, VAR_9);
  if (VAR_11 == VAR_4)
   break;
  VAR_11 = VAR_4;
  if (VAR_11 == ((void*)0) || VAR_11->dbbe_trap == ((void*)0))
   break;
  FUNC_12("Switching to %s back-end\n", VAR_11->dbbe_name);
 }

 FUNC_6();

 VAR_3--;

 if (VAR_14) {
  VAR_2->td_stopsched = 0;




 }

 FUNC_8(VAR_12);

 return (VAR_13);
}
