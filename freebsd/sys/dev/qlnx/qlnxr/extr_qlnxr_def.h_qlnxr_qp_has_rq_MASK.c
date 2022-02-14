
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_qp {scalar_t__ qp_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct qlnxr_qp*) ;

__attribute__((used)) static inline bool FUNC_1(struct qlnxr_qp *VAR_1)
{
        if (VAR_1->qp_type == VAR_0 || FUNC_0(VAR_1))
                return 0;

        return 1;
}
