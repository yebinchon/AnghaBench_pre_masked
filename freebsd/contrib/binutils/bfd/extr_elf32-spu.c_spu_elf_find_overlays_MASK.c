
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct spu_link_hash_table {unsigned int num_overlays; unsigned int num_buf; TYPE_2__** ovl_region; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_11__ {int section_count; TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_12__ {int flags; scalar_t__ size; scalar_t__ vma; struct TYPE_12__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_13__ {unsigned int ovl_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__** FUNC_0 (int) ;
 TYPE_2__** FUNC_1 (TYPE_2__**,unsigned int) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_2__**,unsigned int,int,int ) ;
 int VAR_5 ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;
 struct spu_link_hash_table* FUNC_5 (struct bfd_link_info*) ;

bfd_boolean
FUNC_6 (bfd *VAR_6, struct bfd_link_info *VAR_7)
{
  struct spu_link_hash_table *VAR_8 = FUNC_5 (VAR_7);
  asection **VAR_9;
  unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
  asection *VAR_14;
  bfd_vma VAR_15;

  if (VAR_6->section_count < 2)
    return VAR_0;

  VAR_9 = FUNC_0 (VAR_6->section_count * sizeof (*VAR_9));
  if (VAR_9 == ((void*)0))
    return VAR_0;


  for (VAR_11 = 0, VAR_14 = VAR_6->sections; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
    if ((VAR_14->flags & VAR_1) != 0
 && (VAR_14->flags & (VAR_2 | VAR_3)) != VAR_3
 && VAR_14->size != 0)
      VAR_9[VAR_11++] = VAR_14;

  if (VAR_11 == 0)
    {
      FUNC_2 (VAR_9);
      return VAR_0;
    }


  FUNC_3 (VAR_9, VAR_11, sizeof (*VAR_9), VAR_5);





  VAR_15 = VAR_9[0]->vma + VAR_9[0]->size;
  for (VAR_12 = 0, VAR_13 = 0, VAR_10 = 1; VAR_10 < VAR_11; VAR_10++)
    {
      VAR_14 = VAR_9[VAR_10];
      if (VAR_14->vma < VAR_15)
 {
   asection *VAR_16 = VAR_9[VAR_10 - 1];

   if (FUNC_4 (VAR_16)->ovl_index == 0)
     {
       FUNC_4 (VAR_16)->ovl_index = ++VAR_12;
       VAR_9[VAR_13 * 2] = VAR_16;
       VAR_9[VAR_13 * 2 + 1] = VAR_16;
       VAR_13++;
     }
   FUNC_4 (VAR_14)->ovl_index = ++VAR_12;
   if (VAR_15 < VAR_14->vma + VAR_14->size)
     {
       VAR_15 = VAR_14->vma + VAR_14->size;
       VAR_9[VAR_13 * 2 - 1] = VAR_14;
     }
 }
      else
 VAR_15 = VAR_14->vma + VAR_14->size;
    }

  VAR_8->num_overlays = VAR_12;
  VAR_8->num_buf = VAR_13;
  if (VAR_12 == 0)
    {
      FUNC_2 (VAR_9);
      return VAR_0;
    }

  VAR_9 = FUNC_1 (VAR_9, VAR_13 * 2 * sizeof (*VAR_9));
  if (VAR_9 == ((void*)0))
    return VAR_0;

  VAR_8->ovl_region = VAR_9;
  return VAR_4;
}
