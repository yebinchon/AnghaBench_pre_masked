
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int muxport; int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct psm_softc*,int) ;
 int FUNC_6 (char*,int,int,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_8(struct psm_softc *VAR_5, enum probearg VAR_6)
{
 KBDC VAR_7 = VAR_5->kbdc;
 int VAR_8, VAR_9;
 int VAR_10 = VAR_0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 == -1)
  return (VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  FUNC_0(3, (VAR_2, "aux_mux: ping port %d\n", VAR_8));
  FUNC_7(VAR_7, VAR_8);
  if (FUNC_3(VAR_7) && FUNC_1(VAR_7)) {
   VAR_11++;
   VAR_12 |= 1 << VAR_8;
  }
 }

 if (VAR_4 >= 2)
  FUNC_6("Active Multiplexing PS/2 controller v%d.%d with %d "
      "active port(s)\n", VAR_9 >> 4 & 0x0f, VAR_9 & 0x0f,
      VAR_11);


 if (VAR_11 >= 2) {
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   if ((VAR_12 & 1 << VAR_8) == 0)
    continue;
   FUNC_0(3, (VAR_2, "aux_mux: probe port %d\n", VAR_8));
   FUNC_7(VAR_7, VAR_8);
   VAR_10 = FUNC_5(VAR_5, VAR_6);
   if (VAR_10) {
    if (VAR_6 == VAR_3)
     VAR_5->muxport = VAR_8;
    break;
   }
  }
 }


 FUNC_2(VAR_7);

 return (VAR_10);
}
