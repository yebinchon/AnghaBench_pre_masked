
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum debug_struct_file { ____Placeholder_debug_struct_file } debug_struct_file ;
typedef enum debug_info_usage { ____Placeholder_debug_info_usage } debug_info_usage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_1 (char*,...) ;

void
FUNC_2 (const char *VAR_10)
{

  static char VAR_11[] = "dfn:", VAR_12[] = "dir:", VAR_13[] = "ind:";
  static char VAR_14[] = "ord:", VAR_15[] = "gen:";
  static char VAR_16[] = "none", VAR_17[] = "any";
  static char VAR_18[] = "base", VAR_19[] = "sys";

  enum debug_struct_file VAR_20 = VAR_0;

  enum debug_info_usage VAR_21 = VAR_7;
  int VAR_22 = 1, VAR_23 = 1;


  if (FUNC_0 (VAR_11, VAR_10))
    VAR_21 = VAR_4;
  else if (FUNC_0 (VAR_12, VAR_10))
    VAR_21 = VAR_5;
  else if (FUNC_0 (VAR_13, VAR_10))
    VAR_21 = VAR_6;


  if (FUNC_0 (VAR_14, VAR_10))
    VAR_23 = 0;
  else if (FUNC_0 (VAR_15, VAR_10))
    VAR_22 = 0;


  if (FUNC_0 (VAR_16, VAR_10))
    VAR_20 = VAR_2;
  else if (FUNC_0 (VAR_17, VAR_10))
    VAR_20 = VAR_0;
  else if (FUNC_0 (VAR_19, VAR_10))
    VAR_20 = VAR_3;
  else if (FUNC_0 (VAR_18, VAR_10))
    VAR_20 = VAR_1;
  else
    FUNC_1 ("argument %qs to %<-femit-struct-debug-detailed%> not recognized",
           VAR_10);


  if (VAR_21 == VAR_7)
    {
      if (VAR_22)
        {
          VAR_9[VAR_4] = VAR_20;
          VAR_9[VAR_5] = VAR_20;
          VAR_9[VAR_6] = VAR_20;
        }
      if (VAR_23)
        {
          VAR_8[VAR_4] = VAR_20;
          VAR_8[VAR_5] = VAR_20;
          VAR_8[VAR_6] = VAR_20;
        }
    }
  else
    {
      if (VAR_22)
        VAR_9[VAR_21] = VAR_20;
      if (VAR_23)
        VAR_8[VAR_21] = VAR_20;
    }

  if (*VAR_10 == ',')
    FUNC_2 (VAR_10+1);
  else
    {


      if (*VAR_10 != '\0')
 FUNC_1 ("argument %qs to %<-femit-struct-debug-detailed%> unknown",
               VAR_10);
      if (VAR_9[VAR_5]
  < VAR_9[VAR_6]
   || VAR_8[VAR_5]
  < VAR_8[VAR_6])
 FUNC_1 ("%<-femit-struct-debug-detailed=dir:...%> must allow at least"
               " as much as %<-femit-struct-debug-detailed=ind:...%>");
    }
}
