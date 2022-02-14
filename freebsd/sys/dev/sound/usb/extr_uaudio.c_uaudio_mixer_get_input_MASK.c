
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int id_max; int* bit_input; } ;
typedef struct uaudio_terminal_node {TYPE_1__ usr; struct uaudio_terminal_node const* root; } const uaudio_terminal_node ;



__attribute__((used)) static const struct uaudio_terminal_node *
FUNC_0(const struct uaudio_terminal_node *VAR_0, uint8_t VAR_1)
{
 struct uaudio_terminal_node *VAR_2 = VAR_0->root;
 uint8_t VAR_3;

 VAR_3 = VAR_0->usr.id_max;
 do {
  if (VAR_0->usr.bit_input[VAR_3 / 8] & (1 << (VAR_3 % 8))) {
   if (!VAR_1--)
    return (VAR_2 + VAR_3);
  }
 } while (VAR_3--);

 return (((void*)0));
}
