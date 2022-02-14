
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ihex_data_struct {struct ihex_data_list* tail; struct ihex_data_list* head; } ;
struct ihex_data_list {scalar_t__ where; struct ihex_data_list* next; scalar_t__ size; int * data; } ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_7__ {struct ihex_data_struct* ihex_data; } ;
struct TYPE_8__ {TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;
struct TYPE_9__ {int flags; scalar_t__ lma; } ;
typedef TYPE_3__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int *,void const*,size_t) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_4,
      asection *VAR_5,
      const void * VAR_6,
      file_ptr VAR_7,
      bfd_size_type VAR_8)
{
  struct ihex_data_list *VAR_9;
  bfd_byte *VAR_10;
  struct ihex_data_struct *VAR_11;

  if (VAR_8 == 0
      || (VAR_5->flags & VAR_1) == 0
      || (VAR_5->flags & VAR_2) == 0)
    return VAR_3;

  VAR_9 = FUNC_0 (VAR_4, sizeof (* VAR_9));
  if (VAR_9 == ((void*)0))
    return VAR_0;

  VAR_10 = FUNC_0 (VAR_4, VAR_8);
  if (VAR_10 == ((void*)0))
    return VAR_0;
  FUNC_1 (VAR_10, VAR_6, (size_t) VAR_8);

  VAR_9->data = VAR_10;
  VAR_9->where = VAR_5->lma + VAR_7;
  VAR_9->size = VAR_8;



  VAR_11 = VAR_4->tdata.ihex_data;
  if (VAR_11->tail != ((void*)0)
      && VAR_9->where >= VAR_11->tail->where)
    {
      VAR_11->tail->next = VAR_9;
      VAR_9->next = ((void*)0);
      VAR_11->tail = VAR_9;
    }
  else
    {
      struct ihex_data_list **VAR_12;

      for (VAR_12 = &VAR_11->head;
    *VAR_12 != ((void*)0) && (*VAR_12)->where < VAR_9->where;
    VAR_12 = &(*VAR_12)->next)
 ;
      VAR_9->next = *VAR_12;
      *VAR_12 = VAR_9;
      if (VAR_9->next == ((void*)0))
 VAR_11->tail = VAR_9;
    }

  return VAR_3;
}
