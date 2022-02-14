
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct reg {scalar_t__* fixreg; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;

__attribute__((used)) static uint64_t
FUNC_5(struct reg *VAR_4, int VAR_5)
{
 uint64_t VAR_6;
 proc_t *VAR_7 = VAR_3;


 if (VAR_5 < 8)
  return VAR_4->fixreg[VAR_5 + 3];


 if (FUNC_2(VAR_7, VAR_2)) {
  FUNC_1(VAR_1);
  VAR_6 = FUNC_3((void *)(VAR_4->fixreg[1] + 8 +
      ((VAR_5 - 8) * sizeof(uint32_t))));
  FUNC_0(VAR_1 | VAR_0);
 } else {
  FUNC_1(VAR_1);
  VAR_6 = FUNC_4((void *)(VAR_4->fixreg[1] + 48 +
      ((VAR_5 - 8) * sizeof(uint64_t))));
  FUNC_0(VAR_1 | VAR_0);
 }
 return VAR_6;
}
