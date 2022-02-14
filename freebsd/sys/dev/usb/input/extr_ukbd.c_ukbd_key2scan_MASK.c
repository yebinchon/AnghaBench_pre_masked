
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ukbd_softc {int* sc_buffered_char; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static int
FUNC_1(struct ukbd_softc *VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 static const int VAR_15[] = {

  0x11c,

  0x11d,
  0x135,
  0x137,
  0x138,
  0x147,
  0x148,
  0x149,
  0x14b,
  0x14d,
  0x14f,

  0x150,
  0x151,
  0x152,
  0x153,
  0x146,
  0x15b,
  0x15c,
  0x15d,


  0x168,
  0x15e,

  0x15f,
  0x160,
  0x161,
  0x162,
  0x163,
  0x164,
  0x165,
  0x166,
  0x167,
  0x125,

  0x11f,
  0x11e,
  0x120,


  0x73,
  0x70,
  0x7d,
  0x79,
  0x7b,
  0x5c,
  0x71,
  0x72,
 };

 if ((VAR_12 >= 89) && (VAR_12 < (int)(89 + FUNC_0(VAR_15)))) {
  VAR_12 = VAR_15[VAR_12 - 89];
 }

 if (VAR_12 == 0x137 && (!(VAR_13 & (VAR_0 | VAR_1 |
     VAR_2 | VAR_3)))) {
  VAR_12 |= VAR_8;
 }

 if ((VAR_12 == 0x146) && (!(VAR_13 & (VAR_0 | VAR_1)))) {
  VAR_12 = (0x45 | VAR_7 | VAR_5);
 }
 VAR_12 |= (VAR_14 ? VAR_10 : VAR_9);

 if (VAR_12 & VAR_4) {
  if (VAR_12 & VAR_5) {

   VAR_11->sc_buffered_char[0] = (0x1d | (VAR_12 & VAR_10));
   VAR_11->sc_buffered_char[1] = (VAR_12 & ~VAR_4);
  } else if (VAR_12 & VAR_8) {

   VAR_11->sc_buffered_char[0] = (0x2a | (VAR_12 & VAR_10));
   VAR_11->sc_buffered_char[1] = (VAR_12 & ~VAR_8);
  } else {
   VAR_11->sc_buffered_char[0] = (VAR_12 & ~VAR_4);
   VAR_11->sc_buffered_char[1] = 0;
  }
  return ((VAR_12 & VAR_6) ? 0xe0 : 0xe1);
 }
 return (VAR_12);

}
