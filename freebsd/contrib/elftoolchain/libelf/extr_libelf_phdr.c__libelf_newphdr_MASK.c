
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * e_phdr64; int * e_phdr32; } ;
struct TYPE_9__ {size_t e_nphdr; TYPE_1__ e_phdr; } ;
struct TYPE_10__ {TYPE_2__ e_elf; } ;
struct TYPE_11__ {int e_class; scalar_t__ e_version; TYPE_3__ e_u; } ;
typedef int Elf64_Phdr ;
typedef int Elf32_Phdr ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (TYPE_4__*,int,int ) ;
 size_t FUNC_2 (int ,int,scalar_t__) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (size_t,size_t) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (void*) ;

void *
FUNC_7(Elf *VAR_9, int VAR_10, size_t VAR_11)
{
 void *VAR_12, *VAR_13, *VAR_14;
 size_t VAR_15;

 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if ((VAR_12 = FUNC_1(VAR_9, VAR_10, 0)) == ((void*)0)) {
  FUNC_0(VAR_8, 0);
  return (((void*)0));
 }

 FUNC_3(VAR_9->e_class == VAR_10);
 FUNC_3(VAR_10 == VAR_1 || VAR_10 == VAR_2);
 FUNC_3(VAR_9->e_version == VAR_6);

 VAR_15 = FUNC_2(VAR_5, VAR_10, VAR_9->e_version);

 FUNC_3(VAR_15 > 0);

 VAR_13 = ((void*)0);
 if (VAR_11 > 0 && (VAR_13 = FUNC_4(VAR_11, VAR_15)) == ((void*)0)) {
  FUNC_0(VAR_7, 0);
  return (((void*)0));
 }

 if (VAR_10 == VAR_1) {
  if ((VAR_14 = (void *) VAR_9->e_u.e_elf.e_phdr.e_phdr32) != ((void*)0))
   FUNC_6(VAR_14);
  VAR_9->e_u.e_elf.e_phdr.e_phdr32 = (Elf32_Phdr *) VAR_13;
 } else {
  if ((VAR_14 = (void *) VAR_9->e_u.e_elf.e_phdr.e_phdr64) != ((void*)0))
   FUNC_6(VAR_14);
  VAR_9->e_u.e_elf.e_phdr.e_phdr64 = (Elf64_Phdr *) VAR_13;
 }

 VAR_9->e_u.e_elf.e_nphdr = VAR_11;

 FUNC_5(VAR_9, VAR_3, VAR_4);

 return (VAR_13);
}
