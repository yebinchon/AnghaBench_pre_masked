
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct superiocmd {int val; int cr; int ldn; } ;
struct siosc {int dummy; } ;
struct cdev {struct siosc* si_drv1; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int FUNC_0 (struct siosc*) ;
 int FUNC_1 (struct siosc*) ;
 int FUNC_2 (struct siosc*,int ,int ) ;
 int FUNC_3 (struct siosc*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 struct siosc *VAR_6;
 struct superiocmd *VAR_7;

 VAR_6 = VAR_1->si_drv1;
 VAR_7 = (struct superiocmd *)VAR_3;
 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_6);
  VAR_7->val = FUNC_2(VAR_6, VAR_7->ldn, VAR_7->cr);
  FUNC_1(VAR_6);
  return (0);
 case 128:
  FUNC_0(VAR_6);
  FUNC_3(VAR_6, VAR_7->ldn, VAR_7->cr, VAR_7->val);
  FUNC_1(VAR_6);
  return (0);
 default:
  return (VAR_0);
 }
}
