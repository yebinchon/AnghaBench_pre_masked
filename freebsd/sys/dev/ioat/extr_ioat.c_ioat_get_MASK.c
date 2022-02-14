
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {scalar_t__ refcnt; int submit_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct ioat_softc *VAR_2)
{

 FUNC_1(&VAR_2->submit_lock, VAR_0);
 FUNC_0(VAR_2->refcnt < VAR_1, ("refcnt overflow"));

 VAR_2->refcnt++;
}
