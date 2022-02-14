
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mfi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct mfi_softc *VAR_7)
{
 if (VAR_7->mfi_flags & VAR_1) {
  FUNC_0(VAR_7, VAR_5, 0xFFFFFFFF);
  FUNC_0(VAR_7, VAR_6, ~VAR_0);
 }
 else if (VAR_7->mfi_flags & VAR_2) {
  FUNC_0(VAR_7, VAR_5, 0xFFFFFFFF);
  FUNC_0(VAR_7, VAR_6, ~VAR_4);
 }
 else if (VAR_7->mfi_flags & VAR_3) {
  FUNC_0(VAR_7, VAR_6, ~0x00000001);
 }
}
