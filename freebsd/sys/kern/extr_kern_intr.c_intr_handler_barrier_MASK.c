
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_handler {int ih_flags; struct intr_event* ih_event; } ;
struct intr_event {int ie_lock; int * ie_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct intr_event*) ;
 int FUNC_2 (struct intr_event*) ;
 int FUNC_3 (struct intr_handler*,int *,int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct intr_handler *VAR_3)
{
 struct intr_event *VAR_4;

 VAR_4 = VAR_3->ih_event;
 FUNC_4(&VAR_4->ie_lock, VAR_2);
 FUNC_0((VAR_3->ih_flags & VAR_1) == 0,
     ("update for a removed handler"));

 if (VAR_4->ie_thread == ((void*)0)) {
  FUNC_1(VAR_4);
  return;
 }
 if ((VAR_3->ih_flags & VAR_0) == 0) {
  VAR_3->ih_flags |= VAR_0;
  FUNC_2(VAR_4);
 }
 while ((VAR_3->ih_flags & VAR_0) != 0)
  FUNC_3(VAR_3, &VAR_4->ie_lock, 0, "ih_barr", 0);
}
