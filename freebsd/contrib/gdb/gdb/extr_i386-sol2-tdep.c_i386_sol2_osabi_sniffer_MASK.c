
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gdb_osabi { ____Placeholder_gdb_osabi } gdb_osabi ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static enum gdb_osabi
FUNC_1 (bfd *VAR_2)
{


  if (FUNC_0 (VAR_2, ".SUNW_version"))
    return VAR_0;

  return VAR_1;
}
