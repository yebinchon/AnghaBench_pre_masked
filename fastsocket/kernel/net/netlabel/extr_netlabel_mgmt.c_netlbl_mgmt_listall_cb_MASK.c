
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlbl_domhsh_walk_arg {int skb; int seq; TYPE_1__* nl_cb; } ;
struct netlbl_dom_map {int dummy; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int skb; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 void* FUNC_3 (int ,int ,int ,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct netlbl_dom_map*) ;

__attribute__((used)) static int FUNC_5(struct netlbl_dom_map *VAR_4, void *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct netlbl_domhsh_walk_arg *VAR_7 = VAR_5;
 void *VAR_8;

 VAR_8 = FUNC_3(VAR_7->skb, FUNC_0(VAR_7->nl_cb->skb).pid,
      VAR_7->seq, &VAR_3,
      VAR_2, VAR_1);
 if (VAR_8 == ((void*)0))
  goto listall_cb_failure;

 VAR_6 = FUNC_4(VAR_7->skb, VAR_4);
 if (VAR_6 != 0)
  goto listall_cb_failure;

 VAR_7->seq++;
 return FUNC_2(VAR_7->skb, VAR_8);

listall_cb_failure:
 FUNC_1(VAR_7->skb, VAR_8);
 return VAR_6;
}
