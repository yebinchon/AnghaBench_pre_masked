
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct reg {scalar_t__ r_rsp; } ;
struct TYPE_3__ {int* ftp_argmap; int ftp_nargs; } ;
typedef TYPE_1__ fasttrap_probe_t ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(fasttrap_probe_t *VAR_0, struct reg *VAR_1, int VAR_2,
    uint32_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = FUNC_0(VAR_2, VAR_0->ftp_nargs);
 uint32_t *VAR_7 = (uint32_t *)VAR_1->r_rsp;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_5 = VAR_0->ftp_argmap[VAR_4];

  VAR_3[VAR_4] = FUNC_1(&VAR_7[VAR_5]);
 }

 for (; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4] = 0;
 }
}
