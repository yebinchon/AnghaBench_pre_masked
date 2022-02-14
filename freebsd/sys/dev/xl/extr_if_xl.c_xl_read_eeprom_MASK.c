
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct xl_softc {int xl_flags; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xl_softc*) ;

__attribute__((used)) static int
FUNC_7(struct xl_softc *VAR_6, caddr_t VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11 = 0, VAR_12;
 u_int16_t VAR_13 = 0, *VAR_14;
 FUNC_4(0);

 if (FUNC_6(VAR_6))
  return (1);

 if (VAR_6->xl_flags & VAR_3)
  VAR_8 += 0x30;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  if (VAR_6->xl_flags & VAR_2)
   FUNC_1(VAR_6, VAR_4,
       VAR_0 | ((VAR_8 + VAR_12) & 0x003F));
  else
   FUNC_1(VAR_6, VAR_4,
       VAR_1 | ((((VAR_8 + VAR_12) << 2) & 0x7F00) | ((VAR_8 + VAR_12) & 0x003F)));
  VAR_11 = FUNC_6(VAR_6);
  if (VAR_11)
   break;
  VAR_13 = FUNC_0(VAR_6, VAR_5);
  VAR_14 = (u_int16_t *)(VAR_7 + (VAR_12 * 2));
  if (VAR_10)
   *VAR_14 = FUNC_5(VAR_13);
  else
   *VAR_14 = VAR_13;
 }

 return (VAR_11 ? 1 : 0);
}
