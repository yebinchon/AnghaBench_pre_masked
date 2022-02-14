
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {void** loc; int mode; int fix_size; struct TYPE_4__* next; void* value; scalar_t__ forwards; scalar_t__ backwards; int * minipool; scalar_t__ address; void* insn; } ;
typedef TYPE_1__ Mfix ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (scalar_t__,void*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (scalar_t__,char*,...) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (void*) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int *,int) ;

__attribute__((used)) static void
FUNC_11 (rtx VAR_8, HOST_WIDE_INT VAR_9, rtx *VAR_10,
     enum machine_mode VAR_11, rtx VAR_12)
{
  Mfix * VAR_13 = (Mfix *) FUNC_10 (&VAR_6, sizeof (* VAR_13));
  VAR_13->insn = VAR_8;
  VAR_13->address = VAR_9;
  VAR_13->loc = VAR_10;
  VAR_13->mode = VAR_11;
  VAR_13->fix_size = FUNC_3 (VAR_11);
  VAR_13->value = VAR_12;
  VAR_13->forwards = FUNC_9 (VAR_8);
  VAR_13->backwards = FUNC_8 (VAR_8);
  VAR_13->minipool = ((void*)0);




  FUNC_7 (VAR_13->forwards || VAR_13->backwards);




  if (VAR_0 && VAR_13->fix_size == 8)
    VAR_7 = 4;

  if (VAR_2)
    {
      FUNC_6 (VAR_2,
        ";; %smode fixup for i%d; addr %lu, range (%ld,%ld): ",
        FUNC_1 (VAR_11),
        FUNC_2 (VAR_8), (unsigned long) VAR_9,
        -1 * (long)VAR_13->backwards, (long)VAR_13->forwards);
      FUNC_5 (VAR_2, VAR_13->value);
      FUNC_6 (VAR_2, "\n");
    }


  VAR_13->next = ((void*)0);

  if (VAR_4 != ((void*)0))
    VAR_5->next = VAR_13;
  else
    VAR_4 = VAR_13;

  VAR_5 = VAR_13;
}
