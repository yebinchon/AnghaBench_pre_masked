
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaiocb {int userproc; int * handle_fn; } ;
typedef int aio_handle_fn_t ;


 int FUNC_0 (int *,struct kaiocb*,int ) ;
 int FUNC_1 (struct kaiocb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kaiocb*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct kaiocb *VAR_4, aio_handle_fn_t *VAR_5)
{

 FUNC_4(&VAR_1);
 if (!FUNC_3(VAR_4, VAR_0)) {
  FUNC_5(&VAR_1);
  FUNC_1(VAR_4);
  return;
 }
 VAR_4->handle_fn = VAR_5;
 FUNC_0(&VAR_2, VAR_4, VAR_3);
 FUNC_2(VAR_4->userproc);
 FUNC_5(&VAR_1);
}
