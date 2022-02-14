
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_2__ {unsigned int filenum; unsigned int column; unsigned int isa; unsigned int flags; unsigned int line; } ;
struct line_entry {struct line_entry* next; TYPE_1__ loc; int * label; } ;
typedef int segT ;
typedef int fragS ;
typedef scalar_t__ addressT ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct line_entry*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int,int *,int *) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int,int *,int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int ,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_12 (segT VAR_14, struct line_entry *VAR_15)
{
  unsigned VAR_16 = 1;
  unsigned VAR_17 = 1;
  unsigned VAR_18 = 0;
  unsigned VAR_19 = 0;
  unsigned VAR_20 = VAR_4 ? VAR_2 : 0;
  fragS *VAR_21 = ((void*)0), *VAR_22;
  addressT VAR_23 = 0, VAR_24;
  symbolS *VAR_25 = ((void*)0), *VAR_26;
  struct line_entry *VAR_27;

  do
    {
      int VAR_28;

      if (VAR_16 != VAR_15->loc.filenum)
 {
   VAR_16 = VAR_15->loc.filenum;
   FUNC_6 (VAR_10);
   FUNC_8 (VAR_16);
 }

      if (VAR_18 != VAR_15->loc.column)
 {
   VAR_18 = VAR_15->loc.column;
   FUNC_6 (VAR_8);
   FUNC_8 (VAR_18);
 }

      if (VAR_19 != VAR_15->loc.isa)
 {
   VAR_19 = VAR_15->loc.isa;
   FUNC_6 (VAR_11);
   FUNC_8 (VAR_19);
 }

      if ((VAR_15->loc.flags ^ VAR_20) & VAR_2)
 {
   VAR_20 = VAR_15->loc.flags;
   FUNC_6 (VAR_6);
 }

      if (VAR_15->loc.flags & VAR_0)
 FUNC_6 (VAR_7);

      if (VAR_15->loc.flags & VAR_3)
 FUNC_6 (VAR_12);

      if (VAR_15->loc.flags & VAR_1)
 FUNC_6 (VAR_9);





      VAR_28 = VAR_15->loc.line - VAR_17;
      VAR_26 = VAR_15->label;
      VAR_22 = FUNC_10 (VAR_26);
      VAR_24 = FUNC_0 (VAR_26);

      if (VAR_21 == ((void*)0))
 {
   FUNC_7 (VAR_26);
   FUNC_5 (VAR_28, 0);
 }
      else if (VAR_5)
 FUNC_4 (VAR_28, VAR_26, VAR_25);
      else if (VAR_22 == VAR_21)
 FUNC_5 (VAR_28, VAR_24 - VAR_23);
      else
 FUNC_9 (VAR_28, VAR_26, VAR_25);

      VAR_17 = VAR_15->loc.line;
      VAR_25 = VAR_26;
      VAR_21 = VAR_22;
      VAR_23 = VAR_24;

      VAR_27 = VAR_15->next;
      FUNC_1 (VAR_15);
      VAR_15 = VAR_27;
    }
  while (VAR_15);


  VAR_22 = FUNC_3 (VAR_14);
  VAR_24 = FUNC_2 (VAR_22, VAR_14);
  if (VAR_5)
    {
      VAR_26 = FUNC_11 (VAR_14, VAR_24, VAR_22);
      FUNC_4 (VAR_13, VAR_26, VAR_25);
    }
  else if (VAR_22 == VAR_21)
    FUNC_5 (VAR_13, VAR_24 - VAR_23);
  else
    {
      VAR_26 = FUNC_11 (VAR_14, VAR_24, VAR_22);
      FUNC_9 (VAR_13, VAR_26, VAR_25);
    }
}
