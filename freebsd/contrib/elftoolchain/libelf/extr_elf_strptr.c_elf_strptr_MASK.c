
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_11__ {scalar_t__ e_kind; int e_flags; } ;
struct TYPE_10__ {size_t d_size; scalar_t__ d_type; size_t d_off; size_t d_align; int * d_buf; } ;
struct TYPE_9__ {scalar_t__ sh_type; size_t sh_size; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 (TYPE_3__*,size_t) ;
 int * FUNC_3 (int *,TYPE_1__*) ;
 size_t FUNC_4 (size_t,size_t) ;

char *
FUNC_5(Elf *VAR_6, size_t VAR_7, size_t VAR_8)
{
 Elf_Scn *VAR_9;
 Elf_Data *VAR_10;
 GElf_Shdr VAR_11;
 uint64_t VAR_12, VAR_13;

 if (VAR_6 == ((void*)0) || VAR_6->e_kind != VAR_3) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if ((VAR_9 = FUNC_2(VAR_6, VAR_7)) == ((void*)0) ||
     FUNC_3(VAR_9, &VAR_11) == ((void*)0))
  return (((void*)0));

 if (VAR_11.sh_type != VAR_5 ||
     VAR_8 >= VAR_11.sh_size) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 VAR_10 = ((void*)0);
 if (VAR_6->e_flags & VAR_2) {







  while ((VAR_10 = FUNC_1(VAR_9, VAR_10)) != ((void*)0)) {

   if (VAR_10->d_buf == 0 || VAR_10->d_size == 0)
    continue;

   if (VAR_10->d_type != VAR_4) {
    FUNC_0(VAR_1, 0);
    return (((void*)0));
   }

   if (VAR_8 >= VAR_10->d_off &&
       VAR_8 < VAR_10->d_off + VAR_10->d_size)
    return ((char *) VAR_10->d_buf + VAR_8 - VAR_10->d_off);
  }
 } else {






  VAR_13 = (uint64_t) 0;
  while ((VAR_10 = FUNC_1(VAR_9, VAR_10)) != ((void*)0) && VAR_13 <= VAR_8) {

   if (VAR_10->d_buf == ((void*)0) || VAR_10->d_size == 0)
    continue;

   if (VAR_10->d_type != VAR_4) {
    FUNC_0(VAR_1, 0);
    return (((void*)0));
   }

   if ((VAR_12 = VAR_10->d_align) > 1) {
    if ((VAR_12 & (VAR_12 - 1)) != 0) {
     FUNC_0(VAR_1, 0);
     return (((void*)0));
    }
    VAR_13 = FUNC_4(VAR_13, VAR_12);
   }

   if (VAR_8 < VAR_13) {

    FUNC_0(VAR_0, 0);
    return (((void*)0));
   }

   if (VAR_8 < VAR_13 + VAR_10->d_size) {
    if (VAR_10->d_buf != ((void*)0))
     return ((char *) VAR_10->d_buf +
         VAR_8 - VAR_13);
    FUNC_0(VAR_1, 0);
    return (((void*)0));
   }

   VAR_13 += VAR_10->d_size;
  }
 }

 FUNC_0(VAR_0, 0);
 return (((void*)0));
}
