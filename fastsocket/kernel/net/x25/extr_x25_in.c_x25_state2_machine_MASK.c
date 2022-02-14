
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int * data; } ;




 int FUNC_0 (struct sock*,int ,int ,int ) ;
 int FUNC_1 (struct sock*,int) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 switch (VAR_2) {

  case 128:
   FUNC_1(VAR_0, 129);
   FUNC_0(VAR_0, 0, VAR_1->data[3], VAR_1->data[4]);
   break;

  case 129:
   FUNC_0(VAR_0, 0, 0, 0);
   break;

  default:
   break;
 }

 return 0;
}
