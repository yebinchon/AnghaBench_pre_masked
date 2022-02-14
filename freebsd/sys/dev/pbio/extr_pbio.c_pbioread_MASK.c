
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_resid; } ;
struct pbio_softc {TYPE_1__* pd; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;
struct TYPE_2__ {char* buff; scalar_t__ ipace; int diff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct pbio_softc* FUNC_3 (int) ;
 int FUNC_4 (int,struct pbio_softc*,char*) ;
 int FUNC_5 (int ,int ,char*,scalar_t__) ;
 int FUNC_6 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 struct pbio_softc *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 char VAR_13;

 VAR_12 = FUNC_1(VAR_3);
 VAR_9 = FUNC_0(VAR_3);
 VAR_6 = FUNC_3(VAR_12);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 while (VAR_4->uio_resid > 0) {
  VAR_11 = FUNC_2(VAR_4->uio_resid, VAR_2);
  if ((VAR_10 = FUNC_6(VAR_6->pd[VAR_9].buff, VAR_11, VAR_4)) != 0)
   return (VAR_10);
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
   if ((VAR_7 = FUNC_4(VAR_9, VAR_6, &VAR_13)) != 0)
    return (VAR_7);
   VAR_6->pd[VAR_9].buff[VAR_8] = VAR_13;
   if (!VAR_6->pd[VAR_9].diff && VAR_6->pd[VAR_9].ipace)
    FUNC_5((caddr_t)&(VAR_6->pd[VAR_9].ipace), VAR_1,
     "pbioip", VAR_6->pd[VAR_9].ipace);
  }
 }
 return 0;
}
