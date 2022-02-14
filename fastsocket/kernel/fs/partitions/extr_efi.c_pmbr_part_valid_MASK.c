
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition {scalar_t__ sys_ind; int start_sect; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(struct partition *VAR_1)
{
        if (VAR_1->sys_ind == VAR_0 &&
            FUNC_0(VAR_1->start_sect) == 1UL)
                return 1;
        return 0;
}
