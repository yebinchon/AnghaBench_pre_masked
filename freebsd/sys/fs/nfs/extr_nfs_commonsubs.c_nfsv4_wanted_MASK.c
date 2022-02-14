
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsv4lock {int nfslock_lock; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nfsv4lock *VAR_1)
{

 if (VAR_1->nfslock_lock & VAR_0) {
  VAR_1->nfslock_lock &= ~VAR_0;
  FUNC_0((caddr_t)&VAR_1->nfslock_lock);
 }
}
