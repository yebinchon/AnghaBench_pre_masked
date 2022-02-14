
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {struct dn_dev* dn_ptr; } ;
struct TYPE_4__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_3__ {int t2; int t3; } ;
struct dn_dev {TYPE_2__ timer; TYPE_1__ parms; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3)
{
 struct dn_dev *VAR_4 = VAR_3->dn_ptr;

 if (VAR_4->parms.t2 > VAR_4->parms.t3)
  VAR_4->parms.t2 = VAR_4->parms.t3;

 VAR_4->timer.data = (unsigned long)VAR_3;
 VAR_4->timer.function = VAR_1;
 VAR_4->timer.expires = VAR_2 + (VAR_4->parms.t2 * VAR_0);

 FUNC_0(&VAR_4->timer);
}
