
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pccard_softc {scalar_t__ cis_open; int * cis; } ;
struct cdev {struct pccard_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct pccard_softc *VAR_5;

 VAR_5 = VAR_1->si_drv1;
 FUNC_0(VAR_5->cis, VAR_0);
 VAR_5->cis = ((void*)0);
 VAR_5->cis_open = 0;
 return (0);
}
