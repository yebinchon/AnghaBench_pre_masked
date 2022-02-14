
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nfslock_lock; } ;
struct nfsclclient {TYPE_1__ nfsc_lock; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(struct nfsclclient *VAR_1)
{

 if (VAR_1->nfsc_lock.nfslock_lock & VAR_0)
  FUNC_1(&VAR_1->nfsc_lock, 0);
 else
  FUNC_0(&VAR_1->nfsc_lock);
}
