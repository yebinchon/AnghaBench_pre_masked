
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct exec_args_kva {int addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct exec_args_kva* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,char*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

__attribute__((used)) static vm_offset_t
FUNC_7(void **VAR_4)
{
 struct exec_args_kva *VAR_5;

 VAR_5 = (void *)FUNC_3(
     (uintptr_t *)FUNC_0(VAR_0));
 if (VAR_5 == ((void*)0)) {
  FUNC_4(&VAR_2);
  while ((VAR_5 = FUNC_1(&VAR_1)) == ((void*)0))
   (void)FUNC_5(&VAR_1,
       &VAR_2, 0, "execkva", 0);
  FUNC_2(&VAR_1, VAR_3);
  FUNC_6(&VAR_2);
 }
 *(struct exec_args_kva **)VAR_4 = VAR_5;
 return (VAR_5->addr);
}
