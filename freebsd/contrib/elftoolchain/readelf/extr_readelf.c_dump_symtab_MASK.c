
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct section {scalar_t__ link; char* name; scalar_t__ type; int scn; } ;
struct TYPE_9__ {int * e_ident; int e_machine; } ;
struct readelf {scalar_t__ shnum; int* vs; size_t ver_sz; TYPE_2__* ver; int elf; TYPE_1__ ehdr; struct section* sl; } ;
struct TYPE_12__ {scalar_t__ d_size; } ;
struct TYPE_11__ {int st_name; int st_shndx; int st_other; int st_info; scalar_t__ st_size; scalar_t__ st_value; } ;
struct TYPE_10__ {char* name; scalar_t__ type; } ;
typedef TYPE_3__ GElf_Sym ;
typedef TYPE_4__ Elf_Data ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_4__* FUNC_5 (int ,int *) ;
 char* FUNC_6 (int ,scalar_t__,int ) ;
 TYPE_3__* FUNC_7 (TYPE_4__*,int,TYPE_3__*) ;
 int FUNC_8 (struct section*,int*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char) ;
 char* FUNC_11 (int ) ;
 char* FUNC_12 (int ) ;
 char* FUNC_13 (int ,int ,int ) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (char*,size_t) ;

__attribute__((used)) static void
FUNC_16(struct readelf *VAR_4, int VAR_5)
{
 struct section *VAR_6;
 Elf_Data *VAR_7;
 GElf_Sym VAR_8;
 const char *VAR_9;
 uint32_t VAR_10;
 int VAR_11, VAR_12, VAR_13;
 uint16_t VAR_14;

 VAR_6 = &VAR_4->sl[VAR_5];
 if (VAR_6->link >= VAR_4->shnum)
  return;
 VAR_10 = VAR_6->link;
 (void) FUNC_4();
 if ((VAR_7 = FUNC_5(VAR_6->scn, ((void*)0))) == ((void*)0)) {
  VAR_11 = FUNC_4();
  if (VAR_11 != 0)
   FUNC_15("elf_getdata failed: %s", FUNC_3(VAR_11));
  return;
 }
 if (VAR_7->d_size <= 0)
  return;
 if (!FUNC_8(VAR_6, &VAR_13))
  return;
 FUNC_9("Symbol table (%s)", VAR_6->name);
 FUNC_9(" contains %d entries:\n", VAR_13);
 FUNC_9("%7s%9s%14s%5s%8s%6s%9s%5s\n", "Num:", "Value", "Size", "Type",
     "Bind", "Vis", "Ndx", "Name");

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  if (FUNC_7(VAR_7, VAR_12, &VAR_8) != &VAR_8) {
   FUNC_15("gelf_getsym failed: %s", FUNC_3(-1));
   continue;
  }
  FUNC_9("%6d:", VAR_12);
  FUNC_9(" %16.16jx", (uintmax_t) VAR_8.st_value);
  FUNC_9(" %5ju", (uintmax_t) VAR_8.st_size);
  FUNC_9(" %-7s", FUNC_13(VAR_4->ehdr.e_machine,
      VAR_4->ehdr.e_ident[VAR_0], FUNC_1(VAR_8.st_info)));
  FUNC_9(" %-6s", FUNC_11(FUNC_0(VAR_8.st_info)));
  FUNC_9(" %-8s", FUNC_14(FUNC_2(VAR_8.st_other)));
  FUNC_9(" %3s", FUNC_12(VAR_8.st_shndx));
  if ((VAR_9 = FUNC_6(VAR_4->elf, VAR_10, VAR_8.st_name)) != ((void*)0))
   FUNC_9(" %s", VAR_9);

  if (VAR_6->type == VAR_1 && VAR_4->ver != ((void*)0) &&
      VAR_4->vs != ((void*)0) && VAR_4->vs[VAR_12] > 1) {
   VAR_14 = VAR_4->vs[VAR_12] & VAR_3;
   if (VAR_14 >= VAR_4->ver_sz || VAR_4->ver[VAR_14].name == ((void*)0)) {
    FUNC_15("invalid versym version index %u", VAR_14);
    break;
   }
   if (VAR_4->vs[VAR_12] & VAR_2 || VAR_4->ver[VAR_14].type == 0)
    FUNC_9("@%s (%d)", VAR_4->ver[VAR_14].name, VAR_14);
   else
    FUNC_9("@@%s (%d)", VAR_4->ver[VAR_14].name, VAR_14);
  }
  FUNC_10('\n');
 }

}
