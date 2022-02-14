
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_resid; } ;
struct pbio_softc {TYPE_1__* pd; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;
struct TYPE_2__ {char* buff; scalar_t__ opace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 (scalar_t__,int ) ;
 char FUNC_3 (struct pbio_softc*,int ) ;
 struct pbio_softc* FUNC_4 (int) ;
 int FUNC_5 (struct pbio_softc*,int ,char) ;
 int FUNC_6 (int ,int ,char*,scalar_t__) ;
 int FUNC_7 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 struct pbio_softc *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 char VAR_15, VAR_16;

 VAR_14 = FUNC_1(VAR_6);
 VAR_11 = FUNC_0(VAR_6);
 VAR_9 = FUNC_4(VAR_14);
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 while (VAR_7->uio_resid > 0) {
  VAR_13 = FUNC_2(VAR_7->uio_resid, VAR_2);
  if ((VAR_12 = FUNC_7(VAR_9->pd[VAR_11].buff, VAR_13, VAR_7)) != 0)
   return (VAR_12);
  for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
   VAR_15 = VAR_9->pd[VAR_11].buff[VAR_10];
   switch (VAR_11) {
   case 0:
    FUNC_5(VAR_9, VAR_3, VAR_15);
    break;
   case 1:
    FUNC_5(VAR_9, VAR_4, VAR_15);
    break;
   case 2:
    VAR_16 = FUNC_3(VAR_9, VAR_5);
    VAR_16 &= 0xf;
    VAR_15 <<= 4;
    FUNC_5(VAR_9, VAR_5, VAR_15 | VAR_16);
    break;
   case 3:
    VAR_16 = FUNC_3(VAR_9, VAR_5);
    VAR_16 &= 0xf0;
    VAR_15 &= 0xf;
    FUNC_5(VAR_9, VAR_5, VAR_16 | VAR_15);
    break;
   }
   if (VAR_9->pd[VAR_11].opace)
    FUNC_6((caddr_t)&(VAR_9->pd[VAR_11].opace),
     VAR_1, "pbioop",
     VAR_9->pd[VAR_11].opace);
  }
 }
 return (0);
}
