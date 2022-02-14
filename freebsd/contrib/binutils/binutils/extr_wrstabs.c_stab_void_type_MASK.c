
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ void_type; } ;
struct stab_write_handle {long type_index; TYPE_1__ type_cache; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,long,long) ;
 int FUNC_1 (struct stab_write_handle*,scalar_t__,int ) ;
 int FUNC_2 (struct stab_write_handle*,char*,long,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_1)
{
  struct stab_write_handle *VAR_2 = (struct stab_write_handle *) VAR_1;

  if (VAR_2->type_cache.void_type != 0)
    return FUNC_1 (VAR_2, VAR_2->type_cache.void_type, 0);
  else
    {
      long VAR_3;
      char VAR_4[40];

      VAR_3 = VAR_2->type_index;
      ++VAR_2->type_index;

      VAR_2->type_cache.void_type = VAR_3;

      FUNC_0 (VAR_4, "%ld=%ld", VAR_3, VAR_3);

      return FUNC_2 (VAR_2, VAR_4, VAR_3, VAR_0, 0);
    }
}
