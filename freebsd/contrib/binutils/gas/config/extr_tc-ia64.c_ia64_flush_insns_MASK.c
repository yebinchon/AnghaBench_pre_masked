
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int type; } ;
struct TYPE_11__ {unsigned long slot_number; int slot_frag; TYPE_1__ r; struct TYPE_11__* next; } ;
typedef TYPE_3__ unw_rec_list ;
typedef int subsegT ;
struct label_fix {int dw2_mark_labels; int sym; struct label_fix* next; } ;
typedef int segT ;
typedef int bfd_boolean ;
struct TYPE_14__ {int flags; } ;
struct TYPE_15__ {struct label_fix* tag_fixups; struct label_fix* label_fixups; TYPE_6__ debug_line; } ;
struct TYPE_10__ {scalar_t__ X_op; } ;
struct TYPE_13__ {scalar_t__ num_slots_in_use; TYPE_2__ qp; int last_text_seg; } ;
struct TYPE_12__ {TYPE_3__* current_entry; } ;


 TYPE_8__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;



 int FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 () ;


 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 () ;




 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

 TYPE_4__ VAR_8 ;

void
FUNC_9 ()
{
  struct label_fix *VAR_9;
  segT VAR_10;
  subsegT VAR_11;
  unw_rec_list *VAR_12;
  bfd_boolean VAR_13;

  if (!VAR_5.last_text_seg)
    return;

  VAR_10 = VAR_6;
  VAR_11 = VAR_7;

  FUNC_7 (VAR_5.last_text_seg, 0);

  while (VAR_5.num_slots_in_use > 0)
    FUNC_4 ();



  VAR_13 = VAR_2;
  for (VAR_9 = VAR_0.label_fixups; VAR_9; VAR_9 = VAR_9->next)
    {
      FUNC_8 (VAR_9->sym);
      VAR_13 |= VAR_9->dw2_mark_labels;
    }
  if (VAR_13)
    {
      FUNC_3 (&VAR_0.debug_line);
      VAR_0.debug_line.flags |= VAR_1;
      FUNC_2 (FUNC_6 (), &VAR_0.debug_line);
    }
  VAR_0.label_fixups = 0;

  for (VAR_9 = VAR_0.tag_fixups; VAR_9; VAR_9 = VAR_9->next)
    FUNC_8 (VAR_9->sym);
  VAR_0.tag_fixups = 0;




  for (VAR_12 = VAR_8.current_entry; VAR_12; VAR_12 = VAR_12->next)
    {
      switch (VAR_12->r.type)
 {
 case 133:
 case 132:
 case 142:
 case 139:
   VAR_12->slot_number = (unsigned long) FUNC_5 (0);
   VAR_12->slot_frag = VAR_4;
   break;



 case 128:
 case 141:
 case 140:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 131:
 case 130:
 case 129:

   break;

 default:
   FUNC_1 (FUNC_0("Unwind directive not followed by an instruction."));
   break;
 }
    }
  VAR_8.current_entry = ((void*)0);

  FUNC_7 (VAR_10, VAR_11);

  if (VAR_5.qp.X_op == VAR_3)
    FUNC_1 ("qualifying predicate not followed by instruction");
}
