
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {scalar_t__ MFA_enabled; int mfi_io_lock; } ;
struct mfi_command {int cm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mfi_command*) ;
 int FUNC_1 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_2 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct mfi_softc *VAR_2, struct mfi_command *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_2->mfi_io_lock, VAR_0);

 if (VAR_2->MFA_enabled)
  VAR_4 = FUNC_2(VAR_2, VAR_3);
 else
  VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 != 0 && (VAR_3->cm_flags & VAR_1) != 0)
  FUNC_0(VAR_3);

 return (VAR_4);
}
