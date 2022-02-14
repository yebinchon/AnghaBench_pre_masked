
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = *(int *)VAR_2;

 VAR_1 = 0;
 VAR_3 = FUNC_2(VAR_0, 0);
 FUNC_0(VAR_1 == 0);

 if (VAR_3 != VAR_4)
  FUNC_1("nice(3) value was not propagated to threads");

 return ((void*)0);
}
