
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct kqueue {int kq_sigio; int * kq_knlist; int * kq_knhash; int kq_lock; TYPE_1__ kq_sel; int * kq_fdp; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct kqueue *VAR_1)
{

 FUNC_0(VAR_1->kq_fdp == ((void*)0),
     ("kqueue still attached to a file descriptor"));
 FUNC_5(&VAR_1->kq_sel);
 FUNC_3(&VAR_1->kq_sel.si_note);
 FUNC_4(&VAR_1->kq_lock);

 if (VAR_1->kq_knhash != ((void*)0))
  FUNC_1(VAR_1->kq_knhash, VAR_0);
 if (VAR_1->kq_knlist != ((void*)0))
  FUNC_1(VAR_1->kq_knlist, VAR_0);

 FUNC_2(&VAR_1->kq_sigio);
}
