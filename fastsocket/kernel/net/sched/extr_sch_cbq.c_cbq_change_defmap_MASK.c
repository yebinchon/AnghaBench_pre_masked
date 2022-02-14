
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ classid; } ;
struct cbq_class {scalar_t__ defmap; struct cbq_class* split; TYPE_1__ common; struct cbq_class* tparent; } ;


 int FUNC_0 (struct cbq_class*) ;

__attribute__((used)) static void FUNC_1(struct cbq_class *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct cbq_class *VAR_4 = ((void*)0);

 if (VAR_1 == 0) {
  if ((VAR_4 = VAR_0->split) == ((void*)0))
   return;
  VAR_1 = VAR_4->common.classid;
 }

 if (VAR_4 == ((void*)0) || VAR_4->common.classid != VAR_1) {
  for (VAR_4 = VAR_0->tparent; VAR_4; VAR_4 = VAR_4->tparent)
   if (VAR_4->common.classid == VAR_1)
    break;
 }

 if (VAR_4 == ((void*)0))
  return;

 if (VAR_0->split != VAR_4) {
  VAR_0->defmap = 0;
  FUNC_0(VAR_0);
  VAR_0->split = VAR_4;
  VAR_0->defmap = VAR_2&VAR_3;
 } else
  VAR_0->defmap = (VAR_0->defmap&~VAR_3)|(VAR_2&VAR_3);

 FUNC_0(VAR_0);
}
