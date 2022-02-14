
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct pps_data {int ppbus; int * pps; } ;
struct cdev {int si_drv2; struct pps_data* si_drv1; } ;
typedef int caddr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_0, u_long VAR_1, caddr_t VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct pps_data *VAR_5 = VAR_0->si_drv1;
 int VAR_6 = (intptr_t)VAR_0->si_drv2;
 int VAR_7;

 FUNC_0(VAR_5->ppbus);
 VAR_7 = FUNC_2(VAR_1, VAR_2, &VAR_5->pps[VAR_6]);
 FUNC_1(VAR_5->ppbus);
 return (VAR_7);
}
