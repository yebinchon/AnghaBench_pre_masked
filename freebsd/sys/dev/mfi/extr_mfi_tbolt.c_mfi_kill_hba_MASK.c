
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mfi_softc*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct mfi_softc *VAR_3)
{
 if (VAR_3->mfi_flags & VAR_0)
  FUNC_0(VAR_3, 0x00, VAR_2);
 else
  FUNC_0(VAR_3, VAR_1, VAR_2);
}
