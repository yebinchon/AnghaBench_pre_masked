
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_demangle_typestring {char const* typestring; unsigned int len; } ;
struct stab_demangle_info {int typestring_count; int typestring_alloc; struct stab_demangle_typestring* typestrings; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stab_demangle_typestring*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct stab_demangle_info *VAR_1,
        const char *VAR_2, int VAR_3)
{
  if (VAR_1->typestring_count >= VAR_1->typestring_alloc)
    {
      VAR_1->typestring_alloc += 10;
      VAR_1->typestrings = ((struct stab_demangle_typestring *)
       FUNC_0 (VAR_1->typestrings,
          (VAR_1->typestring_alloc
           * sizeof *VAR_1->typestrings)));
    }

  VAR_1->typestrings[VAR_1->typestring_count].typestring = VAR_2;
  VAR_1->typestrings[VAR_1->typestring_count].len = (unsigned int) VAR_3;
  ++VAR_1->typestring_count;

  return VAR_0;
}
