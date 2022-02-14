
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rk_strpool {int dummy; } ;
struct TYPE_3__ {size_t length; char* components; } ;
typedef TYPE_1__ heim_oid ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct rk_strpool*) ;
 struct rk_strpool* FUNC_1 (struct rk_strpool*,char*,char) ;

int
FUNC_2 (const heim_oid *VAR_2, char VAR_3, char **VAR_4)
{
    struct rk_strpool *VAR_5 = ((void*)0);
    size_t VAR_6;

    if (VAR_2->length == 0)
 return VAR_0;

    for (VAR_6 = 0; VAR_6 < VAR_2->length ; VAR_6++) {
 VAR_5 = FUNC_1(VAR_5, "%d", VAR_2->components[VAR_6]);
 if (VAR_5 && VAR_6 < VAR_2->length - 1)
     VAR_5 = FUNC_1(VAR_5, "%c", VAR_3);
 if (VAR_5 == ((void*)0)) {
     *VAR_4 = ((void*)0);
     return VAR_1;
 }
    }

    *VAR_4 = FUNC_0(VAR_5);
    if (*VAR_4 == ((void*)0))
 return VAR_1;
    return 0;
}
