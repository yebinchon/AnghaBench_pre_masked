
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* die_left; struct TYPE_7__* die_right; struct TYPE_7__* die_parent; struct TYPE_7__* die_child; } ;
typedef TYPE_1__* Dwarf_P_Die ;


 int FUNC_0 (int ) ;

void
FUNC_1(Dwarf_P_Die VAR_0, Dwarf_P_Die VAR_1, Dwarf_P_Die VAR_2,
    Dwarf_P_Die VAR_3, Dwarf_P_Die VAR_4)
{
 Dwarf_P_Die VAR_5;

 FUNC_0(VAR_0 != ((void*)0));

 if (VAR_1) {


  if (VAR_0->die_parent) {
   if (VAR_0->die_parent != VAR_1) {
    if (VAR_0->die_parent->die_child == VAR_0)
     VAR_0->die_parent->die_child = ((void*)0);
    VAR_0->die_parent = ((void*)0);
                     }
  }


  VAR_5 = VAR_1->die_child;
  if (VAR_5) {
   while (VAR_5->die_right != ((void*)0))
    VAR_5 = VAR_5->die_right;
  }


  VAR_0->die_parent = VAR_1;






  if (VAR_5) {
   FUNC_0(VAR_5->die_right == ((void*)0));
   VAR_5->die_right = VAR_0;
   VAR_0->die_left = VAR_5;
  } else
   VAR_1->die_child = VAR_0;
 }

 if (VAR_2) {


  if (VAR_0->die_child) {
   if (VAR_0->die_child != VAR_2) {
    VAR_0->die_child->die_parent = ((void*)0);
    VAR_0->die_child = ((void*)0);
   }
  }


  VAR_0->die_child = VAR_2;
  VAR_2->die_parent = VAR_0;
 }

 if (VAR_3) {


  if (VAR_0->die_left) {
   if (VAR_0->die_left != VAR_3) {
    VAR_0->die_left->die_right = ((void*)0);
    VAR_0->die_left = ((void*)0);
   }
  }


  VAR_0->die_left = VAR_3;
  VAR_3->die_right = VAR_0;
 }

 if (VAR_4) {


  if (VAR_0->die_right) {
   if (VAR_0->die_right != VAR_4) {
    VAR_0->die_right->die_left = ((void*)0);
    VAR_0->die_right = ((void*)0);
   }
  }


  VAR_0->die_right = VAR_4;
  VAR_4->die_left = VAR_0;
 }
}
