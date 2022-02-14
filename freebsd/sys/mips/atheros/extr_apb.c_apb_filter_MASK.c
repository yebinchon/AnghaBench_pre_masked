
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct trapframe {int dummy; } ;
struct thread {struct trapframe* td_intr_frame; } ;
struct intr_event {int ie_handlers; } ;
struct apb_softc {int * sc_intr_counter; struct intr_event** sc_eventstab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 struct thread* FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct intr_event*,struct trapframe*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct trapframe*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct trapframe*) ;

__attribute__((used)) static int
FUNC_9(void *VAR_6)
{
 struct apb_softc *VAR_7 = VAR_6;
 struct intr_event *VAR_8;
 uint32_t VAR_9, VAR_10;
 struct thread *VAR_11;
 struct trapframe *VAR_12;

 VAR_9 = FUNC_0(VAR_2);
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_9 & (1 << VAR_10)) {

   switch (VAR_4) {
   case 139:
   case 138:
   case 137:
   case 136:
   case 135:
   case 134:
   case 133:
   case 132:
   case 131:
   case 130:
   case 129:
   case 128:

    FUNC_1(VAR_2,
        (1 << VAR_10));
    break;
   default:

    break;
   }

   VAR_8 = VAR_7->sc_eventstab[VAR_10];

   FUNC_5(VAR_7->sc_intr_counter[VAR_10]);
   if (!VAR_8 || FUNC_2(&VAR_8->ie_handlers)) {
    if (VAR_10 == VAR_0) {
     VAR_11 = FUNC_3(VAR_5);
     VAR_12 = VAR_11->td_intr_frame;

     if (&FUNC_6)
      FUNC_6)(VAR_12);
     continue;
    }

    if (VAR_10 != 0 && VAR_10 != 8 && VAR_10 != 9 && VAR_10 != 10)
     FUNC_7("Stray APB IRQ %d\n", VAR_10);
    continue;
   }

   FUNC_4(VAR_8, FUNC_3(VAR_5)->td_intr_frame);
  }
 }

 return (VAR_3);
}
