
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* done ) (struct ida_softc*) ;} ;
struct ida_softc {int flags; TYPE_1__ cmd; int lock; } ;
struct ida_qcb {void* state; } ;
typedef int bus_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ida_softc*,struct ida_qcb*) ;
 struct ida_qcb* FUNC_2 (struct ida_softc*,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct ida_qcb*,int *,int ,char*,int) ;
 int FUNC_5 (struct ida_softc*) ;

__attribute__((used)) static int
FUNC_6(struct ida_softc *VAR_7, struct ida_qcb *VAR_8)
{
 struct ida_qcb *VAR_9 = ((void*)0);
 bus_addr_t VAR_10;
 int VAR_11;

 if (!VAR_5)
  FUNC_3(&VAR_7->lock, VAR_2);
 if (VAR_7->flags & VAR_1) {
  if (FUNC_4(VAR_8, &VAR_7->lock, VAR_3, "idacmd", 5 * VAR_6)) {
   VAR_8->state = VAR_4;
   return (VAR_0);
  }
  return (0);
 }

again:
 VAR_11 = 5 * 1000 * 100;
 while ((VAR_10 = VAR_7->cmd.done(VAR_7)) == 0) {
  if (VAR_11-- == 0) {
   VAR_8->state = VAR_4;
   return (VAR_0);
  }
  FUNC_0(10);
 }

 VAR_9 = FUNC_2(VAR_7, VAR_10 & ~3);
 if (VAR_9 != VAR_8)
  goto again;
 FUNC_1(VAR_7, VAR_8);
 return (0);
}
