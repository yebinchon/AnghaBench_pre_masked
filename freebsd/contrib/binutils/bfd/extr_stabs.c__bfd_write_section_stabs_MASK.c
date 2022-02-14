
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stab_section_info {scalar_t__* stridxs; struct stab_excl_list* excls; } ;
struct stab_info {int strings; } ;
struct stab_excl_list {scalar_t__ offset; scalar_t__ val; scalar_t__ type; struct stab_excl_list* next; } ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef scalar_t__ bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ rawsize; scalar_t__ output_offset; TYPE_2__* output_section; } ;
typedef TYPE_1__ asection ;
struct TYPE_5__ {int size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,scalar_t__*) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int *,TYPE_2__*,scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;

bfd_boolean
FUNC_6 (bfd *VAR_5,
     struct stab_info *VAR_6,
     asection *VAR_7,
     void * *VAR_8,
     bfd_byte *VAR_9)
{
  struct stab_section_info *VAR_10;
  struct stab_excl_list *VAR_11;
  bfd_byte *VAR_12, *VAR_13, *VAR_14;
  bfd_size_type *VAR_15;

  VAR_10 = (struct stab_section_info *) *VAR_8;

  if (VAR_10 == ((void*)0))
    return FUNC_4 (VAR_5, VAR_7->output_section,
         VAR_9, VAR_7->output_offset,
         VAR_7->size);


  for (VAR_11 = VAR_10->excls; VAR_11 != ((void*)0); VAR_11 = VAR_11->next)
    {
      bfd_byte *VAR_16;

      FUNC_0 (VAR_11->offset < VAR_7->rawsize);
      VAR_16 = VAR_9 + VAR_11->offset;
      FUNC_3 (VAR_5, VAR_11->val, VAR_16 + VAR_4);
      VAR_16[VAR_3] = VAR_11->type;
    }



  VAR_13 = VAR_9;
  VAR_14 = VAR_9 + VAR_7->rawsize;
  for (VAR_12 = VAR_9, VAR_15 = VAR_10->stridxs;
       VAR_12 < VAR_14;
       VAR_12 += VAR_1, ++VAR_15)
    {
      if (*VAR_15 != (bfd_size_type) -1)
 {
   if (VAR_13 != VAR_12)
     FUNC_5 (VAR_13, VAR_12, VAR_1);
   FUNC_3 (VAR_5, *VAR_15, VAR_13 + VAR_2);

   if (VAR_12[VAR_3] == 0)
     {




       FUNC_0 (VAR_12 == VAR_9);
       FUNC_3 (VAR_5, FUNC_1 (VAR_6->strings),
     VAR_13 + VAR_4);
       FUNC_2 (VAR_5,
     VAR_7->output_section->size / VAR_1 - 1,
     VAR_13 + VAR_0);
     }

   VAR_13 += VAR_1;
 }
    }

  FUNC_0 ((bfd_size_type) (VAR_13 - VAR_9) == VAR_7->size);

  return FUNC_4 (VAR_5, VAR_7->output_section,
       VAR_9, (file_ptr) VAR_7->output_offset,
       VAR_7->size);
}
