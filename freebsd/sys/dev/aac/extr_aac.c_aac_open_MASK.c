
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {struct aac_softc* si_drv1; } ;
struct aac_softc {int aac_dev; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aac_softc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct aac_softc *VAR_6;

 VAR_6 = VAR_2->si_drv1;
 FUNC_2(VAR_6, VAR_0, "");
 FUNC_1(VAR_6->aac_dev);
 FUNC_0(VAR_6, VAR_1);

 return 0;
}
