
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ file_offset; TYPE_3__* abfd; } ;
typedef TYPE_1__ ieee_ar_obstack_type ;
struct TYPE_12__ {int element_index; int element_count; TYPE_1__* elements; } ;
typedef TYPE_2__ ieee_ar_data_type ;
typedef scalar_t__ file_ptr ;
struct TYPE_13__ {scalar_t__ origin; } ;
typedef TYPE_3__ bfd ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bfd *
FUNC_3 (bfd *VAR_2, bfd *VAR_3)
{
  ieee_ar_data_type *VAR_4 = FUNC_0 (VAR_2);


  if (VAR_3 == (bfd *) ((void*)0))

    VAR_4->element_index = 2;

  while (VAR_0)
    {
      ieee_ar_obstack_type *VAR_5 = VAR_4->elements + VAR_4->element_index;

      VAR_4->element_index++;
      if (VAR_4->element_index <= VAR_4->element_count)
 {
   if (VAR_5->file_offset != (file_ptr) 0)
     {
       if (VAR_5->abfd == (bfd *) ((void*)0))
  {
    VAR_5->abfd = FUNC_1 (VAR_2);
    VAR_5->abfd->origin = VAR_5->file_offset;
  }
       return VAR_5->abfd;
     }
 }
      else
 {
   FUNC_2 (VAR_1);
   return ((void*)0);
 }
    }
}
