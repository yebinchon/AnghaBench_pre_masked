
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnet_dump {int lock; int skb; } ;


 int FUNC_0 (int ,int,int,void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(struct gnet_dump *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 FUNC_0(VAR_0->skb, VAR_1, VAR_3, VAR_2);
 return 0;

nla_put_failure:
 FUNC_1(VAR_0->lock);
 return -1;
}
