
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_poll_wait {int * wait_addr; int wait; } ;
struct p9_conn {int poll_pending_link; struct p9_poll_wait* poll_wait; } ;


 int FUNC_0 (struct p9_poll_wait*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct p9_conn *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->poll_wait); VAR_3++) {
  struct p9_poll_wait *VAR_4 = &VAR_1->poll_wait[VAR_3];

  if (VAR_4->wait_addr) {
   FUNC_2(VAR_4->wait_addr, &VAR_4->wait);
   VAR_4->wait_addr = ((void*)0);
  }
 }

 FUNC_3(&VAR_0, VAR_2);
 FUNC_1(&VAR_1->poll_pending_link);
 FUNC_4(&VAR_0, VAR_2);
}
