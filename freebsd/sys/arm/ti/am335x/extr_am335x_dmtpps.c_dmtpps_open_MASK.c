
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int tc_poll_pps; } ;
struct dmtpps_softc {TYPE_1__ tc; } ;
struct cdev {struct dmtpps_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmtpps_softc*,int) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, int VAR_2, int VAR_3,
    struct thread *VAR_4)
{
 struct dmtpps_softc *VAR_5;

 VAR_5 = VAR_1->si_drv1;






 VAR_5->tc.tc_poll_pps = VAR_0;
 FUNC_0(VAR_5, 0);

 return 0;
}
