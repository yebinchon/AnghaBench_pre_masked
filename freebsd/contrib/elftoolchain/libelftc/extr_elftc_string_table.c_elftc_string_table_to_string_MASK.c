
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* st_string_pool; } ;
typedef TYPE_1__ Elftc_String_Table ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

const char *
FUNC_1(Elftc_String_Table *VAR_2, size_t VAR_3)
{
 const char *VAR_4;

 VAR_4 = VAR_2->st_string_pool + VAR_3;







 if (VAR_3 == 0 || VAR_3 >= FUNC_0(VAR_2) ||
     *VAR_4 == '\0' || *(VAR_4 - 1) != '\0') {
  VAR_1 = VAR_0;
  return (((void*)0));
 }

 return (VAR_4);
}
