
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmx {int * vmcs; int * ctx; int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (struct vmx*,int,int,int *) ;
 scalar_t__ FUNC_5 (int *,int,int *) ;

__attribute__((used)) static int
FUNC_6(void *VAR_2, int VAR_3, int VAR_4, uint64_t *VAR_5)
{
 int VAR_6, VAR_7;
 struct vmx *VAR_8 = VAR_2;

 VAR_6 = FUNC_1(VAR_8->vm, VAR_3, &VAR_7);
 if (VAR_6 && VAR_7 != VAR_1)
  FUNC_0("vmx_getreg: %s%d is running", FUNC_2(VAR_8->vm), VAR_3);

 if (VAR_4 == VAR_0)
  return (FUNC_4(VAR_8, VAR_3, VAR_6, VAR_5));

 if (FUNC_5(&VAR_8->ctx[VAR_3], VAR_4, VAR_5) == 0)
  return (0);

 return (FUNC_3(&VAR_8->vmcs[VAR_3], VAR_6, VAR_4, VAR_5));
}
