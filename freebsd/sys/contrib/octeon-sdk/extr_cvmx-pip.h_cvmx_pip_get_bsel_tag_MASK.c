
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cvmx_wqe_t ;
struct TYPE_7__ {scalar_t__ inc_prt_flag; } ;
struct TYPE_10__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_4__ cvmx_pip_prt_tagx_t ;
struct TYPE_8__ {int tag; } ;
struct TYPE_11__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_5__ cvmx_pip_bsel_tbl_entx_t ;
struct TYPE_9__ {int upper_tag; int tag; } ;
struct TYPE_12__ {TYPE_3__ s; void* u64; } ;
typedef TYPE_6__ cvmx_pip_bsel_ext_cfgx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(cvmx_wqe_t *VAR_1)
{
    int VAR_2 = FUNC_3(VAR_1);
    int VAR_3 = FUNC_5(VAR_1);
    int VAR_4 = VAR_3 & 0x3;
    int VAR_5 = 0;
    cvmx_pip_bsel_tbl_entx_t VAR_6;
    cvmx_pip_bsel_ext_cfgx_t VAR_7;
    cvmx_pip_prt_tagx_t VAR_8;


    if (!FUNC_6(VAR_0))
        return -1;

    VAR_6.u64 = FUNC_4(FUNC_1(VAR_2));
    VAR_7.u64 = FUNC_4(FUNC_0(VAR_4));

    VAR_8.u64 = FUNC_4(FUNC_2(VAR_3));
    if (VAR_8.s.inc_prt_flag == 0)
        VAR_5 = VAR_7.s.upper_tag;
    return (VAR_6.s.tag | ((VAR_7.s.tag << 8) & 0xff00) | ((VAR_5 << 16) & 0xffff0000));
}
