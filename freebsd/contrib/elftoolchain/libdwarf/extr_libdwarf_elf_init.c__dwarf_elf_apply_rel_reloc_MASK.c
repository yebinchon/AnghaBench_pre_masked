
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ r_offset; int r_info; } ;
struct TYPE_5__ {scalar_t__ st_value; } ;
typedef TYPE_1__ GElf_Sym ;
typedef TYPE_2__ GElf_Rel ;
typedef int Elf_Data ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Debug ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (void*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (void*,scalar_t__*,int) ;
 int FUNC_5 (void*,scalar_t__*,scalar_t__,int) ;
 int FUNC_6 (void*,scalar_t__*,scalar_t__,int) ;
 int * FUNC_7 (int *,int ,TYPE_2__*) ;
 int * FUNC_8 (int *,size_t,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(Dwarf_Debug VAR_1, void *VAR_2, uint64_t VAR_3,
    Elf_Data *VAR_4, Elf_Data *VAR_5, int VAR_6)
{
 Dwarf_Unsigned VAR_7;
 GElf_Rel VAR_8;
 GElf_Sym VAR_9;
 size_t VAR_10;
 uint64_t VAR_11;
 uint64_t VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = 0;
 while (FUNC_7(VAR_4, VAR_14++, &VAR_8) != ((void*)0)) {
  VAR_10 = FUNC_0(VAR_8.r_info);
  VAR_7 = FUNC_1(VAR_8.r_info);

  if (FUNC_8(VAR_5, VAR_10, &VAR_9) == ((void*)0))
   continue;

  VAR_13 = FUNC_2(VAR_1, VAR_7);
  if (VAR_13 == 0)
   continue;

  VAR_11 = VAR_8.r_offset;
  if (VAR_11 + VAR_13 >= VAR_3)
   continue;

  if (VAR_6 == VAR_0)
   VAR_12 = FUNC_4(VAR_2, &VAR_11, VAR_13);
  else
   VAR_12 = FUNC_3(VAR_2, &VAR_11, VAR_13);

  VAR_11 = VAR_8.r_offset;
  if (VAR_6 == VAR_0)
   FUNC_6(VAR_2, &VAR_11, VAR_9.st_value + VAR_12,
       VAR_13);
  else
   FUNC_5(VAR_2, &VAR_11, VAR_9.st_value + VAR_12,
       VAR_13);
 }
}
