
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct intr_event {int ie_handlers; } ;
typedef int register_t ;
struct TYPE_3__ {int td_pflags; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 struct intr_event** VAR_5 ;
 scalar_t__ FUNC_6 (struct intr_event*,struct trapframe*) ;
 int * VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int ,struct trapframe*) ;
 int FUNC_11 (char*,char*,int) ;
 struct intr_event** VAR_7 ;

void
FUNC_12(struct trapframe *VAR_8)
{
 struct intr_event *VAR_9;
 register_t VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_3();

 VAR_10 = FUNC_8();
 VAR_11 = FUNC_9();
 VAR_14 = (VAR_10 & VAR_0) >> 8;





 VAR_14 &= (VAR_11 & VAR_0) >> 8;
 while ((VAR_13 = FUNC_5(VAR_14)) != 0) {
  VAR_14 &= ~(1 << (VAR_13 - 1));
  switch (VAR_13) {
  case 1: case 2:

   VAR_13--;
   VAR_12 = 0;
   VAR_9 = VAR_7[VAR_13];
   FUNC_7(VAR_6[VAR_13]);
   break;
  default:

   VAR_13 -= 2;
   VAR_13--;
   VAR_12 = 1;
   VAR_9 = VAR_5[VAR_13];
   FUNC_7(VAR_6[VAR_1 + VAR_13]);
   break;
  }

  if (!VAR_9 || FUNC_0(&VAR_9->ie_handlers)) {
   FUNC_11("stray %s interrupt %d\n",
       VAR_12 ? "hard" : "soft", VAR_13);
   continue;
  }

  if (FUNC_6(VAR_9, VAR_8) != 0) {
   FUNC_11("stray %s interrupt %d\n",
       VAR_12 ? "hard" : "soft", VAR_13);
  }
 }

 FUNC_1(VAR_13 == 0, ("all interrupts handled"));

 FUNC_4();





}
