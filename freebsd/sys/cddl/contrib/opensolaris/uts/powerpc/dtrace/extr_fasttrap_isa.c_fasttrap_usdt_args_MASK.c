
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct reg {uintptr_t* fixreg; } ;
struct TYPE_3__ {int* ftp_argmap; int ftp_nargs; } ;
typedef TYPE_1__ fasttrap_probe_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 uintptr_t FUNC_2 (void*) ;
 uintptr_t FUNC_3 (void*) ;

__attribute__((used)) static void
FUNC_4(fasttrap_probe_t *VAR_2, struct reg *VAR_3, int VAR_4,
    uintptr_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = FUNC_0(VAR_4, VAR_2->ftp_nargs);

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = VAR_2->ftp_argmap[VAR_6];

  if (VAR_7 < 8)
   VAR_5[VAR_6] = VAR_3->fixreg[VAR_7];
  else
   if (FUNC_1(VAR_1, VAR_0))
    VAR_5[VAR_6] = FUNC_2((void *)(VAR_3->fixreg[1] + 8 +
        (VAR_7 * sizeof(uint32_t))));
   else
    VAR_5[VAR_6] = FUNC_3((void *)(VAR_3->fixreg[1] + 48 +
        (VAR_7 * sizeof(uint64_t))));
 }

 for (; VAR_6 < VAR_4; VAR_6++) {
  VAR_5[VAR_6] = 0;
 }
}
