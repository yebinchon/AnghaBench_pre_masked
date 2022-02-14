
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
typedef TYPE_1__ tdata_type ;
struct TYPE_6__ {unsigned int size; scalar_t__ where; int * data; } ;
typedef TYPE_2__ srec_data_list_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,scalar_t__,int *,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_4,
      tdata_type *VAR_5,
      srec_data_list_type *VAR_6)
{
  unsigned int VAR_7 = 0;
  bfd_byte *VAR_8 = VAR_6->data;







  if (VAR_0 == 0)
    VAR_0 = 1;
  else if (VAR_0 > VAR_2 - VAR_5->type - 2)
    VAR_0 = VAR_2 - VAR_5->type - 2;

  while (VAR_7 < VAR_6->size)
    {
      bfd_vma VAR_9;
      unsigned int VAR_10 = VAR_6->size - VAR_7;

      if (VAR_10 > VAR_0)
 VAR_10 = VAR_0;

      VAR_9 = VAR_6->where + VAR_7 / FUNC_0 (VAR_4);

      if (! FUNC_1 (VAR_4,
          VAR_5->type,
          VAR_9,
          VAR_8,
          VAR_8 + VAR_10))
 return VAR_1;

      VAR_7 += VAR_10;
      VAR_8 += VAR_10;
    }

  return VAR_3;
}
