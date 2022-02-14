
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct disassemble_info {int * symtab; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;
struct TYPE_3__ {int st_info; } ;
struct TYPE_4__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (struct disassemble_info *VAR_7, int VAR_8,
     enum map_type *VAR_9)
{
  elf_symbol_type *VAR_10;
  unsigned int VAR_11;
  const char *VAR_12;

  VAR_10 = *(elf_symbol_type **)(VAR_7->symtab + VAR_8);
  VAR_11 = FUNC_0 (VAR_10->internal_elf_sym.st_info);


  if (VAR_11 == VAR_5 || VAR_11 == VAR_4)
    {
      *VAR_9 = (VAR_11 == VAR_4) ? VAR_3 : VAR_1;
      return VAR_6;
    }


  VAR_12 = FUNC_1(VAR_7->symtab[VAR_8]);
  if (VAR_12[0] == '$' && (VAR_12[1] == 'a' || VAR_12[1] == 't' || VAR_12[1] == 'd')
      && (VAR_12[2] == 0 || VAR_12[2] == '.'))
    {
      *VAR_9 = ((VAR_12[1] == 'a') ? VAR_1
     : (VAR_12[1] == 't') ? VAR_3
     : VAR_2);
      return VAR_6;
    }

  return VAR_0;
}
