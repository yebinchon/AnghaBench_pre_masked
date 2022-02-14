
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kq_exit; TYPE_1__* kq_td; int kq_proc; } ;
typedef TYPE_2__ kdpc_queue ;
struct TYPE_4__ {int td_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*,int) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static void
FUNC_2(void)
{
 kdpc_queue *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = VAR_5 + VAR_7;
  VAR_6->kq_exit = 1;
  FUNC_0(&VAR_6->kq_proc, VAR_1, VAR_0);
  while (VAR_6->kq_exit)
   FUNC_1(VAR_6->kq_td->td_proc, VAR_2, "waitiw", VAR_4/10);
 }
}
