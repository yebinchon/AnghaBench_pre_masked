
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* bit_input; int* bit_output; } ;
struct TYPE_4__ {TYPE_3__* desc; } ;
struct uaudio_terminal_node {TYPE_2__ usr; TYPE_1__ u; } ;
struct uaudio_search_result {int dummy; } ;
struct TYPE_6__ {scalar_t__ bDescriptorSubtype; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct uaudio_terminal_node *VAR_1, uint8_t VAR_2,
    uint8_t VAR_3, struct uaudio_search_result *VAR_4)
{
 struct uaudio_terminal_node *VAR_5 = (VAR_1 + VAR_2);
 uint8_t VAR_6;

 VAR_6 = VAR_3;
 do {
  if ((VAR_6 != VAR_2) && ((VAR_1 + VAR_6)->u.desc) &&
      ((VAR_1 + VAR_6)->u.desc->bDescriptorSubtype == VAR_0)) {







   if ((VAR_1 + VAR_6)->usr.bit_input[VAR_2 / 8] & (1 << (VAR_2 % 8))) {
    VAR_5->usr.bit_output[VAR_6 / 8] |= (1 << (VAR_6 % 8));
   }
  }
 } while (VAR_6--);
}
