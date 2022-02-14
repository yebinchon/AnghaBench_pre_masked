
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {long type_index; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,long,long,unsigned int) ;
 int FUNC_1 (struct stab_write_handle*,char*,long,int ,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_1, unsigned int VAR_2)
{
  struct stab_write_handle *VAR_3 = (struct stab_write_handle *) VAR_1;
  char VAR_4[50];
  long VAR_5;

  VAR_5 = VAR_3->type_index;
  ++VAR_3->type_index;

  FUNC_0 (VAR_4, "%ld=r%ld;%u;0;", VAR_5, VAR_5, VAR_2);

  return FUNC_1 (VAR_3, VAR_4, VAR_5, VAR_0, VAR_2 * 2);
}
