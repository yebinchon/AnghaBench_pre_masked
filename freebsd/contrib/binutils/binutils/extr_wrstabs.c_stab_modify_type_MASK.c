
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {long type_index; TYPE_1__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {long index; int definition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (long*,int ,size_t) ;
 int FUNC_3 (char*,char*,long,...) ;
 char* FUNC_4 (struct stab_write_handle*) ;
 int FUNC_5 (struct stab_write_handle*,long,unsigned int) ;
 int FUNC_6 (struct stab_write_handle*,char*,long,int ,unsigned int) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (long*,size_t) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (struct stab_write_handle *VAR_2, int VAR_3,
    unsigned int VAR_4, long **VAR_5, size_t *VAR_6)
{
  long VAR_7;
  long VAR_8;
  char *VAR_9, *VAR_10;

  FUNC_0 (VAR_2->type_stack != ((void*)0));
  VAR_7 = VAR_2->type_stack->index;

  if (VAR_7 <= 0
      || VAR_5 == ((void*)0))
    {
      bfd_boolean VAR_11;




      VAR_11 = VAR_2->type_stack->definition;
      VAR_9 = FUNC_4 (VAR_2);
      VAR_10 = (char *) FUNC_8 (FUNC_7 (VAR_9) + 2);
      FUNC_3 (VAR_10, "%c%s", VAR_3, VAR_9);
      FUNC_1 (VAR_9);
      if (! FUNC_6 (VAR_2, VAR_10, 0, VAR_11, VAR_4))
 return VAR_0;
      FUNC_1 (VAR_10);
    }
  else
    {
      if ((size_t) VAR_7 >= *VAR_6)
 {
   size_t VAR_12;

   VAR_12 = *VAR_6;
   if (VAR_12 == 0)
     VAR_12 = 10;
   while ((size_t) VAR_7 >= VAR_12)
     VAR_12 *= 2;
   *VAR_5 = (long *) FUNC_9 (*VAR_5, VAR_12 * sizeof (long));
   FUNC_2 (*VAR_5 + *VAR_6, 0,
    (VAR_12 - *VAR_6) * sizeof (long));
   *VAR_6 = VAR_12;
 }

      VAR_8 = (*VAR_5)[VAR_7];
      if (VAR_8 != 0 && ! VAR_2->type_stack->definition)
 {






   FUNC_1 (FUNC_4 (VAR_2));
   if (! FUNC_5 (VAR_2, VAR_8, VAR_4))
     return VAR_0;
 }
      else
 {
   VAR_8 = VAR_2->type_index;
   ++VAR_2->type_index;

   VAR_9 = FUNC_4 (VAR_2);
   VAR_10 = (char *) FUNC_8 (FUNC_7 (VAR_9) + 20);
   FUNC_3 (VAR_10, "%ld=%c%s", VAR_8, VAR_3, VAR_9);
   FUNC_1 (VAR_9);

   (*VAR_5)[VAR_7] = VAR_8;

   if (! FUNC_6 (VAR_2, VAR_10, VAR_8, VAR_1, VAR_4))
     return VAR_0;

   FUNC_1 (VAR_10);
 }
    }

  return VAR_1;
}
