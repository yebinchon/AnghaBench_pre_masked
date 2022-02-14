
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfscllayout {int nfsly_lock; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(struct nfscllayout *VAR_0, int VAR_1)
{

 FUNC_0();
 if (VAR_1 != 0)
  FUNC_3(&VAR_0->nfsly_lock, 0);
 else
  FUNC_2(&VAR_0->nfsly_lock);
 FUNC_1();
}
