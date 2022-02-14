
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vr_softc {int dummy; } ;


 int FUNC_0 (struct vr_softc*,int ) ;
 int FUNC_1 (struct vr_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct vr_softc *VAR_4)
{
 int VAR_5;
 uint8_t VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1);
 if ((VAR_6 & VAR_2) != 0) {
  VAR_6 &= ~VAR_2;
  FUNC_1(VAR_4, VAR_1, VAR_6);
  for (VAR_5 = VAR_3; VAR_5 > 0; VAR_5--) {
   FUNC_2(5);
   VAR_6 = FUNC_0(VAR_4, VAR_1);
   if ((VAR_6 & VAR_2) == 0)
    break;
  }
  if (VAR_5 == 0)
   return (VAR_0);
 }
 return (0);
}
