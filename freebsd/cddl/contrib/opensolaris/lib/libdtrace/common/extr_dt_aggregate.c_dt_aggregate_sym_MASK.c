
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {int st_value; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ FUNC_0 (int *,int ,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_1(dtrace_hdl_t *VAR_0, uint64_t *VAR_1)
{
 GElf_Sym VAR_2;
 uint64_t *VAR_3 = VAR_1;

 if (FUNC_0(VAR_0, *VAR_3, &VAR_2, ((void*)0)) == 0)
  *VAR_3 = VAR_2.st_value;
}
