
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ,long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void *
FUNC_5(void *VAR_3)
{
 long VAR_4 = *(int *)VAR_3;

 FUNC_2("2: Second thread (%p). Count is %ld\n", FUNC_4(), VAR_4);

 while (VAR_4--) {
  FUNC_0(FUNC_1(&VAR_1, &VAR_2));
  VAR_0++;
  FUNC_0(FUNC_3(&VAR_1));
 }

 return (void *)VAR_4;
}
