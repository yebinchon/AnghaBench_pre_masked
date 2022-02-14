
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_fastpath {int * sb_running_index; int fp_hc_idx; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1(struct bxe_fastpath *VAR_1)
{
    FUNC_0();
    VAR_1->fp_hc_idx = VAR_1->sb_running_index[VAR_0];
}
