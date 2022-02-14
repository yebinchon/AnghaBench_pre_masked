
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int ioDone; int ioTotal; scalar_t__ ioErrno; int timer; int iovCurCount; int iovCur; } ;
typedef TYPE_1__ evStream ;
typedef int evContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_5(evContext VAR_3, void *VAR_4, int VAR_5, int VAR_6) {
 evStream *VAR_7 = VAR_4;
 int VAR_8;

 FUNC_0(VAR_6);

 VAR_8 = FUNC_4(VAR_5, VAR_7->iovCur, VAR_7->iovCurCount);
 if (VAR_8 > 0) {
  if ((VAR_7->flags & VAR_1) != 0)
   FUNC_3(VAR_3, VAR_7->timer);
  FUNC_1(VAR_7, VAR_8);
 } else {
  if (VAR_8 < 0 && VAR_2 != VAR_0) {
   VAR_7->ioDone = -1;
   VAR_7->ioErrno = VAR_2;
  }
 }
 if (VAR_7->ioDone == -1 || VAR_7->ioDone == VAR_7->ioTotal)
  FUNC_2(VAR_3, VAR_7);
}
