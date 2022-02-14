
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum quoting_style { ____Placeholder_quoting_style } quoting_style ;


 char* FUNC_0 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static char const *
FUNC_1 (char const *VAR_1, enum quoting_style VAR_2)
{
  char const *VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 == VAR_1 && VAR_2 == VAR_0)
    VAR_3 = "\"";
  return VAR_3;
}
