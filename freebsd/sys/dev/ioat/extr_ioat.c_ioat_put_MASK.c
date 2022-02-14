
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {int refcnt; int submit_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void
FUNC_3(struct ioat_softc *VAR_1)
{

 FUNC_1(&VAR_1->submit_lock, VAR_0);
 FUNC_0(VAR_1->refcnt >= 1, ("refcnt error"));

 if (--VAR_1->refcnt == 0)
  FUNC_2(&VAR_1->refcnt);
}
