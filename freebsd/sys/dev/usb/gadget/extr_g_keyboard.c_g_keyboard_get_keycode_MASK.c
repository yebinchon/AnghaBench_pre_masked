
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct g_keyboard_softc {int sc_pattern_len; int* sc_pattern; } ;



__attribute__((used)) static uint8_t
FUNC_0(struct g_keyboard_softc *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_0->sc_pattern_len;

 if (VAR_3 == 0)
  VAR_1 = 0;
 else
  VAR_1 %= VAR_3;

 if ((VAR_1 >= 0) && (VAR_1 < VAR_0->sc_pattern_len))
  VAR_2 = VAR_0->sc_pattern[VAR_1];
 else
  VAR_2 = 'a';

 if (VAR_2 >= 'a' && VAR_2 <= 'z')
  return (VAR_2 - 'a' + 0x04);
 else
  return (0x04);
}
