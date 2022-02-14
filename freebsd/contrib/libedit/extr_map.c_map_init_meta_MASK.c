
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ el_action_t ;
struct TYPE_6__ {scalar_t__ type; scalar_t__* alt; scalar_t__* key; } ;
struct TYPE_7__ {TYPE_1__ el_map; } ;
typedef TYPE_2__ EditLine ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_2(EditLine *VAR_3)
{
 wchar_t VAR_4[3];
 int VAR_5;
 el_action_t *VAR_6 = VAR_3->el_map.key;
 el_action_t *VAR_7 = VAR_3->el_map.alt;

 for (VAR_5 = 0; VAR_5 <= 0377 && VAR_6[VAR_5] != VAR_0; VAR_5++)
  continue;

 if (VAR_5 > 0377) {
  for (VAR_5 = 0; VAR_5 <= 0377 && VAR_7[VAR_5] != VAR_0; VAR_5++)
   continue;
  if (VAR_5 > 0377) {
   VAR_5 = 033;
   if (VAR_3->el_map.type == VAR_1)
    VAR_6 = VAR_7;
  } else
   VAR_6 = VAR_7;
 }
 VAR_4[0] = (wchar_t)VAR_5;
 VAR_4[2] = 0;
 for (VAR_5 = 0200; VAR_5 <= 0377; VAR_5++)
  switch (VAR_6[VAR_5]) {
  case 130:
  case 128:
  case 129:
   break;
  default:
   VAR_4[1] = VAR_5 & 0177;
   FUNC_0(VAR_3, VAR_4, FUNC_1(VAR_3, (int) VAR_6[VAR_5]), VAR_2);
   break;
  }
 VAR_6[(int) VAR_4[0]] = 129;
}
