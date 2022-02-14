
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum event_type { ____Placeholder_event_type } event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static enum event_type FUNC_3(int VAR_8)
{
 if (VAR_8 == '\n')
  return VAR_3;
 if (FUNC_2(VAR_8))
  return VAR_6;
 if (FUNC_0(VAR_8) || VAR_8 == '_')
  return VAR_2;
 if (VAR_8 == '\'')
  return VAR_7;
 if (VAR_8 == '"')
  return VAR_1;
 if (!FUNC_1(VAR_8))
  return VAR_4;
 if (VAR_8 == '(' || VAR_8 == ')' || VAR_8 == ',')
  return VAR_0;

 return VAR_5;
}
