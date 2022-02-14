
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cu_pointer_size; } ;
struct TYPE_7__ {int rl_rglen; int * rl_rgarray; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Ranges ;
typedef TYPE_1__* Dwarf_Rangelist ;
typedef int Dwarf_Off ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;
typedef TYPE_2__* Dwarf_CU ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int ,TYPE_1__**,int *) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__**) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(Dwarf_Debug VAR_4, Dwarf_CU VAR_5, Dwarf_Off VAR_6,
    Dwarf_Ranges **VAR_7, Dwarf_Signed *VAR_8, Dwarf_Unsigned *VAR_9,
    Dwarf_Error *VAR_10)
{
 Dwarf_Rangelist VAR_11;
 int VAR_12;

 FUNC_2(VAR_5 != ((void*)0));
 if (FUNC_1(VAR_4, VAR_6, &VAR_11) == VAR_1) {
  VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_11, VAR_10);
  if (VAR_12 != VAR_0)
   return (VAR_2);
 }

 *VAR_7 = VAR_11->rl_rgarray;
 *VAR_8 = VAR_11->rl_rglen;

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_5->cu_pointer_size * VAR_11->rl_rglen * 2;

 return (VAR_3);
}
