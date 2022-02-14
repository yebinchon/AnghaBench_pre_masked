
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* types; } ;
struct ieee_info {TYPE_1__ types; } ;
typedef int * debug_type ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_4__ {int * type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee_info*,int,int ) ;
 int * FUNC_1 (struct ieee_info*,int const*,int) ;
 int FUNC_2 (struct ieee_info*,int const**,int*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct ieee_info *VAR_2, const bfd_byte **VAR_3,
        debug_type *VAR_4)
{
  const bfd_byte *VAR_5;
  bfd_vma VAR_6;

  VAR_5 = *VAR_3;

  if (! FUNC_2 (VAR_2, VAR_3, &VAR_6))
    return VAR_0;

  if (VAR_6 < 256)
    {
      *VAR_4 = FUNC_1 (VAR_2, VAR_5, VAR_6);
      if (*VAR_4 == ((void*)0))
 return VAR_0;
      return VAR_1;
    }

  VAR_6 -= 256;
  if (! FUNC_0 (VAR_2, VAR_6, VAR_1))
    return VAR_0;

  *VAR_4 = VAR_2->types.types[VAR_6].type;

  return VAR_1;
}
