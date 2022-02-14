
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct section {char const* name; size_t link; int info; int addr; int flags; int type; int align; int entsize; int sz; int off; int * scn; } ;
struct readelf {size_t shnum; struct section* sl; int elf; } ;
struct TYPE_3__ {size_t sh_link; int sh_info; int sh_addr; int sh_flags; int sh_type; int sh_addralign; int sh_entsize; int sh_size; int sh_offset; int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Scn ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct section* FUNC_0 (size_t,int) ;
 char const* FUNC_1 (int) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,size_t*) ;
 int FUNC_5 (int ,size_t*) ;
 size_t FUNC_6 (int *) ;
 int * FUNC_7 (int ,int *) ;
 char* FUNC_8 (int ,size_t,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct section*) ;
 int * FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void
FUNC_13(struct readelf *VAR_2)
{
 struct section *VAR_3;
 const char *VAR_4;
 Elf_Scn *VAR_5;
 GElf_Shdr VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9;


 if (!FUNC_4(VAR_2->elf, &VAR_2->shnum)) {
  FUNC_12("elf_getshnum failed: %s", FUNC_1(-1));
  return;
 }
 if (VAR_2->sl != ((void*)0))
  FUNC_10(VAR_2->sl);
 if ((VAR_2->sl = FUNC_0(VAR_2->shnum, sizeof(*VAR_2->sl))) == ((void*)0))
  FUNC_9(VAR_0, "calloc failed");


 if (!FUNC_5(VAR_2->elf, &VAR_7)) {
  FUNC_12("elf_getshstrndx failed: %s", FUNC_1(-1));
  return;
 }

 if ((VAR_5 = FUNC_3(VAR_2->elf, 0)) == ((void*)0))
  return;

 (void) FUNC_2();
 do {
  if (FUNC_11(VAR_5, &VAR_6) == ((void*)0)) {
   FUNC_12("gelf_getshdr failed: %s", FUNC_1(-1));
   (void) FUNC_2();
   continue;
  }
  if ((VAR_4 = FUNC_8(VAR_2->elf, VAR_7, VAR_6.sh_name)) == ((void*)0)) {
   (void) FUNC_2();
   VAR_4 = "<no-name>";
  }
  if ((VAR_8 = FUNC_6(VAR_5)) == VAR_1) {
   if ((VAR_9 = FUNC_2()) != 0) {
    FUNC_12("elf_ndxscn failed: %s",
        FUNC_1(VAR_9));
    continue;
   }
  }
  if (VAR_8 >= VAR_2->shnum) {
   FUNC_12("section index of '%s' out of range", VAR_4);
   continue;
  }
  if (VAR_6.sh_link >= VAR_2->shnum)
   FUNC_12("section link %llu of '%s' out of range",
       (unsigned long long)VAR_6.sh_link, VAR_4);
  VAR_3 = &VAR_2->sl[VAR_8];
  VAR_3->name = VAR_4;
  VAR_3->scn = VAR_5;
  VAR_3->off = VAR_6.sh_offset;
  VAR_3->sz = VAR_6.sh_size;
  VAR_3->entsize = VAR_6.sh_entsize;
  VAR_3->align = VAR_6.sh_addralign;
  VAR_3->type = VAR_6.sh_type;
  VAR_3->flags = VAR_6.sh_flags;
  VAR_3->addr = VAR_6.sh_addr;
  VAR_3->link = VAR_6.sh_link;
  VAR_3->info = VAR_6.sh_info;
 } while ((VAR_5 = FUNC_7(VAR_2->elf, VAR_5)) != ((void*)0));
 VAR_9 = FUNC_2();
 if (VAR_9 != 0)
  FUNC_12("elf_nextscn failed: %s", FUNC_1(VAR_9));
}
