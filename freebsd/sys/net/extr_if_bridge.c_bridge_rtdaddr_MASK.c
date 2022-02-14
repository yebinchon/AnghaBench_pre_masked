
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bridge_softc {int dummy; } ;
struct bridge_rtnode {int dummy; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bridge_softc*,struct bridge_rtnode*) ;
 struct bridge_rtnode* FUNC_2 (struct bridge_softc*,int const*,int ) ;

__attribute__((used)) static int
FUNC_3(struct bridge_softc *VAR_1, const uint8_t *VAR_2, uint16_t VAR_3)
{
 struct bridge_rtnode *VAR_4;
 int VAR_5 = 0;

 FUNC_0(VAR_1);





 while ((VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_4);
  VAR_5 = 1;
 }

 return (VAR_5 ? 0 : VAR_0);
}
