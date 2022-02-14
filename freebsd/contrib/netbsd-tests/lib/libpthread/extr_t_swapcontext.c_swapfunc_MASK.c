
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{




 VAR_1 = (void *)FUNC_3();
 FUNC_2("after swapcontext self = %p\n", VAR_1);

 FUNC_1(VAR_3, VAR_1);
 FUNC_2("Test succeeded\n");

 FUNC_0(FUNC_4(&VAR_0, &VAR_2));


 return;
}
