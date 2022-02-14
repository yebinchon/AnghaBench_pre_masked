
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char lsap; } ;
struct llc_sap {int (* rcv_func ) (struct sk_buff*,struct net_device*,struct packet_type*,struct net_device*) ;TYPE_1__ laddr; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (struct llc_sap*) ;
 struct llc_sap* FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct llc_sap *FUNC_5(unsigned char VAR_1,
        int (*VAR_2)(struct sk_buff *VAR_3,
      struct net_device *VAR_4,
      struct packet_type *VAR_5,
      struct net_device *VAR_6))
{
 struct llc_sap *VAR_7 = ((void*)0);

 FUNC_3(&VAR_0);
 if (FUNC_0(VAR_1))
  goto out;
 VAR_7 = FUNC_2();
 if (!VAR_7)
  goto out;
 VAR_7->laddr.lsap = VAR_1;
 VAR_7->rcv_func = VAR_2;
 FUNC_1(VAR_7);
out:
 FUNC_4(&VAR_0);
 return VAR_7;
}
