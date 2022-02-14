
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nge_softc {int dummy; } ;


 int FUNC_0 (struct nge_softc*,int ) ;
 int FUNC_1 (struct nge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct nge_softc*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct nge_softc *VAR_7)
{
 uint32_t VAR_8;
 int VAR_9;

 FUNC_3(VAR_7);

 VAR_8 = FUNC_0(VAR_7, VAR_1);
 if ((VAR_8 & (VAR_5 | VAR_3)) != 0) {
  VAR_8 &= ~(VAR_5 | VAR_3);
  VAR_8 |= VAR_4 | VAR_2;
  FUNC_1(VAR_7, VAR_1, VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
   FUNC_2(1);
   if ((FUNC_0(VAR_7, VAR_1) &
       (VAR_3 | VAR_5)) == 0)
    break;
  }
  if (VAR_9 == VAR_6)
   return (VAR_0);
 }

 return (0);
}
