
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobj {int dummy; } ;
struct TYPE_3__ {int flush_lock; int flush_cv; } ;
struct TYPE_4__ {TYPE_1__ beacon; int lock; } ;
struct iser_conn {int up_cv; int state_mutex; TYPE_2__ ib_conn; } ;
struct icl_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct iser_conn* FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (struct icl_conn*) ;
 int FUNC_3 (struct kobj*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct icl_conn *VAR_2)
{
 struct iser_conn *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);
 FUNC_4(&VAR_3->ib_conn.lock);
 FUNC_0(&VAR_3->ib_conn.beacon.flush_cv);
 FUNC_4(&VAR_3->ib_conn.beacon.flush_lock);
 FUNC_6(&VAR_3->state_mutex);
 FUNC_0(&VAR_3->up_cv);
 FUNC_3((struct kobj *)VAR_3, VAR_0);
 FUNC_5(&VAR_1);
}
