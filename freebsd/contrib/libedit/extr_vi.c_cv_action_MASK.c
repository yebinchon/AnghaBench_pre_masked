
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wint_t ;
typedef int el_action_t ;
struct TYPE_11__ {int action; scalar_t__ pos; } ;
struct TYPE_12__ {TYPE_3__ c_vcmd; } ;
struct TYPE_10__ {scalar_t__ cursor; scalar_t__ buffer; scalar_t__ lastchar; } ;
struct TYPE_9__ {int key; int current; } ;
struct TYPE_13__ {TYPE_4__ el_chared; TYPE_2__ el_line; TYPE_1__ el_map; } ;
typedef TYPE_5__ EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,scalar_t__,int) ;

__attribute__((used)) static el_action_t
FUNC_2(EditLine *VAR_6, wint_t VAR_7)
{

 if (VAR_6->el_chared.c_vcmd.action != VAR_4) {

  if (VAR_7 != (wint_t)VAR_6->el_chared.c_vcmd.action)
   return VAR_1;

  if (!(VAR_7 & VAR_5))
   FUNC_0(VAR_6);
  FUNC_1(VAR_6, VAR_6->el_line.buffer,
      (int)(VAR_6->el_line.lastchar - VAR_6->el_line.buffer));
  VAR_6->el_chared.c_vcmd.action = VAR_4;
  VAR_6->el_chared.c_vcmd.pos = 0;
  if (!(VAR_7 & VAR_5)) {
   VAR_6->el_line.lastchar = VAR_6->el_line.buffer;
   VAR_6->el_line.cursor = VAR_6->el_line.buffer;
  }
  if (VAR_7 & VAR_3)
   VAR_6->el_map.current = VAR_6->el_map.key;

  return VAR_2;
 }
 VAR_6->el_chared.c_vcmd.pos = VAR_6->el_line.cursor;
 VAR_6->el_chared.c_vcmd.action = VAR_7;
 return VAR_0;
}
