
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_alloc; int (* sk_write_space ) (struct sock*) ;} ;
struct sk_buff {unsigned int truesize; struct sock* sk; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (unsigned int,int *) ;
 scalar_t__ FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;

void FUNC_5(struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;
 unsigned int VAR_3 = VAR_1->truesize;

 if (!FUNC_3(VAR_2, VAR_0)) {




  FUNC_1(VAR_3 - 1, &VAR_2->sk_wmem_alloc);
  VAR_2->sk_write_space(VAR_2);
  VAR_3 = 1;
 }




 if (FUNC_2(VAR_3, &VAR_2->sk_wmem_alloc))
  FUNC_0(VAR_2);
}
