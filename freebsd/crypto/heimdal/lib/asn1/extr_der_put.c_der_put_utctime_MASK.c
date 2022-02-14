
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ heim_octet_string ;


 int FUNC_0 (int const,TYPE_1__*,int ) ;
 int FUNC_1 (unsigned char*,size_t,TYPE_1__*,size_t*) ;
 int FUNC_2 (int ) ;

int
FUNC_3 (unsigned char *VAR_0, size_t VAR_1,
   const time_t *VAR_2, size_t *VAR_3)
{
    heim_octet_string VAR_4;
    size_t VAR_5;
    int VAR_6;

    VAR_6 = FUNC_0 (*VAR_2, &VAR_4, 0);
    if (VAR_6)
 return VAR_6;
    VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_4, &VAR_5);
    FUNC_2(VAR_4.data);
    if(VAR_6)
 return VAR_6;
    if(VAR_3)
 *VAR_3 = VAR_5;
    return 0;
}
