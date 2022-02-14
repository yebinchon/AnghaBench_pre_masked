
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct run_softc {scalar_t__ rf_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct run_softc*,int,int*) ;
 int FUNC_1 (struct run_softc*,int,int) ;
 int FUNC_2 (struct run_softc*,int ,int) ;
 int FUNC_3 (struct run_softc*,int ,int*) ;
 int FUNC_4 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct run_softc *VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 uint8_t VAR_6;

 if (VAR_4) {
  if (VAR_3->rf_rev == VAR_2) {
   FUNC_0(VAR_3, 152, &VAR_6);
   FUNC_1(VAR_3, 152, VAR_6 & ~0x80);
  } else {
   FUNC_2(VAR_3, VAR_1, 0);
   FUNC_3(VAR_3, VAR_0, &VAR_5);
   FUNC_4(VAR_3, VAR_0, (VAR_5 & ~0x0808) | 0x08);
  }
 } else {
  if (VAR_3->rf_rev == VAR_2) {
   FUNC_0(VAR_3, 152, &VAR_6);
   FUNC_1(VAR_3, 152, VAR_6 | 0x80);
  } else {
   FUNC_2(VAR_3, VAR_1, 1);
   FUNC_3(VAR_3, VAR_0, &VAR_5);
   FUNC_4(VAR_3, VAR_0, VAR_5 & ~0x0808);
  }
 }
}
