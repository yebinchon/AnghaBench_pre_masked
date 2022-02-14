
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unw_rec_list ;
typedef int segT ;
typedef int offsetT ;
struct TYPE_5__ {scalar_t__ X_add_symbol; scalar_t__ X_add_number; int X_op; } ;
typedef TYPE_1__ expressionS ;
typedef int bfd_reloc_code_real_type ;
struct TYPE_7__ {int pointer_size; int flags; int pointer_size_shift; } ;
struct TYPE_6__ {scalar_t__ personality_routine; int * current_entry; int tail; int list; int info; scalar_t__ force_unwind_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,int,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int,int,int ,int ,int ,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 int * FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int VAR_12 ;
 int FUNC_13 (int const,int ) ;
 TYPE_2__ VAR_13 ;

__attribute__((used)) static void
FUNC_14 (const segT VAR_14)
{
  int VAR_15, VAR_16;
  unw_rec_list *VAR_17;



  FUNC_0 (FUNC_11 (), VAR_6);



  FUNC_9 ();


  VAR_17 = FUNC_10 (VAR_13.list);
  FUNC_4 (VAR_17, 1);
  VAR_15 = FUNC_1 (VAR_17);

  if (VAR_15 > 0 || VAR_13.force_unwind_entry)
    {
      VAR_13.force_unwind_entry = 0;

      VAR_16 = VAR_15 % VAR_10.pointer_size;
      if (VAR_16 != 0)
 VAR_15 += VAR_10.pointer_size - VAR_16;

      VAR_15 += 8;

      if (VAR_13.personality_routine)
 VAR_15 += VAR_10.pointer_size;
    }


  if (VAR_15 != 0)
    {
      expressionS VAR_18;
      bfd_reloc_code_real_type VAR_19;

      FUNC_13 (VAR_14, VAR_8);



      FUNC_5 (VAR_10.pointer_size_shift, 0, 0);
      FUNC_12 (VAR_11, VAR_10.pointer_size_shift);


      VAR_13.info = FUNC_2 ();

      FUNC_7 (VAR_12, VAR_15, VAR_15, 0, 0,
  (offsetT) (long) VAR_13.personality_routine,
  (char *) VAR_17);


      if (VAR_13.personality_routine != 0)
 {
   VAR_18.X_op = VAR_7;
   VAR_18.X_add_symbol = VAR_13.personality_routine;
   VAR_18.X_add_number = 0;

   if (VAR_10.flags & VAR_5)
     {
       if (VAR_10.flags & VAR_4)
  VAR_19 = VAR_3;
       else
  VAR_19 = VAR_1;
     }
   else
     {
       if (VAR_10.flags & VAR_4)
  VAR_19 = VAR_2;
       else
  VAR_19 = VAR_0;
     }

   FUNC_3 (VAR_9, FUNC_6 () - VAR_10.pointer_size,
         VAR_10.pointer_size, &VAR_18, 0, VAR_19);
   VAR_13.personality_routine = 0;
 }
    }

  FUNC_8 ();
  VAR_13.list = VAR_13.tail = *(VAR_13.current_entry = ((void*)0));
}
