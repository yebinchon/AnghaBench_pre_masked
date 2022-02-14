
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devconf_all; int devconf_dflt; } ;
struct net {TYPE_1__ ipv6; } ;


 int FUNC_0 (int ) ;
 struct net VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_1)
{




 if (VAR_1 != &VAR_0) {
  FUNC_1(VAR_1->ipv6.devconf_dflt);
  FUNC_1(VAR_1->ipv6.devconf_all);
 }
}
