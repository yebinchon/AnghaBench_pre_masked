
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_fastpath {int sge_mask; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_1(struct bxe_fastpath *VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
        int VAR_5 = VAR_1 * VAR_3 - 1;

        for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
            FUNC_0(VAR_2->sge_mask, VAR_5);
            VAR_5--;
        }
    }
}
