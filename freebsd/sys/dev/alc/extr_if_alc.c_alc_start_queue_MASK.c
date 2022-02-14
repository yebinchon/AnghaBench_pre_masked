
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct alc_softc *VAR_8)
{
 uint32_t VAR_9[] = {
  0,
  VAR_4,
  VAR_4 | VAR_5,
  VAR_4 | VAR_5 | VAR_6,
  VAR_3
 };
 uint32_t VAR_10;

 FUNC_0(VAR_8);


 VAR_10 = FUNC_1(VAR_8, VAR_1);
 if ((VAR_8->alc_flags & VAR_0) == 0) {
  VAR_10 &= ~VAR_3;
  VAR_10 |= VAR_9[1];
 } else
  VAR_10 |= VAR_4;
 FUNC_2(VAR_8, VAR_1, VAR_10);

 VAR_10 = FUNC_1(VAR_8, VAR_2);
 VAR_10 |= VAR_7;
 FUNC_2(VAR_8, VAR_2, VAR_10);
}
