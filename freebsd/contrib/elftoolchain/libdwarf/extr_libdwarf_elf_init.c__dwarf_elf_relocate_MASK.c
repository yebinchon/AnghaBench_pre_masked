
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* ed_data; int * ed_alloc; } ;
struct TYPE_10__ {int * e_ident; } ;
struct TYPE_9__ {scalar_t__ sh_type; scalar_t__ sh_size; size_t sh_info; size_t sh_link; } ;
struct TYPE_8__ {int d_size; int d_buf; } ;
typedef TYPE_2__ GElf_Shdr ;
typedef TYPE_3__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef int Elf_Data ;
typedef int Elf ;
typedef int Dwarf_Error ;
typedef TYPE_4__ Dwarf_Elf_Data ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (int ,int *,int ,int *,int *,int ) ;
 int FUNC_4 (int ,int *,int ,int *,int *,int ) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,TYPE_3__*) ;
 int * FUNC_9 (int *,TYPE_2__*) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_12(Dwarf_Debug VAR_6, Elf *VAR_7, Dwarf_Elf_Data *VAR_8, size_t VAR_9,
    size_t VAR_10, Elf_Data *VAR_11, Dwarf_Error *VAR_12)
{
 GElf_Ehdr VAR_13;
 GElf_Shdr VAR_14;
 Elf_Scn *VAR_15;
 Elf_Data *VAR_16;
 int VAR_17;

 if (VAR_10 == 0 || VAR_11 == ((void*)0))
  return (VAR_2);

 if (FUNC_8(VAR_7, &VAR_13) == ((void*)0)) {
  FUNC_0(VAR_6, VAR_12);
  return (VAR_0);
 }

 VAR_15 = ((void*)0);
 (void) FUNC_5();
 while ((VAR_15 = FUNC_7(VAR_7, VAR_15)) != ((void*)0)) {
  if (FUNC_9(VAR_15, &VAR_14) == ((void*)0)) {
   FUNC_0(VAR_6, VAR_12);
   return (VAR_0);
  }

  if ((VAR_14.sh_type != VAR_4 && VAR_14.sh_type != VAR_5) ||
       VAR_14.sh_size == 0)
   continue;

  if (VAR_14.sh_info == VAR_9 && VAR_14.sh_link == VAR_10) {
   if ((VAR_16 = FUNC_6(VAR_15, ((void*)0))) == ((void*)0)) {
    VAR_17 = FUNC_5();
    if (VAR_17 != 0) {
     FUNC_2(((void*)0), VAR_12,
         VAR_0, VAR_17);
     return (VAR_0);
    } else
     return (VAR_2);
   }

   VAR_8->ed_alloc = FUNC_10(VAR_8->ed_data->d_size);
   if (VAR_8->ed_alloc == ((void*)0)) {
    FUNC_1(VAR_6, VAR_12, VAR_1);
    return (VAR_1);
   }
   FUNC_11(VAR_8->ed_alloc, VAR_8->ed_data->d_buf,
       VAR_8->ed_data->d_size);
   if (VAR_14.sh_type == VAR_4)
    FUNC_3(VAR_6,
        VAR_8->ed_alloc, VAR_8->ed_data->d_size,
        VAR_16, VAR_11, VAR_13.e_ident[VAR_3]);
   else
    FUNC_4(VAR_6,
        VAR_8->ed_alloc, VAR_8->ed_data->d_size,
        VAR_16, VAR_11, VAR_13.e_ident[VAR_3]);

   return (VAR_2);
  }
 }
 VAR_17 = FUNC_5();
 if (VAR_17 != 0) {
  FUNC_0(VAR_6, VAR_12);
  return (VAR_0);
 }

 return (VAR_2);
}
