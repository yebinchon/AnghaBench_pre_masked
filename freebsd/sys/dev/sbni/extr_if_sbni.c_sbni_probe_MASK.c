
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sbni_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sbni_softc*,int ) ;

int
FUNC_1(struct sbni_softc *VAR_5)
{
 u_char VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 != 0xff && VAR_6 != 0x00) {
  VAR_6 &= ~VAR_3;
  if (VAR_6 & VAR_0)
   VAR_6 |= VAR_3;

  if (VAR_4 & (1 << (VAR_6 >> 4)))
   return (0);
 }

 return (VAR_2);
}
