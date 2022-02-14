
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
struct TYPE_8__ {int e_shnum; } ;
struct TYPE_7__ {int sh_size; scalar_t__ sh_type; int sh_link; int sh_info; int sh_offset; scalar_t__ sh_addr; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_3 (char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int *,int *,int ,int,int,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int
FUNC_8 (Elf_Internal_Shdr *VAR_5, FILE *VAR_6)
{
  Elf_Internal_Shdr *VAR_7;
  bfd_size_type VAR_8;
  bfd_vma VAR_9;
  unsigned char *VAR_10;
  unsigned char *VAR_11;

  VAR_8 = VAR_5->sh_size;

  if (VAR_8 == 0 || VAR_5->sh_type == VAR_0)
    {
      FUNC_6 (FUNC_3("\nSection '%s' has no data to dump.\n"),
       FUNC_2 (VAR_5));
      return 0;
    }
  else
    FUNC_6 (FUNC_3("\nHex dump of section '%s':\n"), FUNC_2 (VAR_5));

  VAR_9 = VAR_5->sh_addr;

  VAR_11 = FUNC_5 (((void*)0), VAR_6, VAR_5->sh_offset, 1, VAR_8,
      FUNC_3("section data"));
  if (!VAR_11)
    return 0;






  for (VAR_7 = VAR_4;
       VAR_7 < VAR_4 + VAR_3.e_shnum;
       ++VAR_7)
    {
      if ((VAR_7->sh_type != VAR_2 && VAR_7->sh_type != VAR_1)
   || FUNC_1 (VAR_7->sh_info) >= VAR_3.e_shnum
   || FUNC_0 (VAR_7->sh_info) != VAR_5
   || VAR_7->sh_size == 0
   || FUNC_1 (VAR_7->sh_link) >= VAR_3.e_shnum)
 continue;

      FUNC_6 (FUNC_3(" NOTE: This section has relocations against it, but these have NOT been applied to this dump.\n"));
      break;
    }

  VAR_10 = VAR_11;

  while (VAR_8)
    {
      int VAR_12;
      int VAR_13;
      int VAR_14;

      VAR_14 = (VAR_8 > 16 ? 16 : VAR_8);

      FUNC_6 ("  0x%8.8lx ", (unsigned long) VAR_9);

      for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
 {
   if (VAR_12 < VAR_14)
     FUNC_6 ("%2.2x", VAR_10[VAR_12]);
   else
     FUNC_6 ("  ");

   if ((VAR_12 & 3) == 3)
     FUNC_6 (" ");
 }

      for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
 {
   VAR_13 = VAR_10[VAR_12];
   if (VAR_13 >= ' ' && VAR_13 < 0x7f)
     FUNC_6 ("%c", VAR_13);
   else
     FUNC_6 (".");
 }

      FUNC_7 ('\n');

      VAR_10 += VAR_14;
      VAR_9 += VAR_14;
      VAR_8 -= VAR_14;
    }

  FUNC_4 (VAR_11);

  FUNC_7 ('\n');
  return 1;
}
