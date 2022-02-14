
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int* data; } ;
struct rose_sock {TYPE_1__* neighbour; } ;
struct TYPE_2__ {int use; } ;




 int FUNC_0 (struct sock*,int ,int,int) ;
 struct rose_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct rose_sock *VAR_3 = FUNC_1(VAR_0);

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_0, 129);
  FUNC_0(VAR_0, 0, VAR_1->data[3], VAR_1->data[4]);
  VAR_3->neighbour->use--;
  break;

 case 129:
  FUNC_0(VAR_0, 0, -1, -1);
  VAR_3->neighbour->use--;
  break;

 default:
  break;
 }

 return 0;
}
