
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {struct ieee_buf* curbuf; struct ieee_buflist* current; } ;
struct ieee_buflist {struct ieee_buf* tail; struct ieee_buf* head; } ;
struct ieee_buf {scalar_t__ c; int * next; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct ieee_handle *VAR_1, struct ieee_buflist *VAR_2)
{
  if (VAR_2->head == ((void*)0))
    {
      struct ieee_buf *VAR_3;

      VAR_3 = (struct ieee_buf *) FUNC_0 (sizeof *VAR_3);
      VAR_3->next = ((void*)0);
      VAR_3->c = 0;
      VAR_2->head = VAR_3;
      VAR_2->tail = VAR_3;
    }

  VAR_1->current = VAR_2;
  VAR_1->curbuf = VAR_2->tail;

  return VAR_0;
}
