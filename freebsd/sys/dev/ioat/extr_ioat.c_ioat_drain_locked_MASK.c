
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {scalar_t__ refcnt; int submit_lock; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct ioat_softc *VAR_1)
{

 FUNC_1(&VAR_1->submit_lock, VAR_0);

 while (VAR_1->refcnt > 0)
  FUNC_0(&VAR_1->refcnt, &VAR_1->submit_lock, 0, "ioat_drain", 0);
}
