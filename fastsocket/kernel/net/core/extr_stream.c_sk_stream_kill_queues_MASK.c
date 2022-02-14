
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_queued; int sk_forward_alloc; int sk_write_queue; int sk_error_queue; int sk_receive_queue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sock *VAR_0)
{

 FUNC_1(&VAR_0->sk_receive_queue);


 FUNC_1(&VAR_0->sk_error_queue);


 FUNC_0(!FUNC_3(&VAR_0->sk_write_queue));


 FUNC_2(VAR_0);

 FUNC_0(VAR_0->sk_wmem_queued);
 FUNC_0(VAR_0->sk_forward_alloc);





}
