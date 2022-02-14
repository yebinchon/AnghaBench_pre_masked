
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef char* uint32_t ;
struct TYPE_3__ {scalar_t__ p_memsz; scalar_t__ p_filesz; scalar_t__ p_vaddr; scalar_t__ p_type; int p_flags; } ;
typedef TYPE_1__ GElf_Phdr ;
typedef int GElf_Ehdr ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,char*,char const*,char*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_4(Elf *VAR_10, GElf_Ehdr *VAR_11, GElf_Phdr *VAR_12,
    uint32_t VAR_13, const char *VAR_14)
{
 uint64_t VAR_15, VAR_16;
 int VAR_17;
 char VAR_18[VAR_0];

 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
  return;

 VAR_17 = (VAR_12->p_memsz > 0) && (VAR_12->p_filesz > 0) &&
     (VAR_12->p_memsz > VAR_12->p_filesz);

 if (VAR_7 == VAR_4) {
  (void) FUNC_0(VAR_18, VAR_0,
      "%s%d%s", VAR_14, VAR_13, (VAR_17 ? "a" : ""));
  FUNC_1();
  FUNC_2(VAR_18, 0);
  FUNC_3(VAR_12->p_filesz, VAR_6, 1);
  FUNC_3(VAR_12->p_vaddr, VAR_6, 2);
  VAR_9 += VAR_12->p_filesz;
  if (VAR_17) {
   VAR_16 = VAR_12->p_memsz - VAR_12->p_filesz;
   VAR_15 = VAR_12->p_vaddr + VAR_12->p_filesz;
   (void) FUNC_0(VAR_18, VAR_0, "%s%d%s", VAR_14,
       VAR_13, "b");
   VAR_9 += VAR_12->p_memsz - VAR_12->p_filesz;
   FUNC_1();
   FUNC_2(VAR_18, 0);
   FUNC_3(VAR_16, VAR_6, 1);
   FUNC_3(VAR_15, VAR_6, 2);
  }
 } else {
  if (VAR_12->p_type != VAR_3)
   return;
  if ((VAR_12->p_flags & VAR_1) && !(VAR_12->p_flags & VAR_2)) {
   VAR_5 += VAR_12->p_filesz;
   if (VAR_17)
    VAR_5 += VAR_12->p_memsz - VAR_12->p_filesz;
  } else {
   VAR_8 += VAR_12->p_filesz;
   if (VAR_17)
    VAR_8 += VAR_12->p_memsz - VAR_12->p_filesz;
  }
 }
}
