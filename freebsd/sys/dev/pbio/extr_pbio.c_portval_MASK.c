
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pbio_softc {TYPE_1__* pd; } ;
typedef int caddr_t ;
struct TYPE_2__ {char oldval; int ipace; scalar_t__ diff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pbio_softc*,int ) ;
 int FUNC_2 (int ,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_5, struct pbio_softc *VAR_6, char *VAR_7)
{
 int VAR_8;

 for (;;) {
  switch (VAR_5) {
  case 0:
   *VAR_7 = FUNC_1(VAR_6, VAR_2);
   break;
  case 1:
   *VAR_7 = FUNC_1(VAR_6, VAR_3);
   break;
  case 2:
   *VAR_7 = (FUNC_1(VAR_6, VAR_4) >> 4) & 0xf;
   break;
  case 3:
   *VAR_7 = FUNC_1(VAR_6, VAR_4) & 0xf;
   break;
  default:
   *VAR_7 = 0;
   break;
  }
  if (VAR_6->pd[VAR_5].diff) {
   if (*VAR_7 != VAR_6->pd[VAR_5].oldval) {
    VAR_6->pd[VAR_5].oldval = *VAR_7;
    return (0);
   }
   VAR_8 = FUNC_2((caddr_t)&(VAR_6->pd[VAR_5].diff), VAR_1,
         "pbiopl", FUNC_0(1, VAR_6->pd[VAR_5].ipace));
   if (VAR_8 == VAR_0)
    return (VAR_0);
  } else
   return (0);
 }
}
