
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_softc {int io_task; int io_taskqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1)
{
 struct xbb_softc *VAR_2;


 VAR_2 = (struct xbb_softc *)VAR_1;
 FUNC_0(VAR_2->io_taskqueue, &VAR_2->io_task);

 return (VAR_0);
}
