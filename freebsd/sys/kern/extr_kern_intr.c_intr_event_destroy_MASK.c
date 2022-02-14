
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_event {int ie_lock; int * ie_thread; int ie_handlers; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct intr_event*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct intr_event*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct intr_event *VAR_5)
{

 FUNC_5(&VAR_3);
 FUNC_5(&VAR_5->ie_lock);
 if (!FUNC_0(&VAR_5->ie_handlers)) {
  FUNC_6(&VAR_5->ie_lock);
  FUNC_6(&VAR_3);
  return (VAR_0);
 }
 FUNC_1(&VAR_2, VAR_5, VAR_4);

 if (VAR_5->ie_thread != ((void*)0)) {
  FUNC_3(VAR_5->ie_thread);
  VAR_5->ie_thread = ((void*)0);
 }

 FUNC_6(&VAR_5->ie_lock);
 FUNC_6(&VAR_3);
 FUNC_4(&VAR_5->ie_lock);
 FUNC_2(VAR_5, VAR_1);
 return (0);
}
