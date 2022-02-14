
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct callout_list {int dummy; } ;
struct callout_cpu {int cc_inited; int cc_callfree; struct callout* cc_callout; int cc_ktr_event_name; int cc_firstevent; int cc_expireq; int * cc_callwheel; int cc_lock; } ;
struct callout {int c_iflags; } ;
struct TYPE_4__ {int sle; } ;
struct TYPE_3__ {int pc_domain; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct callout*,int ) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (struct callout*,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct callout_cpu*,int) ;
 int * FUNC_7 (int,int ,int ,int ) ;
 int FUNC_8 (int *,char*,int *,int) ;
 int VAR_8 ;
 TYPE_1__* FUNC_9 (int) ;
 int FUNC_10 (int ,int,char*,int) ;

__attribute__((used)) static void
FUNC_11(struct callout_cpu *VAR_9, int VAR_10)
{
 struct callout *VAR_11;
 int VAR_12;

 FUNC_8(&VAR_9->cc_lock, "callout", ((void*)0), VAR_2 | VAR_1);
 FUNC_2(&VAR_9->cc_callfree);
 VAR_9->cc_inited = 1;
 VAR_9->cc_callwheel = FUNC_7(sizeof(struct callout_list) *
     VAR_7, VAR_3,
     FUNC_0(FUNC_9(VAR_10)->pc_domain), VAR_4);
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  FUNC_1(&VAR_9->cc_callwheel[VAR_12]);
 FUNC_4(&VAR_9->cc_expireq);
 VAR_9->cc_firstevent = VAR_5;
 for (VAR_12 = 0; VAR_12 < 2; VAR_12++)
  FUNC_6(VAR_9, VAR_12);
 FUNC_10(VAR_9->cc_ktr_event_name, sizeof(VAR_9->cc_ktr_event_name),
     "callwheel cpu %d", VAR_10);
 if (VAR_9->cc_callout == ((void*)0))
  return;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_11 = &VAR_9->cc_callout[VAR_12];
  FUNC_5(VAR_11, 0);
  VAR_11->c_iflags = VAR_0;
  FUNC_3(&VAR_9->cc_callfree, VAR_11, VAR_6.sle);
 }
}
