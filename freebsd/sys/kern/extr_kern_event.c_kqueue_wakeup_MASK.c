
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct kqueue {int kq_state; int kq_sigio; TYPE_1__ kq_sel; } ;


 int VAR_0 ;
 int FUNC_0 (struct kqueue*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kqueue*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct kqueue*) ;

__attribute__((used)) static void
FUNC_7(struct kqueue *VAR_5)
{
 FUNC_0(VAR_5);

 if ((VAR_5->kq_state & VAR_2) == VAR_2) {
  VAR_5->kq_state &= ~VAR_2;
  FUNC_6(VAR_5);
 }
 if ((VAR_5->kq_state & VAR_1) == VAR_1) {
  FUNC_5(&VAR_5->kq_sel, VAR_3);
  if (!FUNC_1(&VAR_5->kq_sel))
   VAR_5->kq_state &= ~VAR_1;
 }
 if (!FUNC_2(&VAR_5->kq_sel.si_note))
  FUNC_3(VAR_5);
 if ((VAR_5->kq_state & VAR_0) == VAR_0) {
  FUNC_4(&VAR_5->kq_sigio, VAR_4, 0);
 }
}
