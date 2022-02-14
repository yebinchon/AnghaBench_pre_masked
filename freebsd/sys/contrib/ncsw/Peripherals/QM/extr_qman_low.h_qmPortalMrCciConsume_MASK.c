
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qm_mr {scalar_t__ cmode; int ci; } ;
struct qm_portal {struct qm_mr mr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static __inline__ void FUNC_2(struct qm_portal *VAR_3, uint8_t VAR_4)
{
    register struct qm_mr *VAR_5 = &VAR_3->mr;



    VAR_5->ci = (uint8_t)((VAR_5->ci + VAR_4) & (VAR_1 - 1));
    FUNC_1(VAR_0, VAR_5->ci);
}
