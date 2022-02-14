
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char const* uintmax_t ;
typedef char const* uint16_t ;
struct section {char const* name; scalar_t__ sz; int link; int scn; } ;
struct TYPE_8__ {int e_machine; } ;
struct elfdump {int flags; scalar_t__ ec; TYPE_1__ ehdr; struct section* sl; } ;
typedef int idx ;
struct TYPE_10__ {scalar_t__ d_size; } ;
struct TYPE_9__ {size_t st_other; scalar_t__ st_shndx; int st_info; scalar_t__ st_size; scalar_t__ st_value; int st_name; } ;
typedef TYPE_2__ GElf_Sym ;
typedef TYPE_3__ Elf_Data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 TYPE_3__* FUNC_6 (int ,int *) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_8 (struct section*,int*) ;
 char* FUNC_9 (struct elfdump*,int ,int ) ;
 int FUNC_10 (struct elfdump*,int,char const***,int*) ;
 char const* FUNC_11 (struct elfdump*,scalar_t__) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (int ) ;
 char const* FUNC_14 (int ) ;
 char const** VAR_2 ;
 int FUNC_15 (int ,int ) ;
 char const* FUNC_16 (int ) ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static void
FUNC_18(struct elfdump *VAR_3, int VAR_4)
{
 struct section *VAR_5;
 const char *VAR_6;
 uint16_t *VAR_7;
 char VAR_8[13];
 Elf_Data *VAR_9;
 GElf_Sym VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_5 = &VAR_3->sl[VAR_4];
 if (VAR_3->flags & VAR_1)
  FUNC_2("\nSymbol Table Section:  %s\n", VAR_5->name);
 else
  FUNC_2("\nsymbol table (%s):\n", VAR_5->name);
 (void) FUNC_5();
 if ((VAR_9 = FUNC_6(VAR_5->scn, ((void*)0))) == ((void*)0)) {
  VAR_13 = FUNC_5();
  if (VAR_13 != 0)
   FUNC_17("elf_getdata failed: %s", FUNC_4(VAR_13));
  return;
 }
 VAR_7 = ((void*)0);
 VAR_14 = 0;
 FUNC_3(VAR_9->d_size == VAR_5->sz);
 if (!FUNC_8(VAR_5, &VAR_11))
  return;
 if (VAR_3->flags & VAR_1) {
  if (VAR_3->ec == VAR_0)
   FUNC_2("     index    value       ");
  else
   FUNC_2("     index        value           ");
  FUNC_2("size     type bind oth ver shndx       name\n");
  FUNC_10(VAR_3, VAR_4, &VAR_7, &VAR_14);
  if (VAR_7 != ((void*)0) && VAR_14 != VAR_11) {
   FUNC_17("#symbol not equal to #versym");
   VAR_7 = ((void*)0);
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (FUNC_7(VAR_9, VAR_12, &VAR_10) != &VAR_10) {
   FUNC_17("gelf_getsym failed: %s", FUNC_4(-1));
   continue;
  }
  VAR_6 = FUNC_9(VAR_3, VAR_5->link, VAR_10.st_name);
  if (VAR_3->flags & VAR_1) {
   FUNC_12(VAR_8, sizeof(VAR_8), "[%d]", VAR_12);
   if (VAR_3->ec == VAR_0)
    FUNC_2("%10s  ", VAR_8);
   else
    FUNC_2("%10s      ", VAR_8);
   FUNC_2("0x%8.8jx ", (uintmax_t)VAR_10.st_value);
   if (VAR_3->ec == VAR_0)
    FUNC_2("0x%8.8jx  ", (uintmax_t)VAR_10.st_size);
   else
    FUNC_2("0x%12.12jx  ", (uintmax_t)VAR_10.st_size);
   FUNC_2("%s ", FUNC_16(FUNC_1(VAR_10.st_info)));
   FUNC_2("%s  ", FUNC_14(FUNC_0(VAR_10.st_info)));
   FUNC_2("%c  ", VAR_2[VAR_10.st_other]);
   FUNC_2("%3u ", (VAR_7 == ((void*)0) ? 0 : VAR_7[VAR_12]));
   FUNC_2("%-11.11s ", FUNC_11(VAR_3, VAR_10.st_shndx));
   FUNC_2("%s\n", VAR_6);
  } else {
   FUNC_2("\nentry: %d\n", VAR_12);
   FUNC_2("\tst_name: %s\n", VAR_6);
   FUNC_2("\tst_value: %#jx\n", (uintmax_t)VAR_10.st_value);
   FUNC_2("\tst_size: %ju\n", (uintmax_t)VAR_10.st_size);
   FUNC_2("\tst_info: %s %s\n",
       FUNC_15(VAR_3->ehdr.e_machine,
       FUNC_1(VAR_10.st_info)),
       FUNC_13(FUNC_0(VAR_10.st_info)));
   FUNC_2("\tst_shndx: %ju\n", (uintmax_t)VAR_10.st_shndx);
  }
 }
}
