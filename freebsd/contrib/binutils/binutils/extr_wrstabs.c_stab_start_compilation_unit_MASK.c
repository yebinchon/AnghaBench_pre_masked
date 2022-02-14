
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {char const* lineno_filename; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (struct stab_write_handle*,int ,int ,int ,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (void *VAR_1, const char *VAR_2)
{
  struct stab_write_handle *VAR_3 = (struct stab_write_handle *) VAR_1;






  VAR_3->lineno_filename = VAR_2;

  return FUNC_0 (VAR_3, VAR_0, 0, 0, VAR_2);
}
