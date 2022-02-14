
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ heim_base_atomic_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline heim_base_atomic_type
FUNC_2(heim_base_atomic_type *VAR_1)
{
    heim_base_atomic_type VAR_2;
    FUNC_0(&VAR_0);
    VAR_2 = ++(*VAR_1);
    FUNC_1(&VAR_0);
    return VAR_2;
}
