
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {int dummy; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef int bfd_boolean ;


 int VAR_0 ;
 long FUNC_0 (struct stab_write_handle*,char const*,unsigned int,int,unsigned int*) ;
 int FUNC_1 (struct stab_write_handle*,long,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_1, const char *VAR_2, unsigned int VAR_3,
        enum debug_type_kind VAR_4)
{
  struct stab_write_handle *VAR_5 = (struct stab_write_handle *) VAR_1;
  long VAR_6;
  unsigned int VAR_7 = 0;

  VAR_6 = FUNC_0 (VAR_5, VAR_2, VAR_3, VAR_4, &VAR_7);
  if (VAR_6 < 0)
    return VAR_0;

  return FUNC_1 (VAR_5, VAR_6, VAR_7);
}
