
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee_var {char const* name; unsigned long namlen; } ;
struct TYPE_2__ {int alloc; struct ieee_var* vars; } ;
struct ieee_info {TYPE_1__ vars; } ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ieee_info*,int const*,int ) ;
 int FUNC_2 (struct ieee_info*,int const**,char const**,unsigned long*) ;
 int FUNC_3 (struct ieee_info*,int const**,int*) ;
 int FUNC_4 (struct ieee_var*,int ,unsigned int) ;
 scalar_t__ FUNC_5 (struct ieee_var*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct ieee_info *VAR_2, const bfd_byte **VAR_3)
{
  const bfd_byte *VAR_4;
  bfd_vma VAR_5;
  const char *VAR_6;
  unsigned long VAR_7;

  VAR_4 = *VAR_3;

  if (! FUNC_3 (VAR_2, VAR_3, &VAR_5)
      || ! FUNC_2 (VAR_2, VAR_3, &VAR_6, &VAR_7))
    return VAR_0;

  if (VAR_5 < 32)
    {
      FUNC_1 (VAR_2, VAR_4, FUNC_0("illegal variable index"));
      return VAR_0;
    }
  VAR_5 -= 32;

  if (VAR_5 >= VAR_2->vars.alloc)
    {
      unsigned int VAR_8;

      VAR_8 = VAR_2->vars.alloc;
      if (VAR_8 == 0)
 VAR_8 = 4;
      while (VAR_5 >= VAR_8)
 VAR_8 *= 2;
      VAR_2->vars.vars = ((struct ieee_var *)
    FUNC_5 (VAR_2->vars.vars,
       VAR_8 * sizeof *VAR_2->vars.vars));
      FUNC_4 (VAR_2->vars.vars + VAR_2->vars.alloc, 0,
       (VAR_8 - VAR_2->vars.alloc) * sizeof *VAR_2->vars.vars);
      VAR_2->vars.alloc = VAR_8;
    }

  VAR_2->vars.vars[VAR_5].name = VAR_6;
  VAR_2->vars.vars[VAR_5].namlen = VAR_7;

  return VAR_1;
}
