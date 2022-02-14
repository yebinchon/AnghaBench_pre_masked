
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct dmtpps_softc {int pps_mtx; int pps_state; } ;
struct cdev {struct dmtpps_softc* si_drv1; } ;
typedef int caddr_t ;


 int FUNC_0 (struct dmtpps_softc*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_0, u_long VAR_1, caddr_t VAR_2,
    int VAR_3, struct thread *VAR_4)
{
 struct dmtpps_softc *VAR_5;
 int VAR_6;

 VAR_5 = VAR_0->si_drv1;


 FUNC_1(&VAR_5->pps_mtx);
 VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_5->pps_state);
 FUNC_2(&VAR_5->pps_mtx);
 if (VAR_6 != 0)
  return (VAR_6);





 FUNC_0(VAR_5, 0);

 return (VAR_6);
}
