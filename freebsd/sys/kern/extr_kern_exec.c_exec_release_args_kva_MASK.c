
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
struct exec_args_kva {scalar_t__ gen; scalar_t__ addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct exec_args_kva*,int ) ;
 int FUNC_2 (uintptr_t*,uintptr_t,uintptr_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct exec_args_kva *VAR_7, u_int VAR_8)
{
 vm_offset_t VAR_9;

 VAR_9 = VAR_7->addr;
 if (VAR_7->gen != VAR_8) {
  (void)FUNC_5(VAR_4, VAR_9, VAR_9 + VAR_5,
      VAR_0);
  VAR_7->gen = VAR_8;
 }
 if (!FUNC_2((uintptr_t *)FUNC_0(VAR_1),
     (uintptr_t)((void*)0), (uintptr_t)VAR_7)) {
  FUNC_3(&VAR_3);
  FUNC_1(&VAR_2, VAR_7, VAR_6);
  FUNC_6(&VAR_2);
  FUNC_4(&VAR_3);
 }
}
