
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mge_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mge_softc*,int ,int) ;
 int FUNC_1 (struct mge_softc*,int) ;
 int FUNC_2 (struct mge_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mge_softc *VAR_5, uint32_t VAR_6,
    uint32_t VAR_7)
{

 if (VAR_6 & VAR_3) {
  FUNC_2(VAR_5);
  FUNC_0(VAR_5, VAR_0,
      ~(VAR_6 & VAR_3));
 }

 VAR_6 &= VAR_4;
 VAR_7 &= VAR_2;

 if (VAR_6 || VAR_7) {
  FUNC_0(VAR_5, VAR_0, ~VAR_6);
  FUNC_0(VAR_5, VAR_1, ~VAR_7);
  FUNC_1(VAR_5, -1);
 }
}
