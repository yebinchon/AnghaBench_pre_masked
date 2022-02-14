
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pd_name; char* pd_colname; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 char const FUNC_2 (char const) ;

__attribute__((used)) static boolean_t
FUNC_3(const char *VAR_2, size_t VAR_3, zprop_desc_t *VAR_4)
{
 const char *VAR_5 = VAR_4->pd_name;

 const char *VAR_6 = VAR_4->pd_colname;
 int VAR_7;


 if (VAR_3 == FUNC_0(VAR_5) &&
     FUNC_1(VAR_2, VAR_5, VAR_3) == 0)
  return (VAR_1);


 if (VAR_6 == ((void*)0) || VAR_3 != FUNC_0(VAR_6))
  return (VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  if (VAR_2[VAR_7] != FUNC_2(VAR_6[VAR_7]))
   break;

 return (VAR_6[VAR_7] == '\0');



}
