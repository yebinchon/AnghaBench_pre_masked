
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* iflib_fl_t ;
typedef int * caddr_t ;
struct TYPE_5__ {int ** ifsd_cl; int ** ifsd_m; } ;
struct TYPE_6__ {int ifl_size; TYPE_1__ ifl_sds; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(iflib_fl_t VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_1->ifl_size;
 caddr_t VAR_5;


 VAR_3 = (VAR_2 + VAR_0) & (VAR_4-1);
 FUNC_1(VAR_1->ifl_sds.ifsd_m[VAR_3]);
 FUNC_1(VAR_1->ifl_sds.ifsd_cl[VAR_3]);
 VAR_5 = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_5);
 FUNC_1(VAR_1->ifl_sds.ifsd_m[(VAR_2 + 1) & (VAR_4-1)]);
 FUNC_1(VAR_1->ifl_sds.ifsd_m[(VAR_2 + 2) & (VAR_4-1)]);
 FUNC_1(VAR_1->ifl_sds.ifsd_m[(VAR_2 + 3) & (VAR_4-1)]);
 FUNC_1(VAR_1->ifl_sds.ifsd_m[(VAR_2 + 4) & (VAR_4-1)]);
 FUNC_1(VAR_1->ifl_sds.ifsd_cl[(VAR_2 + 1) & (VAR_4-1)]);
 FUNC_1(VAR_1->ifl_sds.ifsd_cl[(VAR_2 + 2) & (VAR_4-1)]);
 FUNC_1(VAR_1->ifl_sds.ifsd_cl[(VAR_2 + 3) & (VAR_4-1)]);
 FUNC_1(VAR_1->ifl_sds.ifsd_cl[(VAR_2 + 4) & (VAR_4-1)]);
}
