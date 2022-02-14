
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_flags; int alc_int_rx_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct alc_softc *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 if ((VAR_7->alc_flags & VAR_0) != 0) {






  VAR_8 = FUNC_1(VAR_7, VAR_3);
  VAR_8 &= ~VAR_6;
  VAR_8 &= ~VAR_4;
  VAR_9 = FUNC_0(VAR_7->alc_int_rx_mod);
  if (VAR_9 == 0)
   VAR_9 = 1;
  VAR_8 |= VAR_9;
  if ((VAR_7->alc_flags & VAR_2) != 0)
   FUNC_2(VAR_7, VAR_3, VAR_8 |
       VAR_5);
  else if ((VAR_7->alc_flags & VAR_1) != 0)
   FUNC_2(VAR_7, VAR_3, VAR_8 |
       VAR_4);
  else
   FUNC_2(VAR_7, VAR_3, 0);
 }
}
