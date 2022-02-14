
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lec_arp_table {scalar_t__ status; scalar_t__ no_tries; int timer; int mac_addr; TYPE_1__* priv; scalar_t__ is_rdesc; } ;
struct TYPE_2__ {scalar_t__ max_retry_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_5)
{
 struct lec_arp_table *VAR_6;

 VAR_6 = (struct lec_arp_table *)VAR_5;

 FUNC_1("lec_arp_expire_arp\n");
 if (VAR_6->status == VAR_0) {
  if (VAR_6->no_tries <= VAR_6->priv->max_retry_count) {
   if (VAR_6->is_rdesc)
    FUNC_2(VAR_6->priv, VAR_4,
          VAR_6->mac_addr, ((void*)0), ((void*)0));
   else
    FUNC_2(VAR_6->priv, VAR_3,
          VAR_6->mac_addr, ((void*)0), ((void*)0));
   VAR_6->no_tries++;
  }
  FUNC_0(&VAR_6->timer, VAR_2 + (1 * VAR_1));
 }
}
