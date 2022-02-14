
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct kqueue {int kq_state; TYPE_1__ kq_sel; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct kqueue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct kqueue*) ;
 int VAR_2 ;
 int FUNC_5 (int*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3, int VAR_4)
{
 struct kqueue *VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_5 = VAR_3;

 FUNC_1(&VAR_2, VAR_6);
 FUNC_3(VAR_5);

 FUNC_0(&VAR_5->kq_sel.si_note, 0);

 VAR_5->kq_state &= ~VAR_1;
 if ((VAR_5->kq_state & VAR_0) == VAR_0) {
  FUNC_5(&VAR_5->kq_state);
 }
 FUNC_4(VAR_5);
 FUNC_2(&VAR_2, VAR_6);
}
