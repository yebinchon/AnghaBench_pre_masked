
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_5__ {TYPE_1__* e_parent; scalar_t__ e_rawfile; } ;
struct TYPE_4__ {scalar_t__ e_rawfile; } ;
typedef TYPE_2__ Elf ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

off_t
FUNC_1(Elf *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return ((off_t) -1);
 }

 if (VAR_1->e_parent == ((void*)0))
  return ((off_t) 0);

 return ((off_t) ((uintptr_t) VAR_1->e_rawfile -
     (uintptr_t) VAR_1->e_parent->e_rawfile));
}
