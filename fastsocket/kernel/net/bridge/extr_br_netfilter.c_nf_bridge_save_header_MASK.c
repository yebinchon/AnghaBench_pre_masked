
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* nf_bridge; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_1)
{
 int VAR_2 = VAR_0 + FUNC_0(VAR_1);

 FUNC_1(VAR_1, -VAR_2,
      VAR_1->nf_bridge->data, VAR_2);
}
