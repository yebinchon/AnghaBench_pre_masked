
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_point {int cb_arg; int (* callback ) (struct comm_point*,int ,int ,int *) ;int tcp_do_close; scalar_t__ tcp_is_reading; TYPE_1__* tcp_req_info; } ;
struct TYPE_2__ {scalar_t__ read_again; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct comm_point*,int ) ;
 int FUNC_1 (int,struct comm_point*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (struct comm_point*,int ,int ,int *)) ;
 int FUNC_4 (struct comm_point*) ;
 int FUNC_5 (struct comm_point*,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_6(int VAR_1, struct comm_point* VAR_2)
{
 while(VAR_2->tcp_req_info->read_again) {
  int VAR_3;
  VAR_2->tcp_req_info->read_again = 0;
  if(VAR_2->tcp_is_reading)
   VAR_3 = FUNC_0(VAR_1, VAR_2, 0);
  else VAR_3 = FUNC_1(VAR_1, VAR_2);
  if(!VAR_3) {
   FUNC_4(VAR_2);
   if(!VAR_2->tcp_do_close) {
    FUNC_2(FUNC_3(
     VAR_2->callback));
    (void)(*VAR_2->callback)(VAR_2, VAR_2->cb_arg,
     VAR_0, ((void*)0));
   }
   return;
  }
 }
}
