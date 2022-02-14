
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ppc_link_hash_table {int top_index; TYPE_2__** input_list; TYPE_1__* stub_group; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_11__ {int size; size_t id; int output_offset; int owner; } ;
typedef TYPE_2__ asection ;
struct TYPE_12__ {scalar_t__ has_14bit_branch; } ;
struct TYPE_10__ {scalar_t__ toc_off; TYPE_2__* link_sec; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6 (struct ppc_link_hash_table *VAR_2,
  bfd_size_type VAR_3,
  bfd_boolean VAR_4)
{
  asection **VAR_5;
  bfd_size_type VAR_6;
  bfd_boolean VAR_7;

  VAR_7 = VAR_0;
  VAR_6 = VAR_3;
  if (VAR_3 == 1)
    {

      if (VAR_4)
 {
   VAR_3 = 0x1e00000;
   VAR_6 = 0x7800;
 }
      else
 {
   VAR_3 = 0x1c00000;
   VAR_6 = 0x7000;
 }
      VAR_7 = VAR_1;
    }

  VAR_5 = VAR_2->input_list + VAR_2->top_index;
  do
    {
      asection *VAR_8 = *VAR_5;
      while (VAR_8 != ((void*)0))
 {
   asection *VAR_9;
   asection *VAR_10;
   bfd_size_type VAR_11;
   bfd_boolean VAR_12;
   bfd_vma VAR_13;

   VAR_9 = VAR_8;
   VAR_11 = VAR_8->size;
   VAR_12 = VAR_11 > (FUNC_4 (VAR_8)->has_14bit_branch
        ? VAR_6 : VAR_3);
   if (VAR_12 && !VAR_7)
     FUNC_2) (FUNC_1("%B section %A exceeds stub group size"),
         VAR_8->owner, VAR_8);
   VAR_13 = VAR_2->stub_group[VAR_8->id].toc_off;

   while ((VAR_10 = FUNC_0 (VAR_9)) != ((void*)0)
   && ((VAR_11 += VAR_9->output_offset - VAR_10->output_offset)
       < (FUNC_4 (VAR_10)->has_14bit_branch
   ? VAR_6 : VAR_3))
   && VAR_2->stub_group[VAR_10->id].toc_off == VAR_13)
     VAR_9 = VAR_10;
   do
     {
       VAR_10 = FUNC_0 (VAR_8);

       VAR_2->stub_group[VAR_8->id].link_sec = VAR_9;
     }
   while (VAR_8 != VAR_9 && (VAR_8 = VAR_10) != ((void*)0));






   if (!VAR_4 && !VAR_12)
     {
       VAR_11 = 0;
       while (VAR_10 != ((void*)0)
       && ((VAR_11 += VAR_8->output_offset - VAR_10->output_offset)
    < (FUNC_4 (VAR_10)->has_14bit_branch
       ? VAR_6 : VAR_3))
       && VAR_2->stub_group[VAR_10->id].toc_off == VAR_13)
  {
    VAR_8 = VAR_10;
    VAR_10 = FUNC_0 (VAR_8);
    VAR_2->stub_group[VAR_8->id].link_sec = VAR_9;
  }
     }
   VAR_8 = VAR_10;
 }
    }
  while (VAR_5-- != VAR_2->input_list);
  FUNC_3 (VAR_2->input_list);

}
