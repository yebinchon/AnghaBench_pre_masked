
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {size_t e_nscn; } ;
struct TYPE_13__ {TYPE_1__ e_elf; } ;
struct TYPE_16__ {int e_class; TYPE_2__ e_u; } ;
struct TYPE_15__ {scalar_t__ d_size; scalar_t__ d_buf; } ;
struct TYPE_14__ {int sh_flags; scalar_t__ sh_type; } ;
typedef TYPE_3__ GElf_Shdr ;
typedef int GElf_Ehdr ;
typedef int Elf_Scn ;
typedef TYPE_4__ Elf_Data ;
typedef TYPE_5__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_1 (unsigned long,unsigned char*,size_t) ;
 int * FUNC_2 (TYPE_5__*,size_t) ;
 TYPE_4__* FUNC_3 (int *,TYPE_4__*) ;
 int * FUNC_4 (TYPE_5__*,int *) ;
 int * FUNC_5 (int *,TYPE_3__*) ;

long
FUNC_6(Elf *VAR_5, int VAR_6)
{
 size_t VAR_7;
 Elf_Scn *VAR_8;
 Elf_Data *VAR_9;
 unsigned long VAR_10;
 GElf_Ehdr VAR_11;
 GElf_Shdr VAR_12;

 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (0L);
 }

 if (VAR_5->e_class != VAR_6) {
  FUNC_0(VAR_1, 0);
  return (0L);
 }

 if (FUNC_4(VAR_5, &VAR_11) == ((void*)0))
  return (0);
 VAR_10 = 0;
 for (VAR_7 = 1; VAR_7 < VAR_5->e_u.e_elf.e_nscn; VAR_7++) {
  if ((VAR_8 = FUNC_2(VAR_5, VAR_7)) == ((void*)0))
   return (0);
  if (FUNC_5(VAR_8, &VAR_12) == ((void*)0))
   return (0);
  if ((VAR_12.sh_flags & VAR_2) == 0 ||
      VAR_12.sh_type == VAR_3 ||
      VAR_12.sh_type == VAR_4)
   continue;

  VAR_9 = ((void*)0);
  while ((VAR_9 = FUNC_3(VAR_8, VAR_9)) != ((void*)0))
   VAR_10 = FUNC_1(VAR_10,
       (unsigned char *) VAR_9->d_buf, (size_t) VAR_9->d_size);
 }




 return (long) (((VAR_10 >> 16) & 0xFFFFUL) + (VAR_10 & 0xFFFFUL));
}
