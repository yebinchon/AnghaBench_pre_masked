
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int (* vmbus_event_proc ) (struct vmbus_softc*,int) ;} ;
struct vmbus_message {scalar_t__ msg_type; int msg_flags; } ;
struct trapframe {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vmbus_message* FUNC_0 (struct vmbus_softc*,int ,int) ;
 int FUNC_1 (struct vmbus_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct vmbus_softc*,int) ;
 int FUNC_5 (struct vmbus_message*,int ) ;
 int FUNC_6 (struct trapframe*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static __inline int
FUNC_8(struct vmbus_softc *VAR_10, struct trapframe *VAR_11, int VAR_12)
{
 volatile struct vmbus_message *VAR_13;
 struct vmbus_message *VAR_14;

 VAR_14 = FUNC_0(VAR_10, VAR_7, VAR_12);






 VAR_13 = VAR_14 + VAR_6;
 if (VAR_13->msg_type == VAR_2) {
  VAR_13->msg_type = VAR_1;

  FUNC_6(VAR_11);
  FUNC_3();
  if (VAR_13->msg_flags & VAR_4) {




   FUNC_7(VAR_3, 0);
  }
 }
 VAR_10->vmbus_event_proc(VAR_10, VAR_12);




 VAR_13 = VAR_14 + VAR_5;
 if (FUNC_2(VAR_13->msg_type != VAR_1)) {
  FUNC_5(FUNC_0(VAR_10, VAR_9, VAR_12),
      FUNC_1(VAR_10, VAR_8, VAR_12));
 }

 return (VAR_0);
}
