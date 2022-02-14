
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_sync_mesg {int dummy; } ;
struct ip_vs_sync_buff {TYPE_1__* mesg; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 struct ip_vs_sync_buff* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ip_vs_sync_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct ip_vs_sync_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

void FUNC_4(int VAR_5) {
 struct ip_vs_sync_buff *VAR_6;

 FUNC_2(&VAR_2);
 if (!(VAR_3 & VAR_0))
  goto unlock;
 VAR_6 = VAR_1;
 if (VAR_5 == VAR_4 || !VAR_6)
  goto unlock;


 if (VAR_6->mesg->size <= sizeof(struct ip_vs_sync_mesg)) {
  FUNC_0(VAR_6);
  VAR_1 = ((void*)0);
 } else
  FUNC_1(VAR_1);

unlock:
 FUNC_3(&VAR_2);
}
