
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int el_lgcyconv; } ;
typedef TYPE_1__ EditLine ;


 scalar_t__ FUNC_0 (int,char const**,int *) ;
 int FUNC_1 (int const**) ;
 int FUNC_2 (TYPE_1__*,int,int const**) ;

int
FUNC_3(EditLine *VAR_0, int VAR_1, const char *VAR_2[])
{
 int VAR_3;
 const wchar_t **VAR_4;

 VAR_4 = (void *)FUNC_0(VAR_1, VAR_2, &VAR_0->el_lgcyconv);
 if (!VAR_4)
  return -1;
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4);
 FUNC_1(VAR_4);

 return VAR_3;
}
