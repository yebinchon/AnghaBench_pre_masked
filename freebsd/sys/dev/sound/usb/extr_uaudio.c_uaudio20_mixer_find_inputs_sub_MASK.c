
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t uint8_t ;
struct TYPE_11__ {TYPE_9__* eu_v2; TYPE_8__* pu_v2; TYPE_7__* fu_v2; TYPE_6__* ef_v2; TYPE_5__* ru_v2; TYPE_4__* su_v2; TYPE_3__* mu_v2; TYPE_2__* ot_v2; TYPE_1__* desc; } ;
struct uaudio_terminal_node {TYPE_10__ u; } ;
struct uaudio_search_result {scalar_t__ recurse_level; int* bit_input; } ;
struct TYPE_20__ {size_t* baSourceId; size_t bNrInPins; } ;
struct TYPE_19__ {size_t* baSourceId; size_t bNrInPins; } ;
struct TYPE_18__ {size_t bSourceId; } ;
struct TYPE_17__ {size_t bSourceId; } ;
struct TYPE_16__ {size_t bSourceId; } ;
struct TYPE_15__ {size_t* baSourceId; size_t bNrInPins; } ;
struct TYPE_14__ {size_t* baSourceId; size_t bNrInPins; } ;
struct TYPE_13__ {size_t bSourceId; } ;
struct TYPE_12__ {int bDescriptorSubtype; } ;


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
  case 133:
   VAR_4->bit_input[VAR_7 / 8] |= (1 << (VAR_7 % 8));
   break;

  case 131:
   if (VAR_8) {
    VAR_2 = &VAR_5->u.ot_v2->bSourceId;
    VAR_3 = 1;
    goto top;
   }
   FUNC_1(
       VAR_1, &VAR_5->u.ot_v2->bSourceId, 1, VAR_4);
   break;

  case 132:
   if (VAR_8) {
    VAR_2 = VAR_5->u.mu_v2->baSourceId;
    VAR_3 = VAR_5->u.mu_v2->bNrInPins;
    goto top;
   }
   FUNC_1(
       VAR_1, VAR_5->u.mu_v2->baSourceId,
       VAR_5->u.mu_v2->bNrInPins, VAR_4);
   break;

  case 128:
   if (VAR_8) {
    VAR_2 = VAR_5->u.su_v2->baSourceId;
    VAR_3 = VAR_5->u.su_v2->bNrInPins;
    goto top;
   }
   FUNC_1(
       VAR_1, VAR_5->u.su_v2->baSourceId,
       VAR_5->u.su_v2->bNrInPins, VAR_4);
   break;

  case 129:
   if (VAR_8) {
    VAR_2 = &VAR_5->u.ru_v2->bSourceId;
    VAR_3 = 1;
    goto top;
   }
   FUNC_1(
       VAR_1, &VAR_5->u.ru_v2->bSourceId,
       1, VAR_4);
   break;

  case 136:
   if (VAR_8) {
    VAR_2 = &VAR_5->u.ef_v2->bSourceId;
    VAR_3 = 1;
    goto top;
   }
   FUNC_1(
       VAR_1, &VAR_5->u.ef_v2->bSourceId,
       1, VAR_4);
   break;

  case 134:
   if (VAR_8) {
    VAR_2 = &VAR_5->u.fu_v2->bSourceId;
    VAR_3 = 1;
    goto top;
   }
   FUNC_1(
       VAR_1, &VAR_5->u.fu_v2->bSourceId, 1, VAR_4);
   break;

  case 130:
   if (VAR_8) {
    VAR_2 = VAR_5->u.pu_v2->baSourceId;
    VAR_3 = VAR_5->u.pu_v2->bNrInPins;
    goto top;
   }
   FUNC_1(
       VAR_1, VAR_5->u.pu_v2->baSourceId,
       VAR_5->u.pu_v2->bNrInPins, VAR_4);
   break;

  case 135:
   if (VAR_8) {
    VAR_2 = VAR_5->u.eu_v2->baSourceId;
    VAR_3 = VAR_5->u.eu_v2->bNrInPins;
    goto top;
   }
   FUNC_1(
       VAR_1, VAR_5->u.eu_v2->baSourceId,
       VAR_5->u.eu_v2->bNrInPins, VAR_4);
   break;
  default:
   break;
  }
 }
}
