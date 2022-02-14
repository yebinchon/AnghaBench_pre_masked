
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gdb_osabi { ____Placeholder_gdb_osabi } gdb_osabi ;


 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;

const char *
FUNC_0 (enum gdb_osabi VAR_3)
{
  if (VAR_3 >= VAR_1 && VAR_3 < VAR_0)
    return VAR_2[VAR_3];

  return VAR_2[VAR_0];
}
