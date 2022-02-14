
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct kqueue {int kq_task; int kq_lock; TYPE_1__ kq_sel; int kq_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,struct kqueue*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct kqueue *VAR_3)
{

 FUNC_3(&VAR_3->kq_lock, "kqueue", ((void*)0), VAR_0 | VAR_1);
 FUNC_0(&VAR_3->kq_head);
 FUNC_2(&VAR_3->kq_sel.si_note, &VAR_3->kq_lock);
 FUNC_1(&VAR_3->kq_task, 0, VAR_2, VAR_3);
}
