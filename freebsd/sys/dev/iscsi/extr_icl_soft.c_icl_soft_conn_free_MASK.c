
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj {int dummy; } ;
struct icl_conn {scalar_t__ ic_outstanding_pdus; int ic_receive_cv; int ic_send_cv; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct kobj*,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct icl_conn *VAR_2)
{






 FUNC_1(&VAR_2->ic_send_cv);
 FUNC_1(&VAR_2->ic_receive_cv);
 FUNC_2((struct kobj *)VAR_2, VAR_0);
 FUNC_3(&VAR_1);
}
