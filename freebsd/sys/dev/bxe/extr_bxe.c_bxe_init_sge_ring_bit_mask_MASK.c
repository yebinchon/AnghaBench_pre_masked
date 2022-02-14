
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_fastpath {int sge_mask; } ;


 int FUNC_0 (struct bxe_fastpath*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static inline void
FUNC_2(struct bxe_fastpath *VAR_0)
{

    FUNC_1(VAR_0->sge_mask, 0xff, sizeof(VAR_0->sge_mask));






    FUNC_0(VAR_0);
}
