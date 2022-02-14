
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int open; } ;
struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int FUNC_0 (int,struct twa_softc*,char*) ;

__attribute__((used)) static TW_INT32
FUNC_1(struct cdev *VAR_1, TW_INT32 VAR_2, TW_INT32 VAR_3, struct thread *VAR_4)
{
 struct twa_softc *VAR_5 = (struct twa_softc *)(VAR_1->si_drv1);

 FUNC_0(5, VAR_5, "entered");
 VAR_5->open = VAR_0;
 return(0);
}
