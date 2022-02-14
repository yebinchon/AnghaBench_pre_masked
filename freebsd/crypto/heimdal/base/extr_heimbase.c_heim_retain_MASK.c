
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heim_base {scalar_t__ ref_cnt; } ;


 struct heim_base* FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (void*) ;

void *
FUNC_4(void *VAR_1)
{
    struct heim_base *VAR_2 = FUNC_0(VAR_1);

    if (VAR_1 == ((void*)0) || FUNC_3(VAR_1))
 return VAR_1;

    if (VAR_2->ref_cnt == VAR_0)
 return VAR_1;

    if ((FUNC_2(&VAR_2->ref_cnt) - 1) == 0)
 FUNC_1("resurection");
    return VAR_1;
}
