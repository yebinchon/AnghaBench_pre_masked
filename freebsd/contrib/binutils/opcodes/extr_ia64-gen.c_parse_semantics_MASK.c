
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_8)
{
  if (FUNC_0 (VAR_8, "none") == 0)
    return VAR_4;
  else if (FUNC_0 (VAR_8, "implied") == 0)
    return VAR_1;
  else if (FUNC_0 (VAR_8, "impliedF") == 0)
    return VAR_2;
  else if (FUNC_0 (VAR_8, "data") == 0)
    return VAR_0;
  else if (FUNC_0 (VAR_8, "instr") == 0)
    return VAR_3;
  else if (FUNC_0 (VAR_8, "specific") == 0)
    return VAR_6;
  else if (FUNC_0 (VAR_8, "stop") == 0)
    return VAR_7;
  else
    return VAR_5;
}
