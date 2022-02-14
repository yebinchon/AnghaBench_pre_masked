
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static void *
FUNC_4(void *VAR_3)
{
 int VAR_4;

 FUNC_1(FUNC_3(&VAR_0, VAR_1));

 VAR_4 = *(int *)VAR_3;
 FUNC_2("Thread %d sees x with value %d\n", VAR_4, VAR_2);
 FUNC_0(VAR_2, 2);

 return ((void*)0);
}
