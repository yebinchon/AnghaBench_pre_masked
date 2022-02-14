
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ atom; scalar_t__ number; } ;
typedef scalar_t__ Dwarf_Word ;
typedef TYPE_1__ Dwarf_Op ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,TYPE_1__**,size_t*) ;
 int FUNC_3 (char*,scalar_t__,size_t) ;

int FUNC_4(Dwarf_Die *VAR_4, Dwarf_Word *VAR_5)
{
 Dwarf_Attribute VAR_6;
 Dwarf_Op *VAR_7;
 size_t VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_4, VAR_0, &VAR_6) == ((void*)0))
  return -VAR_2;

 if (FUNC_1(&VAR_6, VAR_5) != 0) {

  VAR_9 = FUNC_2(&VAR_6, &VAR_7, &VAR_8);
  if (VAR_9 < 0 || VAR_8 == 0)
   return -VAR_2;

  if (VAR_7[0].atom != VAR_1 || VAR_8 != 1) {
   FUNC_3("Unable to get offset:Unexpected OP %x (%zd)\n",
     VAR_7[0].atom, VAR_8);
   return -VAR_3;
  }
  *VAR_5 = (Dwarf_Word)VAR_7[0].number;
 }
 return 0;
}
