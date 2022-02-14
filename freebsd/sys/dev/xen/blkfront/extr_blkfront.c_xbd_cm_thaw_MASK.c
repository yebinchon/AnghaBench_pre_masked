
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int dummy; } ;
struct xbd_command {int cm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xbd_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct xbd_softc *VAR_2, struct xbd_command *VAR_3)
{
 if ((VAR_3->cm_flags & VAR_0) == 0)
  return;

 VAR_3->cm_flags &= ~VAR_0;
 FUNC_0(VAR_2, VAR_1);
}
