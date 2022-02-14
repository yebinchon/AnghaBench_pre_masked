
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firewire_comm {int timeout_callout; int task_timeout; int taskqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,void (*) (void*),struct firewire_comm*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct firewire_comm *VAR_3;
 static int VAR_4 = 0;

 VAR_3 = VAR_2;






 if (VAR_4 > VAR_0 * 15)
  FUNC_1(VAR_3->taskqueue, &VAR_3->task_timeout);
 else
  VAR_4++;

 FUNC_0(&VAR_3->timeout_callout, VAR_1 / VAR_0,
     FUNC_2, VAR_3);
}
