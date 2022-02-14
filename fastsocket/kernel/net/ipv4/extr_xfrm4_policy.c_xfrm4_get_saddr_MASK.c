
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int a4; } ;
typedef TYPE_1__ xfrm_address_t ;
struct rtable {int rt_src; } ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (struct net*,int ,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1,
      xfrm_address_t *VAR_2, xfrm_address_t *VAR_3)
{
 struct dst_entry *VAR_4;
 struct rtable *VAR_5;

 VAR_4 = FUNC_2(VAR_1, 0, ((void*)0), VAR_3);
 if (FUNC_0(VAR_4))
  return -VAR_0;

 VAR_5 = (struct rtable *)VAR_4;
 VAR_2->a4 = VAR_5->rt_src;
 FUNC_1(VAR_4);
 return 0;
}
