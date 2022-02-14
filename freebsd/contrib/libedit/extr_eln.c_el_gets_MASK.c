
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int el_lgcyconv; } ;
typedef TYPE_1__ EditLine ;


 scalar_t__ FUNC_0 (int const) ;
 char const* FUNC_1 (int const*,int *) ;
 int * FUNC_2 (TYPE_1__*,int*) ;

const char *
FUNC_3(EditLine *VAR_0, int *VAR_1)
{
 const wchar_t *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0)) {
     int VAR_3;
     size_t VAR_4 = 0;

     for (VAR_3 = 0; VAR_3 < *VAR_1; VAR_3++)
  VAR_4 += FUNC_0(VAR_2[VAR_3]);
     *VAR_1 = (int)VAR_4;
 }
 return FUNC_1(VAR_2, &VAR_0->el_lgcyconv);
}
