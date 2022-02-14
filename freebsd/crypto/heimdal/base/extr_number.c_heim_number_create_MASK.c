
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ heim_number_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;

heim_number_t
FUNC_2(int VAR_2)
{
    heim_number_t VAR_3;

    if (VAR_2 < 0xffffff && VAR_2 >= 0)
 return FUNC_1(VAR_2, VAR_0);

    VAR_3 = FUNC_0(&VAR_1, sizeof(int));
    if (VAR_3)
 *((int *)VAR_3) = VAR_2;
    return VAR_3;
}
