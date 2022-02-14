
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_hash_entry {long index; unsigned int size; } ;
struct stab_write_handle {long type_index; int typedef_hash; TYPE_1__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {long index; unsigned int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,char const*,...) ;
 char* FUNC_6 (struct stab_write_handle*) ;
 int FUNC_7 (struct stab_write_handle*,int ,int ,int ,char*) ;
 struct string_hash_entry* FUNC_8 (int *,char const*,int ,int ) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (void *VAR_3, const char *VAR_4)
{
  struct stab_write_handle *VAR_5 = (struct stab_write_handle *) VAR_3;
  long VAR_6;
  unsigned int VAR_7;
  char *VAR_8, *VAR_9;
  struct string_hash_entry *VAR_10;

  VAR_6 = VAR_5->type_stack->index;
  VAR_7 = VAR_5->type_stack->size;
  VAR_8 = FUNC_6 (VAR_5);

  VAR_9 = (char *) FUNC_10 (FUNC_9 (VAR_4) + FUNC_9 (VAR_8) + 20);

  if (VAR_6 > 0)
    FUNC_5 (VAR_9, "%s:t%s", VAR_4, VAR_8);
  else
    {
      VAR_6 = VAR_5->type_index;
      ++VAR_5->type_index;
      FUNC_5 (VAR_9, "%s:t%ld=%s", VAR_4, VAR_6, VAR_8);
    }

  FUNC_3 (VAR_8);

  if (! FUNC_7 (VAR_5, VAR_1, 0, 0, VAR_9))
    return VAR_0;

  FUNC_3 (VAR_9);

  VAR_10 = FUNC_8 (&VAR_5->typedef_hash, VAR_4, VAR_2, VAR_0);
  if (VAR_10 == ((void*)0))
    {
      FUNC_4 (FUNC_0("string_hash_lookup failed: %s"),
   FUNC_1 (FUNC_2 ()));
      return VAR_0;
    }



  VAR_10->index = VAR_6;
  VAR_10->size = VAR_7;

  return VAR_2;
}
