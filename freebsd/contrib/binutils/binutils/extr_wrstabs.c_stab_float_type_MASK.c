
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* float_types; } ;
struct stab_write_handle {long type_index; TYPE_1__ type_cache; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,long,char*,unsigned int) ;
 int FUNC_2 (struct stab_write_handle*,int,int ) ;
 char* FUNC_3 (struct stab_write_handle*) ;
 int FUNC_4 (struct stab_write_handle*,scalar_t__,unsigned int) ;
 int FUNC_5 (struct stab_write_handle*,char*,long,int ,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_2, unsigned int VAR_3)
{
  struct stab_write_handle *VAR_4 = (struct stab_write_handle *) VAR_2;

  if (VAR_3 > 0
      && VAR_3 - 1 < (sizeof VAR_4->type_cache.float_types
       / sizeof VAR_4->type_cache.float_types[0])
      && VAR_4->type_cache.float_types[VAR_3 - 1] != 0)
    return FUNC_4 (VAR_4,
       VAR_4->type_cache.float_types[VAR_3 - 1],
       VAR_3);
  else
    {
      long VAR_5;
      char *VAR_6;
      char VAR_7[50];


      if (! FUNC_2 (VAR_4, 4, VAR_0))
 return VAR_0;
      VAR_6 = FUNC_3 (VAR_4);

      VAR_5 = VAR_4->type_index;
      ++VAR_4->type_index;

      if (VAR_3 > 0
   && VAR_3 - 1 < (sizeof VAR_4->type_cache.float_types
    / sizeof VAR_4->type_cache.float_types[0]))
 VAR_4->type_cache.float_types[VAR_3 - 1] = VAR_5;

      FUNC_1 (VAR_7, "%ld=r%s;%u;0;", VAR_5, VAR_6, VAR_3);

      FUNC_0 (VAR_6);

      return FUNC_5 (VAR_4, VAR_7, VAR_5, VAR_1, VAR_3);
    }
}
