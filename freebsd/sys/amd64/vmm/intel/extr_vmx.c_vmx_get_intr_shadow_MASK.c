
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmx {int * vmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ,int*) ;

__attribute__((used)) static int
FUNC_2(struct vmx *VAR_2, int VAR_3, int VAR_4, uint64_t *VAR_5)
{
 uint64_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_2->vmcs[VAR_3], VAR_4,
     FUNC_0(VAR_1), &VAR_6);
 *VAR_5 = (VAR_6 & VAR_0) ? 1 : 0;
 return (VAR_7);
}
