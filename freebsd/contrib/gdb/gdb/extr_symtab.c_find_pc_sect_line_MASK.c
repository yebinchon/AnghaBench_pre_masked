
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ pc; scalar_t__ line; scalar_t__ end; struct bfd_section* section; struct symtab* symtab; } ;
struct symtab {struct symtab* next; } ;
struct minimal_symbol {int dummy; } ;
struct linetable_entry {scalar_t__ pc; scalar_t__ line; } ;
struct linetable {int nitems; struct linetable_entry* item; } ;
struct blockvector {int dummy; } ;
struct bfd_section {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 struct blockvector* FUNC_0 (struct symtab*) ;
 int FUNC_1 (struct blockvector*,int ) ;
 void* FUNC_2 (int ) ;
 int VAR_0 ;
 struct linetable* FUNC_3 (struct symtab*) ;
 scalar_t__ FUNC_4 (struct minimal_symbol*) ;
 int FUNC_5 (struct minimal_symbol*) ;
 scalar_t__ FUNC_6 (struct minimal_symbol*) ;
 struct symtab_and_line FUNC_7 (scalar_t__,int ) ;
 struct symtab* FUNC_8 (scalar_t__,struct bfd_section*) ;
 int FUNC_9 (struct symtab_and_line*) ;
 struct minimal_symbol* FUNC_10 (scalar_t__) ;
 struct minimal_symbol* FUNC_11 (int ,int *) ;
 scalar_t__ VAR_1 ;

struct symtab_and_line
FUNC_12 (CORE_ADDR VAR_2, struct bfd_section *VAR_3, int VAR_4)
{
  struct symtab *VAR_5;
  struct linetable *VAR_6;
  int VAR_7;
  int VAR_8;
  struct linetable_entry *VAR_9;
  struct symtab_and_line VAR_10;
  struct blockvector *VAR_11;
  struct minimal_symbol *VAR_12;
  struct minimal_symbol *VAR_13;



  struct linetable_entry *VAR_14 = ((void*)0);
  CORE_ADDR VAR_15 = 0;
  struct symtab *VAR_16 = 0;






  struct linetable_entry *VAR_17 = ((void*)0);
  struct symtab *VAR_18 = 0;



  struct linetable_entry *VAR_19;







  FUNC_9 (&VAR_10);
  if (VAR_4)
    VAR_2 -= 1;
  VAR_12 = FUNC_10 (VAR_2);
  if (VAR_12 != ((void*)0))
    if (FUNC_4 (VAR_12) == VAR_1)
      {
 VAR_13 = FUNC_11 (FUNC_5 (VAR_12),
           ((void*)0));
 if (VAR_13 == ((void*)0))
                                                                                                           ;

 else if (FUNC_6 (VAR_13) == FUNC_6 (VAR_12))


                                                                                                           ;

 else
   return FUNC_7 (FUNC_6 (VAR_13), 0);
      }


  VAR_5 = FUNC_8 (VAR_2, VAR_3);
  if (!VAR_5)
    {

      if (VAR_4)
 VAR_2++;
      VAR_10.pc = VAR_2;
      return VAR_10;
    }

  VAR_11 = FUNC_0 (VAR_5);





  for (; VAR_5 && FUNC_0 (VAR_5) == VAR_11; VAR_5 = VAR_5->next)
    {

      VAR_6 = FUNC_3 (VAR_5);
      if (!VAR_6)
 continue;
      VAR_7 = VAR_6->nitems;
      if (VAR_7 <= 0)
 {




   continue;
 }

      VAR_19 = ((void*)0);
      VAR_9 = VAR_6->item;



      if (VAR_9->pc > VAR_2 && (!VAR_17 || VAR_9->pc < VAR_17->pc))
 {
   VAR_17 = VAR_9;
   VAR_18 = VAR_5;
 }

      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_9++)
 {


   if (VAR_9->pc > VAR_2)
     break;

   VAR_19 = VAR_9;
 }
      if (VAR_19 && VAR_19->line && (!VAR_14 || VAR_19->pc > VAR_14->pc))
 {
   VAR_14 = VAR_19;
   VAR_16 = VAR_5;


   if (VAR_15 <= VAR_14->pc)
     VAR_15 = 0;
 }




      if (VAR_14 && VAR_8 < VAR_7 && VAR_9->pc > VAR_14->pc
          && (VAR_15 == 0 || VAR_15 > VAR_9->pc))
 VAR_15 = VAR_9->pc;
    }

  if (!VAR_16)
    {
      if (!VAR_18)
 {

   VAR_10.pc = VAR_2;
 }
      else
 {
   VAR_10.symtab = VAR_18;
   VAR_10.line = VAR_17->line - 1;


   if (VAR_10.line == 0)
     ++VAR_10.line;

   VAR_10.pc = FUNC_2 (FUNC_1 (VAR_11, VAR_0));
   VAR_10.end = VAR_17->pc;
 }
    }
  else if (VAR_14->line == 0)
    {



      VAR_10.pc = VAR_2;
    }
  else
    {
      VAR_10.symtab = VAR_16;
      VAR_10.line = VAR_14->line;
      VAR_10.pc = VAR_14->pc;
      if (VAR_15 && (!VAR_17 || VAR_15 < VAR_17->pc))
 VAR_10.end = VAR_15;
      else if (VAR_17)
 VAR_10.end = VAR_17->pc;
      else
 VAR_10.end = FUNC_2 (FUNC_1 (VAR_11, VAR_0));
    }
  VAR_10.section = VAR_3;
  return VAR_10;
}
