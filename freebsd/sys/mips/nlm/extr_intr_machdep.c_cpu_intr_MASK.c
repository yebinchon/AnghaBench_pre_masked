
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct trapframe {int dummy; } ;
struct intr_event {int dummy; } ;
typedef int eirr ;
struct TYPE_2__ {struct intr_event* ie; } ;




 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct intr_event*,struct trapframe*) ;
 int * VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long long) ;
 int FUNC_7 (char*,int) ;
 TYPE_1__* VAR_2 ;

void
FUNC_8(struct trapframe *VAR_3)
{
 struct intr_event *VAR_4;
 uint64_t VAR_5, VAR_6;
 int VAR_7;

 FUNC_0();


 VAR_5 = FUNC_5();
 VAR_6 = FUNC_4();
 VAR_5 &= VAR_6;

 if (VAR_5 == 0) {
  FUNC_1();
  return;
 }




 if (VAR_5 & (1 << VAR_0)) {
  FUNC_2(VAR_2[VAR_0].ie, VAR_3);
  FUNC_1();
  return;
 }


 for (VAR_7 = sizeof(VAR_5) * 8 - 1; VAR_7 >= 0; VAR_7--) {
  if ((VAR_5 & (1ULL << VAR_7)) == 0)
   continue;

  VAR_4 = VAR_2[VAR_7].ie;

  switch (VAR_7) {
  case 129:
  case 128:
   break;
  default:
   FUNC_3(VAR_1[VAR_7]);
  }


  FUNC_6(1ULL << VAR_7);
  if (FUNC_2(VAR_4, VAR_3) != 0) {
   FUNC_7("stray interrupt %d\n", VAR_7);
  }
 }
 FUNC_1();
}
