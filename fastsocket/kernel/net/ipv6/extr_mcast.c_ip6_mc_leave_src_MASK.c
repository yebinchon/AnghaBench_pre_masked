
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ipv6_mc_socklist {TYPE_1__* sflist; int sfmode; int addr; } ;
struct inet6_dev {int dummy; } ;
struct TYPE_2__ {int sl_max; int * sl_addr; int sl_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inet6_dev*,int *,int ,int ,int *,int ) ;
 int FUNC_2 (struct sock*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, struct ipv6_mc_socklist *VAR_1,
       struct inet6_dev *VAR_2)
{
 int VAR_3;




 if (!VAR_1->sflist) {

  return FUNC_1(VAR_2, &VAR_1->addr, VAR_1->sfmode, 0, ((void*)0), 0);
 }
 VAR_3 = FUNC_1(VAR_2, &VAR_1->addr, VAR_1->sfmode,
  VAR_1->sflist->sl_count, VAR_1->sflist->sl_addr, 0);
 FUNC_2(VAR_0, VAR_1->sflist, FUNC_0(VAR_1->sflist->sl_max));
 VAR_1->sflist = ((void*)0);
 return VAR_3;
}
