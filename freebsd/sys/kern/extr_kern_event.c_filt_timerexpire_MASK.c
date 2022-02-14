
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kq_timer_cb_data {scalar_t__ to; int next; int c; } ;
struct TYPE_2__ {struct kq_timer_cb_data* p_v; } ;
struct knote {int kn_flags; TYPE_1__ kn_ptr; int kn_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct knote*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,void (*) (void*),struct knote*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct knote *VAR_4;
 struct kq_timer_cb_data *VAR_5;

 VAR_4 = VAR_3;
 VAR_4->kn_data++;
 FUNC_0(VAR_4, 0);

 if ((VAR_4->kn_flags & VAR_1) != 0)
  return;
 VAR_5 = VAR_4->kn_ptr.p_v;
 if (VAR_5->to == 0)
  return;
 VAR_5->next += VAR_5->to;
 FUNC_2(&VAR_5->c, VAR_5->next, 0, FUNC_3, VAR_4,
     FUNC_1(VAR_2), VAR_0);
}
