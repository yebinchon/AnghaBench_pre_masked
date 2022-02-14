
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_14__ {TYPE_6__* csrc_v2; TYPE_5__* cmul_v2; TYPE_4__* csel_v2; TYPE_3__* ot_v2; TYPE_2__* it_v2; TYPE_1__* desc; } ;
struct uaudio_terminal_node {TYPE_7__ u; } ;
struct uaudio_search_result {scalar_t__ recurse_level; int is_input; int* bit_output; int* bit_input; } ;
struct TYPE_13__ {size_t bClockId; } ;
struct TYPE_12__ {size_t bCSourceId; } ;
struct TYPE_11__ {size_t* baCSourceId; size_t bNrInPins; } ;
struct TYPE_10__ {size_t bCSourceId; } ;
struct TYPE_9__ {size_t bCSourceId; } ;
struct TYPE_8__ {int bDescriptorSubtype; } ;


 int FUNC_0 (char*,size_t) ;
 scalar_t__ VAR_0 ;






__attribute__((used)) static void
FUNC_1(struct uaudio_terminal_node *VAR_1,
    const uint8_t *VAR_2, uint8_t VAR_3,
    struct uaudio_search_result *VAR_4)
{
 struct uaudio_terminal_node *VAR_5;
 uint8_t VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;

top:
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {

  VAR_7 = VAR_2[VAR_6];

  if (VAR_4->recurse_level == VAR_0) {
   FUNC_0("avoided going into a circle at id=%d!\n", VAR_7);
   return;
  }

  VAR_4->recurse_level++;

  VAR_5 = (VAR_1 + VAR_7);

  if (VAR_5->u.desc == ((void*)0))
   continue;

  VAR_8 = ((VAR_6 + 1) == VAR_3);

  switch (VAR_5->u.desc->bDescriptorSubtype) {
  case 129:
   VAR_4->is_input = 1;
   if (VAR_8) {
    VAR_2 = &VAR_5->u.it_v2->bCSourceId;
    VAR_3 = 1;
    goto top;
   }
   FUNC_1(VAR_1,
       &VAR_5->u.it_v2->bCSourceId, 1, VAR_4);
   break;

  case 128:
   VAR_4->is_input = 0;
   if (VAR_8) {
    VAR_2 = &VAR_5->u.ot_v2->bCSourceId;
    VAR_3 = 1;
    goto top;
   }
   FUNC_1(VAR_1,
       &VAR_5->u.ot_v2->bCSourceId, 1, VAR_4);
   break;

  case 131:
   if (VAR_8) {
    VAR_2 = VAR_5->u.csel_v2->baCSourceId;
    VAR_3 = VAR_5->u.csel_v2->bNrInPins;
    goto top;
   }
   FUNC_1(VAR_1,
       VAR_5->u.csel_v2->baCSourceId,
       VAR_5->u.csel_v2->bNrInPins, VAR_4);
   break;

  case 132:
   if (VAR_8) {
    VAR_2 = &VAR_5->u.cmul_v2->bCSourceId;
    VAR_3 = 1;
    goto top;
   }
   FUNC_1(VAR_1,
       &VAR_5->u.cmul_v2->bCSourceId,
       1, VAR_4);
   break;

  case 130:

   VAR_9 = VAR_5->u.csrc_v2->bClockId;

   switch (VAR_4->is_input) {
   case 0:
    VAR_4->bit_output[VAR_9 / 8] |= (1 << (VAR_9 % 8));
    break;
   case 1:
    VAR_4->bit_input[VAR_9 / 8] |= (1 << (VAR_9 % 8));
    break;
   default:
    break;
   }
   break;

  default:
   break;
  }
 }
}
