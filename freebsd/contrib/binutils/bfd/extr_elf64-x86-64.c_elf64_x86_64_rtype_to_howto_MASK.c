
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int type; } ;
typedef TYPE_1__ reloc_howto_type ;
typedef int bfd ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static reloc_howto_type *
FUNC_4 (bfd *VAR_6, unsigned VAR_7)
{
  unsigned VAR_8;

  if (VAR_7 < (unsigned int) VAR_0
      || VAR_7 >= (unsigned int) VAR_2)
    {
      if (VAR_7 >= (unsigned int) VAR_3)
 {
   FUNC_2) (FUNC_1("%B: invalid relocation type %d"),
     VAR_6, (int) VAR_7);
   VAR_7 = VAR_1;
 }
      VAR_8 = VAR_7;
    }
  else
    VAR_8 = VAR_7 - (unsigned int) VAR_4;
  FUNC_0 (VAR_5[VAR_8].type == VAR_7);
  return &VAR_5[VAR_8];
}
