
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct pbio_softc {TYPE_1__* pd; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int diff; int ipace; int opace; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct cdev*) ;
 struct pbio_softc* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3 (struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5,
    struct thread *VAR_6)
{
 struct pbio_softc *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_2);
 VAR_8 = FUNC_0(VAR_2);
 VAR_7 = FUNC_2(VAR_9);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 switch (VAR_3) {
 case 130:
  VAR_7->pd[VAR_8].diff = *(int *)VAR_4;
  break;
 case 129:
  VAR_7->pd[VAR_8].ipace = *(int *)VAR_4;
  break;
 case 128:
  VAR_7->pd[VAR_8].opace = *(int *)VAR_4;
  break;
 case 133:
  *(int *)VAR_4 = VAR_7->pd[VAR_8].diff;
  break;
 case 132:
  *(int *)VAR_4 = VAR_7->pd[VAR_8].ipace;
  break;
 case 131:
  *(int *)VAR_4 = VAR_7->pd[VAR_8].opace;
  break;
 default:
  return VAR_1;
 }
 return (0);
}
