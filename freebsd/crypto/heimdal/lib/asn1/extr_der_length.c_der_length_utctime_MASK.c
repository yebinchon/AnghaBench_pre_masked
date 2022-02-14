
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {size_t length; int data; } ;
typedef TYPE_1__ heim_octet_string ;


 int FUNC_0 (int const,TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;

size_t
FUNC_2 (const time_t *VAR_0)
{
    heim_octet_string VAR_1;
    size_t VAR_2;

    FUNC_0 (*VAR_0, &VAR_1, 0);
    VAR_2 = VAR_1.length;
    FUNC_1(VAR_1.data);
    return VAR_2;
}
