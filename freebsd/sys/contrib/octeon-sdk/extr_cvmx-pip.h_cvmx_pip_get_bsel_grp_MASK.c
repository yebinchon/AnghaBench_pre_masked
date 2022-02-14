
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cvmx_wqe_t ;
struct TYPE_3__ {int grp; } ;
struct TYPE_4__ {TYPE_1__ s; int u64; } ;
typedef TYPE_2__ cvmx_pip_bsel_tbl_entx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(cvmx_wqe_t *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_1);
    cvmx_pip_bsel_tbl_entx_t VAR_3;


    if (!FUNC_3(VAR_0))
        return -1;

    VAR_3.u64 = FUNC_2(FUNC_0(VAR_2));

    return VAR_3.s.grp;
}
