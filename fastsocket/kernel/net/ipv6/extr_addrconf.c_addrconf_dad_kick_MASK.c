
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet6_ifaddr {int flags; int probes; struct inet6_dev* idev; } ;
struct TYPE_2__ {int dad_transmits; scalar_t__ rtr_solicit_delay; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inet6_ifaddr*,int ,unsigned long) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct inet6_ifaddr *VAR_2)
{
 unsigned long VAR_3;
 struct inet6_dev *VAR_4 = VAR_2->idev;

 if (VAR_2->flags & VAR_1)
  VAR_3 = 0;
 else
  VAR_3 = FUNC_1() % (VAR_4->cnf.rtr_solicit_delay ? : 1);

 VAR_2->probes = VAR_4->cnf.dad_transmits;
 FUNC_0(VAR_2, VAR_0, VAR_3);
}
