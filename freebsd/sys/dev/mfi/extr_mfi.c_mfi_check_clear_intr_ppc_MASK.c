
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_flags; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mfi_softc*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct mfi_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mfi_softc *VAR_8)
{
 int32_t VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_6);
 if (VAR_8->mfi_flags & VAR_1) {
  if (!(VAR_9 & VAR_0)) {
   return 1;
  }
 }
 else if (VAR_8->mfi_flags & VAR_2) {
  if (!(VAR_9 & VAR_4)) {
   return 1;
  }
 }
 else if (VAR_8->mfi_flags & VAR_3) {
  if (!(VAR_9 & VAR_7)) {
   return 1;
  }
 }
 if (VAR_8->mfi_flags & VAR_3)
  FUNC_1(VAR_8, VAR_6, VAR_9);
 else
  FUNC_1(VAR_8, VAR_5, VAR_9);
 return 0;
}
