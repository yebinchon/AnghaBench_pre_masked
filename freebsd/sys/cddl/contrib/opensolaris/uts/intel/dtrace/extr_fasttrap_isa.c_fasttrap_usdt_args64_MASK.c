
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct reg {uintptr_t r_rdi; scalar_t__ r_rsp; } ;
struct TYPE_3__ {int* ftp_argmap; int ftp_nargs; } ;
typedef TYPE_1__ fasttrap_probe_t ;


 int FUNC_0 (int,int ) ;
 uintptr_t FUNC_1 (uintptr_t*) ;

__attribute__((used)) static void
FUNC_2(fasttrap_probe_t *VAR_0, struct reg *VAR_1, int VAR_2,
    uintptr_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = FUNC_0(VAR_2, VAR_0->ftp_nargs);
 uintptr_t *VAR_7 = (uintptr_t *)VAR_1->r_rsp;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_5 = VAR_0->ftp_argmap[VAR_4];

  if (VAR_5 < 6)
   VAR_3[VAR_4] = (&VAR_1->r_rdi)[VAR_5];
  else
   VAR_3[VAR_4] = FUNC_1(&VAR_7[VAR_5]);
 }

 for (; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4] = 0;
 }
}
