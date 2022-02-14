
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_midi_softc {int is_emu10k1; } ;
typedef int device_t ;


 uintptr_t FUNC_0 (int ,int ,int ,uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_1 (struct emu_midi_softc*,int) ;
 int FUNC_2 (int ) ;
 struct emu_midi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct emu_midi_softc *VAR_4;
 uintptr_t VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_0(FUNC_2(VAR_3), VAR_3, 0, &VAR_5);
 if (VAR_5 != VAR_2)
  return (VAR_1);

 VAR_4 = FUNC_3(VAR_3);
 FUNC_1(VAR_4, sizeof(*VAR_4));
 VAR_6 = FUNC_0(FUNC_2(VAR_3), VAR_3, VAR_0, &VAR_7);
 VAR_4->is_emu10k1 = VAR_7 ? 1 : 0;

 FUNC_4(VAR_3, "EMU10Kx MIDI Interface");
 return (0);
}
