
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ukbd_softc {size_t sc_inputs; int* sc_input; size_t sc_inputtail; int * sc_evdev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ukbd_softc *VAR_5, uint32_t VAR_6)
{

 FUNC_2();

 FUNC_0("0x%02x (%d) %s\n", VAR_6, VAR_6,
     (VAR_6 & VAR_2) ? "released" : "pressed");
 if (VAR_5->sc_inputs < VAR_3) {
  VAR_5->sc_input[VAR_5->sc_inputtail] = VAR_6;
  ++(VAR_5->sc_inputs);
  ++(VAR_5->sc_inputtail);
  if (VAR_5->sc_inputtail >= VAR_3) {
   VAR_5->sc_inputtail = 0;
  }
 } else {
  FUNC_0("input buffer is full\n");
 }
}
