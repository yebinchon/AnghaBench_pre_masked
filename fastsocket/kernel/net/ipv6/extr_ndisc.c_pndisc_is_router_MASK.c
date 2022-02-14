
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pneigh_entry {int flags; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 struct pneigh_entry* FUNC_0 (TYPE_1__*,int ,void const*,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const void *VAR_2,
       struct net_device *VAR_3)
{
 struct pneigh_entry *VAR_4;
 int VAR_5 = -1;

 FUNC_2(&VAR_1.lock);
 VAR_4 = FUNC_0(&VAR_1, FUNC_1(VAR_3), VAR_2, VAR_3);
 if (VAR_4)
  VAR_5 = !!(VAR_4->flags & VAR_0);
 FUNC_3(&VAR_1.lock);

 return VAR_5;
}
