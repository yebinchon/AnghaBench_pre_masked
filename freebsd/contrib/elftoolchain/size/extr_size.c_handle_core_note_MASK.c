
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int pid_t ;
typedef int int32_t ;
struct TYPE_15__ {int n_type; int n_descsz; int n_namesz; } ;
struct TYPE_14__ {int * e_ident; } ;
struct TYPE_13__ {size_t p_offset; size_t p_filesz; } ;
typedef TYPE_1__ GElf_Phdr ;
typedef size_t GElf_Off ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf32_Word ;
typedef TYPE_3__ Elf32_Nhdr ;
typedef int Elf ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int,int) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int,int,size_t) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int VAR_6 ;
 char* FUNC_6 (int *,size_t*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*,int,char*,char*,int) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*) ;
 int VAR_9 ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int,int ,int) ;
 int VAR_10 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,TYPE_2__*,int*,int*,int ,int) ;

__attribute__((used)) static void
FUNC_17(Elf *VAR_11, GElf_Ehdr *VAR_12, GElf_Phdr *VAR_13,
    char **VAR_14)
{
 size_t VAR_15, VAR_16;
 uint64_t VAR_17;
 GElf_Off VAR_18;
 static pid_t VAR_19;
 uintptr_t VAR_20;
 Elf32_Nhdr *VAR_21, VAR_22;
 static int VAR_23 = 0, VAR_24 = 0 ;
 char VAR_25[VAR_0], *VAR_26, *VAR_27;

  if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
  return;

 VAR_26 = FUNC_6(VAR_11, &VAR_15);
 VAR_18 = VAR_13->p_offset;
 if (VAR_18 >= VAR_15 || VAR_13->p_filesz > VAR_15 - VAR_18) {
  FUNC_15("invalid PHDR offset");
  return;
 }
 VAR_16 = VAR_13->p_offset + VAR_13->p_filesz;

 while (VAR_26 != ((void*)0) && VAR_18 + sizeof(Elf32_Nhdr) < VAR_16) {
  VAR_21 = (Elf32_Nhdr *)(uintptr_t)((char*)VAR_26 + VAR_18);
  FUNC_7(&VAR_22, 0, sizeof(Elf32_Nhdr));
  if (!FUNC_16(VAR_11, VAR_12, &VAR_21->n_type, &VAR_22.n_type,
   VAR_5, sizeof(Elf32_Word)) ||
      !FUNC_16(VAR_11, VAR_12, &VAR_21->n_descsz, &VAR_22.n_descsz,
   VAR_5, sizeof(Elf32_Word)) ||
      !FUNC_16(VAR_11, VAR_12, &VAR_21->n_namesz, &VAR_22.n_namesz,
   VAR_5, sizeof(Elf32_Word)))
   break;

  if (VAR_18 + sizeof(Elf32_Nhdr) +
      FUNC_0(VAR_22.n_namesz, 4) +
      FUNC_0(VAR_22.n_descsz, 4) >= VAR_16) {
   FUNC_15("invalid note header");
   return;
  }

  VAR_27 = (char *)((char *)VAR_21 + sizeof(Elf32_Nhdr));
  switch (VAR_22.n_type) {
  case 131: {
   VAR_17 = 0;
   if (VAR_12->e_ident[VAR_2] == VAR_4 &&
       VAR_22.n_namesz == 0x8 &&
       !FUNC_9(VAR_27,"FreeBSD")) {
    if (VAR_12->e_ident[VAR_1] == VAR_3) {
     VAR_17 = (uint64_t)*((uint32_t *)
         (uintptr_t)(VAR_27 +
      FUNC_0((int32_t)
      VAR_22.n_namesz, 4) + 8));
     VAR_20 = (uintptr_t)FUNC_2(VAR_21,
         VAR_22.n_namesz,0);
     if (*((int *)VAR_20) == 1)
      VAR_19 = FUNC_4(VAR_21,
          VAR_22.n_namesz, 24);
    } else {
     VAR_17 = *((uint64_t *)(uintptr_t)
         (VAR_27 + FUNC_0((int32_t)
      VAR_22.n_namesz, 8) + 16));
     VAR_20 = (uintptr_t)FUNC_3(VAR_21,
         VAR_22.n_namesz,0);
     if (*((int *)VAR_20) == 1)
      VAR_19 = FUNC_5(VAR_21,
          VAR_22.n_namesz, 40);
    }
    FUNC_16(VAR_11, VAR_12, &VAR_17, &VAR_17,
        VAR_5, sizeof(uint64_t));
    FUNC_16(VAR_11, VAR_12, &VAR_19, &VAR_19, VAR_5,
        sizeof(pid_t));
   }

   if (VAR_17 != 0 && VAR_9 == VAR_6) {
    (void) FUNC_8(VAR_25, VAR_0, "%s/%d",
        ".reg", VAR_19);
    FUNC_12();
    FUNC_13(VAR_25, 0);
    FUNC_14(VAR_17, VAR_7, 1);
    FUNC_14(0, VAR_7, 2);
    if (!VAR_23) {
     FUNC_12();
     FUNC_13(".reg", 0);
     FUNC_14(VAR_17, VAR_7, 1);
     FUNC_14(0, VAR_7, 2);
     VAR_23 = 1;
     VAR_10 += VAR_17;
    }
    VAR_10 += VAR_17;
   }
  }
  break;
  case 134:
   if (VAR_9 == VAR_6) {
    (void) FUNC_8(VAR_25, VAR_0,
        "%s/%d", ".reg2", VAR_19);
    FUNC_12();
    FUNC_13(VAR_25, 0);
    FUNC_14(VAR_22.n_descsz, VAR_7, 1);
    FUNC_14(0, VAR_7, 2);
    if (!VAR_24) {
     FUNC_12();
     FUNC_13(".reg2", 0);
     FUNC_14(VAR_22.n_descsz, VAR_7,
         1);
     FUNC_14(0, VAR_7, 2);
     VAR_24 = 1;
     VAR_10 += VAR_22.n_descsz;
    }
    VAR_10 += VAR_22.n_descsz;
   }
   break;
  case 132: {

   if (VAR_22.n_descsz == 0x78 &&
    !FUNC_9(VAR_27,"FreeBSD")) {
    *VAR_14 = FUNC_10(FUNC_3(VAR_21,
        VAR_22.n_namesz, 33));

   } else if (VAR_22.n_descsz == 0x6c &&
    !FUNC_9(VAR_27,"FreeBSD")) {
    *VAR_14 = FUNC_10(FUNC_2(VAR_21,
        VAR_22.n_namesz, 25));
   }

   if (*VAR_14 != ((void*)0)) {
    char *VAR_28;

    VAR_28 = *VAR_14 + FUNC_11(*VAR_14);
    while (VAR_28 > *VAR_14) {
     if (*(VAR_28-1) != 0x20) break;
     VAR_28--;
    }
    *VAR_28 = 0;
   }
   break;
  }




  default:
   break;
  }
  FUNC_1(VAR_12, VAR_22.n_descsz, VAR_22.n_namesz, VAR_18);
 }
}
