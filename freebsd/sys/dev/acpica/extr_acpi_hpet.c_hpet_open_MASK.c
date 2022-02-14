
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct hpet_softc {int mmap_allow; } ;
struct cdev {struct hpet_softc* si_drv1; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct hpet_softc *VAR_5;

 VAR_5 = VAR_1->si_drv1;
 if (!VAR_5->mmap_allow)
  return (VAR_0);
 else
  return (0);
}
