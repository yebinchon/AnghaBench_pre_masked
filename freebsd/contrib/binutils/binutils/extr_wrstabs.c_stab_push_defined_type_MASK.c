
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,long) ;
 int FUNC_1 (struct stab_write_handle*,char*,long,int ,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct stab_write_handle *VAR_1, long VAR_2,
   unsigned int VAR_3)
{
  char VAR_4[20];

  FUNC_0 (VAR_4, "%ld", VAR_2);
  return FUNC_1 (VAR_1, VAR_4, VAR_2, VAR_0, VAR_3);
}
