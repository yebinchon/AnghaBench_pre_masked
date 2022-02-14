
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int VAR_2 ;

__attribute__((used)) static void *
FUNC_6(void *VAR_3)
{
 FUNC_1("2: Second thread.\n");

 FUNC_1("2: Locking mutex\n");
 FUNC_0(FUNC_3(&VAR_1));
 FUNC_1("2: Got mutex.\n");
 VAR_2++;

 FUNC_0(FUNC_4(&VAR_1));
 FUNC_0(FUNC_2(&VAR_0));
 FUNC_5(1);

 return ((void*)0);
}
