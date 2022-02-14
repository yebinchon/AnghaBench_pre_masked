
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (void*,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (scalar_t__) ;
 int* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(vm_paddr_t VAR_9, int VAR_10, int VAR_11)
{

 if (&FUNC_2 && VAR_11 >= VAR_5 &&
     FUNC_2((void *)(VAR_9 + VAR_10), VAR_11, VAR_0) == 0)
  return;

 FUNC_7(&VAR_8);






 *VAR_6 = VAR_1 | VAR_9 | FUNC_0(VAR_3, VAR_4);
 FUNC_1(VAR_6);
 FUNC_6(VAR_7);
 FUNC_5();
 if (VAR_10 || VAR_11 != VAR_2)
  FUNC_3((void *)(VAR_7 + VAR_10), VAR_11);
 else
  FUNC_4(VAR_7);

 FUNC_8(&VAR_8);
}
