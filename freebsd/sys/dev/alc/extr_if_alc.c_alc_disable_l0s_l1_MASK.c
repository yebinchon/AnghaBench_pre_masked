
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_2(struct alc_softc *VAR_11)
{
 uint32_t VAR_12;

 if ((VAR_11->alc_flags & VAR_0) == 0) {

  VAR_12 = FUNC_0(VAR_11, VAR_1);
  VAR_12 &= ~(VAR_5 | VAR_4 |
      VAR_2 | VAR_3 |
      VAR_6 | VAR_9);
  VAR_12 |= VAR_7 |
      VAR_10 | VAR_8;
  FUNC_1(VAR_11, VAR_1, VAR_12);
 }
}
