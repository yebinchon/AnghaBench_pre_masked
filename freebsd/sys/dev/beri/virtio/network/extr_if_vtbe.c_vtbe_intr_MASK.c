
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtbe_softc {int vs_curq; int pio_recv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct vtbe_softc*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct vtbe_softc*) ;
 int FUNC_4 (struct vtbe_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vtbe_softc*) ;
 int FUNC_8 (struct vtbe_softc*) ;
 int FUNC_9 (struct vtbe_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_5)
{
 struct vtbe_softc *VAR_6;
 int VAR_7;
 uint32_t VAR_8;

 VAR_6 = VAR_5;

 FUNC_3(VAR_6);

 VAR_8 = FUNC_0(VAR_6->pio_recv);


 FUNC_1(VAR_6->pio_recv, VAR_8, 0);

 VAR_7 = FUNC_6(VAR_8);
 if (VAR_7 & VAR_3) {
  VAR_8 = FUNC_2(VAR_6, VAR_4);
  VAR_6->vs_curq = FUNC_5(VAR_8);
 }

 if (VAR_7 & VAR_2) {
  FUNC_7(VAR_6);
 }

 if (VAR_7 & VAR_0) {

  FUNC_9(VAR_6);
 }

 if (VAR_7 & VAR_1) {
  FUNC_8(VAR_6);
 }

 FUNC_4(VAR_6);
}
