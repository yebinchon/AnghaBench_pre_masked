
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long* signed_integer_types; long* unsigned_integer_types; } ;
struct stab_write_handle {long type_index; TYPE_1__ type_cache; } ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (char*,char*,long,...) ;
 scalar_t__ FUNC_4 (struct stab_write_handle*,long,unsigned int) ;
 scalar_t__ FUNC_5 (struct stab_write_handle*,char*,long,int ,unsigned int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_2, unsigned int VAR_3, bfd_boolean VAR_4)
{
  struct stab_write_handle *VAR_5 = (struct stab_write_handle *) VAR_2;
  long *VAR_6;

  if (VAR_3 <= 0 || (VAR_3 > sizeof (long) && VAR_3 != 8))
    {
      FUNC_2 (FUNC_0("stab_int_type: bad size %u"), VAR_3);
      return VAR_0;
    }

  if (VAR_4)
    VAR_6 = VAR_5->type_cache.signed_integer_types;
  else
    VAR_6 = VAR_5->type_cache.unsigned_integer_types;

  if (VAR_6[VAR_3 - 1] != 0)
    return FUNC_4 (VAR_5, VAR_6[VAR_3 - 1], VAR_3);
  else
    {
      long VAR_7;
      char VAR_8[100];

      VAR_7 = VAR_5->type_index;
      ++VAR_5->type_index;

      VAR_6[VAR_3 - 1] = VAR_7;

      FUNC_3 (VAR_8, "%ld=r%ld;", VAR_7, VAR_7);
      if (VAR_4)
 {
   FUNC_6 (VAR_8, "0;");
   if (VAR_3 < sizeof (long))
     FUNC_3 (VAR_8 + FUNC_7 (VAR_8), "%ld;", ((long) 1 << (VAR_3 * 8)) - 1);
   else if (VAR_3 == sizeof (long))
     FUNC_6 (VAR_8, "-1;");
   else if (VAR_3 == 8)
     FUNC_6 (VAR_8, "01777777777777777777777;");
   else
     FUNC_1 ();
 }
      else
 {
   if (VAR_3 <= sizeof (long))
     FUNC_3 (VAR_8 + FUNC_7 (VAR_8), "%ld;%ld;",
       (long) - ((unsigned long) 1 << (VAR_3 * 8 - 1)),
       (long) (((unsigned long) 1 << (VAR_3 * 8 - 1)) - 1));
   else if (VAR_3 == 8)
     FUNC_6 (VAR_8, "01000000000000000000000;0777777777777777777777;");
   else
     FUNC_1 ();
 }

      return FUNC_5 (VAR_5, VAR_8, VAR_7, VAR_1, VAR_3);
    }
}
