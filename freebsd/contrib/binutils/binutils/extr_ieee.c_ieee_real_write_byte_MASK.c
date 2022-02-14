
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee_handle {struct ieee_buf* curbuf; TYPE_1__* current; } ;
struct ieee_buf {size_t c; int* buf; struct ieee_buf* next; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {struct ieee_buf* tail; struct ieee_buf* head; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct ieee_handle *VAR_2, int VAR_3)
{
  if (VAR_2->curbuf->c >= VAR_0)
    {
      struct ieee_buf *VAR_4;

      VAR_4 = (struct ieee_buf *) FUNC_0 (sizeof *VAR_4);
      VAR_4->next = ((void*)0);
      VAR_4->c = 0;
      if (VAR_2->current->head == ((void*)0))
 VAR_2->current->head = VAR_4;
      else
 VAR_2->current->tail->next = VAR_4;
      VAR_2->current->tail = VAR_4;
      VAR_2->curbuf = VAR_4;
    }

  VAR_2->curbuf->buf[VAR_2->curbuf->c] = VAR_3;
  ++VAR_2->curbuf->c;

  return VAR_1;
}
