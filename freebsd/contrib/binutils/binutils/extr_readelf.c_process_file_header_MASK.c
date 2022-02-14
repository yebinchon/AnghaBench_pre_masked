
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_5__ {scalar_t__* e_ident; scalar_t__ e_shnum; scalar_t__ e_shstrndx; scalar_t__ e_shentsize; scalar_t__ e_phnum; scalar_t__ e_phentsize; scalar_t__ e_ehsize; int e_machine; scalar_t__ e_flags; scalar_t__ e_shoff; scalar_t__ e_phoff; scalar_t__ e_entry; scalar_t__ e_version; int e_type; } ;
struct TYPE_4__ {scalar_t__ sh_size; scalar_t__ sh_link; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_22 ;
 TYPE_3__ VAR_23 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char,int ) ;
 TYPE_1__* VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static int
FUNC_12 (void)
{
  if ( VAR_23.e_ident[VAR_4] != VAR_11
      || VAR_23.e_ident[VAR_5] != VAR_12
      || VAR_23.e_ident[VAR_6] != VAR_13
      || VAR_23.e_ident[VAR_7] != VAR_14)
    {
      FUNC_1
 (FUNC_0("Not an ELF file - it has the wrong magic bytes at the start\n"));
      return 0;
    }

  if (VAR_22)
    {
      int VAR_26;

      FUNC_10 (FUNC_0("ELF Header:\n"));
      FUNC_10 (FUNC_0("  Magic:   "));
      for (VAR_26 = 0; VAR_26 < VAR_8; VAR_26++)
 FUNC_10 ("%2.2x ", VAR_23.e_ident[VAR_26]);
      FUNC_10 ("\n");
      FUNC_10 (FUNC_0("  Class:                             %s\n"),
       FUNC_4 (VAR_23.e_ident[VAR_2]));
      FUNC_10 (FUNC_0("  Data:                              %s\n"),
       FUNC_3 (VAR_23.e_ident[VAR_3]));
      FUNC_10 (FUNC_0("  Version:                           %d %s\n"),
       VAR_23.e_ident[VAR_10],
       (VAR_23.e_ident[VAR_10] == VAR_15
        ? "(current)"
        : (VAR_23.e_ident[VAR_10] != VAR_16
    ? "<unknown: %lx>"
    : "")));
      FUNC_10 (FUNC_0("  OS/ABI:                            %s\n"),
       FUNC_8 (VAR_23.e_ident[VAR_9]));
      FUNC_10 (FUNC_0("  ABI Version:                       %d\n"),
       VAR_23.e_ident[VAR_1]);
      FUNC_10 (FUNC_0("  Type:                              %s\n"),
       FUNC_5 (VAR_23.e_type));
      FUNC_10 (FUNC_0("  Machine:                           %s\n"),
       FUNC_7 (VAR_23.e_machine));
      FUNC_10 (FUNC_0("  Version:                           0x%lx\n"),
       (unsigned long) VAR_23.e_version);

      FUNC_10 (FUNC_0("  Entry point address:               "));
      FUNC_9 ((bfd_vma) VAR_23.e_entry, VAR_17);
      FUNC_10 (FUNC_0("\n  Start of program headers:          "));
      FUNC_9 ((bfd_vma) VAR_23.e_phoff, VAR_0);
      FUNC_10 (FUNC_0(" (bytes into file)\n  Start of section headers:          "));
      FUNC_9 ((bfd_vma) VAR_23.e_shoff, VAR_0);
      FUNC_10 (FUNC_0(" (bytes into file)\n"));

      FUNC_10 (FUNC_0("  Flags:                             0x%lx%s\n"),
       (unsigned long) VAR_23.e_flags,
       FUNC_6 (VAR_23.e_flags, VAR_23.e_machine));
      FUNC_10 (FUNC_0("  Size of this header:               %ld (bytes)\n"),
       (long) VAR_23.e_ehsize);
      FUNC_10 (FUNC_0("  Size of program headers:           %ld (bytes)\n"),
       (long) VAR_23.e_phentsize);
      FUNC_10 (FUNC_0("  Number of program headers:         %ld\n"),
       (long) VAR_23.e_phnum);
      FUNC_10 (FUNC_0("  Size of section headers:           %ld (bytes)\n"),
       (long) VAR_23.e_shentsize);
      FUNC_10 (FUNC_0("  Number of section headers:         %ld"),
       (long) VAR_23.e_shnum);
      if (VAR_24 != ((void*)0) && VAR_23.e_shnum == 0)
 FUNC_10 (" (%ld)", (long) VAR_24[0].sh_size);
      FUNC_11 ('\n', VAR_25);
      FUNC_10 (FUNC_0("  Section header string table index: %ld"),
       (long) VAR_23.e_shstrndx);
      if (VAR_24 != ((void*)0) && VAR_23.e_shstrndx == VAR_21)
 FUNC_10 (" (%ld)", (long) VAR_24[0].sh_link);
      else if (VAR_23.e_shstrndx != VAR_20
        && (VAR_23.e_shstrndx >= VAR_23.e_shnum
     || (VAR_23.e_shstrndx >= VAR_19
         && VAR_23.e_shstrndx <= VAR_18)))
 FUNC_10 (" <corrupt: out of range>");
      FUNC_11 ('\n', VAR_25);
    }

  if (VAR_24 != ((void*)0))
    {
      if (VAR_23.e_shnum == 0)
 VAR_23.e_shnum = VAR_24[0].sh_size;
      if (VAR_23.e_shstrndx == VAR_21)
 VAR_23.e_shstrndx = VAR_24[0].sh_link;
      else if (VAR_23.e_shstrndx != VAR_20
        && (VAR_23.e_shstrndx >= VAR_23.e_shnum
     || (VAR_23.e_shstrndx >= VAR_19
         && VAR_23.e_shstrndx <= VAR_18)))
 VAR_23.e_shstrndx = VAR_20;
      FUNC_2 (VAR_24);
      VAR_24 = ((void*)0);
    }

  return 1;
}
