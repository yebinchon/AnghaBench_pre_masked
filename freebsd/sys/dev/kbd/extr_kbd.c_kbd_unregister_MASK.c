
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* kc_func ) (TYPE_2__*,int ,int ) ;int kc_arg; } ;
struct TYPE_9__ {size_t kb_index; TYPE_1__ kb_callback; } ;
typedef TYPE_2__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int ** VAR_3 ;
 TYPE_2__** VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

int
FUNC_5(keyboard_t *VAR_6)
{
 int VAR_7;
 int VAR_8;

 if ((VAR_6->kb_index < 0) || (VAR_6->kb_index >= VAR_5))
  return (VAR_1);
 if (VAR_4[VAR_6->kb_index] != VAR_6)
  return (VAR_1);

 VAR_8 = FUNC_2();
 if (FUNC_1(VAR_6)) {
  VAR_7 = (*VAR_6->kb_callback.kc_func)(VAR_6, VAR_2,
      VAR_6->kb_callback.kc_arg);
  if (VAR_7) {
   FUNC_3(VAR_8);
   return (VAR_7);
  }
  if (FUNC_1(VAR_6)) {
   FUNC_3(VAR_8);
   return (VAR_0);
  }
 }
 FUNC_0(VAR_6);
 VAR_4[VAR_6->kb_index] = ((void*)0);
 VAR_3[VAR_6->kb_index] = ((void*)0);

 FUNC_3(VAR_8);
 return (0);
}
