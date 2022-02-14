
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_flags; int alc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct alc_softc *VAR_10)
{
 uint32_t VAR_11;
 int VAR_12;


 VAR_11 = FUNC_0(VAR_10, VAR_2);
 if ((VAR_10->alc_flags & VAR_0) == 0) {
  if ((VAR_11 & VAR_7) != 0) {
   VAR_11 &= ~VAR_7;
   FUNC_1(VAR_10, VAR_2, VAR_11);
  }
 } else {
  if ((VAR_11 & VAR_8) != 0) {
   VAR_11 &= ~VAR_8;
   FUNC_1(VAR_10, VAR_2, VAR_11);
  }
 }

 VAR_11 = FUNC_0(VAR_10, VAR_4);
 if ((VAR_11 & VAR_9) != 0) {
  VAR_11 &= ~VAR_9;
  FUNC_1(VAR_10, VAR_4, VAR_11);
 }
 FUNC_2(40);
 for (VAR_12 = VAR_3; VAR_12 > 0; VAR_12--) {
  VAR_11 = FUNC_0(VAR_10, VAR_1);
  if ((VAR_11 & (VAR_5 | VAR_6)) == 0)
   break;
  FUNC_2(10);
 }
 if (VAR_12 == 0)
  FUNC_3(VAR_10->alc_dev,
      "could not disable RxQ/TxQ (0x%08x)!\n", VAR_11);
}
