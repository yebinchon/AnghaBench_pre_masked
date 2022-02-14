
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct inet6_ifaddr {int prefix_len; int addr; } ;
struct TYPE_5__ {scalar_t__ optimistic_dad; } ;
struct inet6_dev {int dev; TYPE_1__ cnf; } ;
struct in6_addr {int dummy; } ;
struct TYPE_7__ {TYPE_2__* devconf_all; } ;
struct TYPE_8__ {TYPE_3__ ipv6; } ;
struct TYPE_6__ {int forwarding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (struct inet6_ifaddr*,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_5 (struct inet6_dev*,struct in6_addr*,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct inet6_dev *VAR_3, struct in6_addr *VAR_4)
{
 struct inet6_ifaddr * VAR_5;
 u32 VAR_6 = VAR_1;
 VAR_5 = FUNC_5(VAR_3, VAR_4, 64, VAR_2, VAR_6, 0, 0);
 if (!FUNC_0(VAR_5)) {
  FUNC_2(&VAR_5->addr, VAR_5->prefix_len, VAR_3->dev, 0, 0);
  FUNC_1(VAR_5, 0);
  FUNC_4(VAR_5);
 }
}
