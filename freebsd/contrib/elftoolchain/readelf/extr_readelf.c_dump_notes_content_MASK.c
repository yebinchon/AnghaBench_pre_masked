
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_3__ {int e_type; } ;
struct readelf {TYPE_1__ ehdr; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {int n_namesz; int n_descsz; int n_type; } ;
typedef TYPE_2__ Elf_Note ;


 int FUNC_0 (struct readelf*,char const*,int ,char const*,int) ;
 char* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct readelf *VAR_0, const char *VAR_1, size_t VAR_2, off_t VAR_3)
{
 Elf_Note *VAR_4;
 const char *VAR_5, *VAR_6;

 FUNC_2("\nNotes at offset %#010jx with length %#010jx:\n",
     (uintmax_t) VAR_3, (uintmax_t) VAR_2);
 FUNC_2("  %-13s %-15s %s\n", "Owner", "Data size", "Description");
 VAR_5 = VAR_1 + VAR_2;
 while (VAR_1 < VAR_5) {
  if (VAR_1 + sizeof(*VAR_4) > VAR_5) {
   FUNC_6("invalid note header");
   return;
  }
  VAR_4 = (Elf_Note *)(uintptr_t) VAR_1;
  VAR_1 += sizeof(Elf_Note);
  VAR_6 = VAR_1;
  VAR_1 += FUNC_3(VAR_4->n_namesz, 4);
  if (VAR_4->n_namesz == 0)
   VAR_6 = "";
  else if (VAR_4->n_namesz == 4 && FUNC_4(VAR_6, "CORE", 4) == 0)
   VAR_6 = "CORE";
  else if (FUNC_5(VAR_6, VAR_4->n_namesz) >= VAR_4->n_namesz)
   VAR_6 = "<invalid>";
  FUNC_2("  %-13s %#010jx", VAR_6, (uintmax_t) VAR_4->n_descsz);
  FUNC_2("      %s\n", FUNC_1(VAR_6, VAR_0->ehdr.e_type,
      VAR_4->n_type));
  FUNC_0(VAR_0, VAR_6, VAR_4->n_type, VAR_1, VAR_4->n_descsz);
  VAR_1 += FUNC_3(VAR_4->n_descsz, 4);
 }
}
