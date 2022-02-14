
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct crypto_async_request {struct sk_buff* data; } ;
struct TYPE_2__ {int tmp; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2 = VAR_0->data;

 FUNC_1(FUNC_0(VAR_2)->tmp);
 FUNC_2(VAR_2, VAR_1);
}
