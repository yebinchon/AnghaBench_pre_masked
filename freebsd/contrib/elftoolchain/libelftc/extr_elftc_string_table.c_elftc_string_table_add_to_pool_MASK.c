
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t st_string_pool_size; char* st_string_pool; } ;
typedef TYPE_1__ Elftc_String_Table ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char*,size_t) ;
 size_t FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(Elftc_String_Table *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_5(VAR_2) + 1;
 VAR_6 = FUNC_0(VAR_1);


 if (VAR_6 + VAR_4 >= VAR_1->st_string_pool_size) {
  VAR_5 = FUNC_4(VAR_1->st_string_pool_size +
      VAR_0,
      VAR_0);
  if ((VAR_3 = FUNC_3(VAR_1->st_string_pool, VAR_5)) ==
      ((void*)0))
   return (0);
  VAR_1->st_string_pool = VAR_3;
  VAR_1->st_string_pool_size = VAR_5;
 }

 FUNC_2(VAR_1->st_string_pool + VAR_6, VAR_2, VAR_4);
 FUNC_1(VAR_1, VAR_6 + VAR_4);

 return (VAR_6);
}
