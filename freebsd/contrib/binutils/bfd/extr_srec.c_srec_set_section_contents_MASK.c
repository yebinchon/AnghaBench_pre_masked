
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int type; TYPE_3__* tail; TYPE_3__* head; } ;
typedef TYPE_2__ tdata_type ;
struct TYPE_11__ {scalar_t__ where; int size; struct TYPE_11__* next; int * data; } ;
typedef TYPE_3__ srec_data_list_type ;
typedef TYPE_4__* sec_ptr ;
typedef scalar_t__ file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_9__ {TYPE_2__* srec_data; } ;
struct TYPE_13__ {TYPE_1__ tdata; } ;
typedef TYPE_5__ bfd ;
struct TYPE_12__ {int flags; scalar_t__ lma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (void*,void const*,size_t) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_5,
      sec_ptr VAR_6,
      const void * VAR_7,
      file_ptr VAR_8,
      bfd_size_type VAR_9)
{
  tdata_type *VAR_10 = VAR_5->tdata.srec_data;
  srec_data_list_type *VAR_11;

  VAR_11 = FUNC_0 (VAR_5, sizeof (* VAR_11));
  if (VAR_11 == ((void*)0))
    return VAR_0;

  if (VAR_9
      && (VAR_6->flags & VAR_2)
      && (VAR_6->flags & VAR_3))
    {
      bfd_byte *VAR_12;

      VAR_12 = FUNC_0 (VAR_5, VAR_9);
      if (VAR_12 == ((void*)0))
 return VAR_0;
      FUNC_1 ((void *) VAR_12, VAR_7, (size_t) VAR_9);



      if (VAR_1)
 VAR_10->type = 3;
      else if ((VAR_6->lma + VAR_8 + VAR_9 - 1) <= 0xffff)
 ;
      else if ((VAR_6->lma + VAR_8 + VAR_9 - 1) <= 0xffffff
        && VAR_10->type <= 2)
 VAR_10->type = 2;
      else
 VAR_10->type = 3;

      VAR_11->data = VAR_12;
      VAR_11->where = VAR_6->lma + VAR_8;
      VAR_11->size = VAR_9;



      if (VAR_10->tail != ((void*)0)
   && VAR_11->where >= VAR_10->tail->where)
 {
   VAR_10->tail->next = VAR_11;
   VAR_11->next = ((void*)0);
   VAR_10->tail = VAR_11;
 }
      else
 {
   srec_data_list_type **VAR_13;

   for (VAR_13 = &VAR_10->head;
        *VAR_13 != ((void*)0) && (*VAR_13)->where < VAR_11->where;
        VAR_13 = &(*VAR_13)->next)
     ;
   VAR_11->next = *VAR_13;
   *VAR_13 = VAR_11;
   if (VAR_11->next == ((void*)0))
     VAR_10->tail = VAR_11;
 }
    }
  return VAR_4;
}
