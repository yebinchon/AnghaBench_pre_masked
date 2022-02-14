
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {scalar_t__ cipso; scalar_t__ __data; } ;
struct TYPE_2__ {int opt; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct netlbl_lsm_secattr*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 struct ip_options* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct sock *VAR_1, struct netlbl_lsm_secattr *VAR_2)
{
 struct ip_options *VAR_3;
 int VAR_4 = -VAR_0;

 FUNC_3();
 VAR_3 = FUNC_2(FUNC_1(VAR_1)->opt);
 if (VAR_3 && VAR_3->cipso)
  VAR_4 = FUNC_0(VAR_3->__data +
      VAR_3->cipso -
      sizeof(struct iphdr),
           VAR_2);
 FUNC_4();
 return VAR_4;
}
