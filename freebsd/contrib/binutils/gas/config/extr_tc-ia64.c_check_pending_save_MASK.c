
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* next; scalar_t__ frmask; scalar_t__ brmask; scalar_t__ grmask; } ;
struct TYPE_7__ {TYPE_3__ p; } ;
struct TYPE_8__ {TYPE_1__ record; } ;
struct TYPE_10__ {TYPE_2__ r; struct TYPE_10__* next; } ;
typedef TYPE_4__ unw_rec_list ;
struct TYPE_11__ {TYPE_3__* pending_saves; TYPE_4__* current_entry; TYPE_4__* tail; TYPE_4__* list; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_5__ VAR_0 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_0.pending_saves)
    {
      unw_rec_list *VAR_1, *VAR_2;

      FUNC_0 ("Previous .save incomplete");
      for (VAR_1 = VAR_0.list, VAR_2 = ((void*)0); VAR_1; )
 if (&VAR_1->r.record.p == VAR_0.pending_saves)
   {
     if (VAR_2)
       VAR_2->next = VAR_1->next;
     else
       VAR_0.list = VAR_1->next;
     if (VAR_1 == VAR_0.tail)
       VAR_0.tail = VAR_2;
     if (VAR_1 == VAR_0.current_entry)
       VAR_0.current_entry = VAR_1->next;




     VAR_1->r.record.p.grmask = 0;
     VAR_1->r.record.p.brmask = 0;
     VAR_1->r.record.p.frmask = 0;
     VAR_2 = VAR_1->r.record.p.next;
     VAR_1->r.record.p.next = ((void*)0);
     VAR_1 = VAR_2;
     break;
   }
 else
   {
     VAR_2 = VAR_1;
     VAR_1 = VAR_1->next;
   }
      while (VAR_1)
 {
   VAR_2 = VAR_1;
   VAR_1 = VAR_1->r.record.p.next;
   FUNC_1 (VAR_2);
 }
      VAR_0.pending_saves = ((void*)0);
    }
}
