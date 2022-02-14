
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {struct aac_softc* si_drv1; } ;
struct aac_softc {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct aac_softc *VAR_5;

 VAR_5 = VAR_1->si_drv1;
 FUNC_0(VAR_5, VAR_0, "");
 return 0;
}
