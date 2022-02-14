
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct section {scalar_t__ type; size_t off; int scn; } ;
struct TYPE_7__ {scalar_t__ e_type; } ;
struct readelf {size_t shnum; struct section* sl; int elf; TYPE_1__ ehdr; } ;
struct TYPE_9__ {char const* d_buf; size_t d_size; } ;
struct TYPE_8__ {scalar_t__ p_type; size_t p_offset; size_t p_filesz; } ;
typedef TYPE_2__ GElf_Phdr ;
typedef TYPE_3__ Elf_Data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct readelf*,char const*,size_t,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,size_t*) ;
 char* FUNC_5 (int ,size_t*) ;
 TYPE_2__* FUNC_6 (int ,int,TYPE_2__*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(struct readelf *VAR_3)
{
 struct section *VAR_4;
 const char *VAR_5;
 GElf_Phdr VAR_6;
 Elf_Data *VAR_7;
 size_t VAR_8, VAR_9;
 int VAR_10, VAR_11;

 if (VAR_3->ehdr.e_type == VAR_0) {




  if (FUNC_4(VAR_3->elf, &VAR_9) == 0) {
   FUNC_7("elf_getphnum failed: %s", FUNC_1(-1));
   return;
  }
  if (VAR_9 == 0)
   return;
  if ((VAR_5 = FUNC_5(VAR_3->elf, &VAR_8)) == ((void*)0)) {
   FUNC_7("elf_rawfile failed: %s", FUNC_1(-1));
   return;
  }
  for (VAR_10 = 0; (size_t) VAR_10 < VAR_9; VAR_10++) {
   if (FUNC_6(VAR_3->elf, VAR_10, &VAR_6) != &VAR_6) {
    FUNC_7("gelf_getphdr failed: %s",
        FUNC_1(-1));
    continue;
   }
   if (VAR_6.p_type == VAR_1) {
    if (VAR_6.p_offset >= VAR_8 ||
        VAR_6.p_filesz > VAR_8 - VAR_6.p_offset) {
     FUNC_7("invalid PHDR offset");
     continue;
    }
    FUNC_0(VAR_3, VAR_5 + VAR_6.p_offset,
        VAR_6.p_filesz, VAR_6.p_offset);
   }
  }

 } else {




  for (VAR_10 = 0; (size_t) VAR_10 < VAR_3->shnum; VAR_10++) {
   VAR_4 = &VAR_3->sl[VAR_10];
   if (VAR_4->type == VAR_2) {
    (void) FUNC_2();
    if ((VAR_7 = FUNC_3(VAR_4->scn, ((void*)0))) == ((void*)0)) {
     VAR_11 = FUNC_2();
     if (VAR_11 != 0)
      FUNC_7("elf_getdata failed: %s",
          FUNC_1(VAR_11));
     continue;
    }
    FUNC_0(VAR_3, VAR_7->d_buf, VAR_7->d_size,
        VAR_4->off);
   }
  }
 }
}
