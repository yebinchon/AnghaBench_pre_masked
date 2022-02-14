
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmx {int * vmcs; int vm; } ;
struct seg_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int,struct seg_desc*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, int VAR_2, int VAR_3, struct seg_desc *VAR_4)
{
 int VAR_5, VAR_6;
 struct vmx *VAR_7 = VAR_1;

 VAR_6 = FUNC_1(VAR_7->vm, VAR_2, &VAR_5);
 if (VAR_6 && VAR_5 != VAR_0)
  FUNC_0("vmx_setdesc: %s%d is running", FUNC_2(VAR_7->vm), VAR_2);

 return (FUNC_3(&VAR_7->vmcs[VAR_2], VAR_6, VAR_3, VAR_4));
}
