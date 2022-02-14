
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
struct stab_demangle_typestring {int dummy; } ;
struct stab_demangle_info {int typestring_alloc; struct stab_demangle_typestring* typestrings; int * args; int varargs; scalar_t__ typestring_count; struct stab_handle* info; void* dhandle; } ;
typedef int debug_type ;
typedef int bfd_boolean ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct stab_demangle_typestring*) ;
 int FUNC_3 (struct stab_demangle_info*,char const**,unsigned int) ;
 int FUNC_4 (struct stab_demangle_info*,char const**) ;
 int * FUNC_5 (void*,struct stab_handle*,char const*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static debug_type *
FUNC_7 (void *VAR_2, struct stab_handle *VAR_3,
   const char *VAR_4, bfd_boolean *VAR_5,
   unsigned int VAR_6)
{
  struct stab_demangle_info VAR_7;


  if (VAR_4[0] == '_' && VAR_4[1] == 'Z')
    return FUNC_5 (VAR_2, VAR_3, VAR_4, VAR_5);

  VAR_7.dhandle = VAR_2;
  VAR_7.info = VAR_3;
  VAR_7.args = ((void*)0);
  VAR_7.varargs = VAR_0;
  VAR_7.typestring_alloc = 10;
  VAR_7.typestrings = ((struct stab_demangle_typestring *)
         FUNC_6 (VAR_7.typestring_alloc
    * sizeof *VAR_7.typestrings));
  VAR_7.typestring_count = 0;




  if (! FUNC_3 (&VAR_7, &VAR_4, VAR_6))
    goto error_return;

  if (*VAR_4 != '\0')
    {
      if (! FUNC_4 (&VAR_7, &VAR_4))
 goto error_return;
    }

  FUNC_2 (VAR_7.typestrings);
  VAR_7.typestrings = ((void*)0);

  if (VAR_7.args == ((void*)0))
    FUNC_1 (VAR_1, "%s", FUNC_0("no argument types in mangled string\n"));

  *VAR_5 = VAR_7.varargs;
  return VAR_7.args;

 error_return:
  if (VAR_7.typestrings != ((void*)0))
    FUNC_2 (VAR_7.typestrings);
  return ((void*)0);
}
