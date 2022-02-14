
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(void)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2, 1);
 if (VAR_3) {
  FUNC_0("Failed to register TIPC protocol type\n");
  goto out;
 }

 VAR_3 = FUNC_3(&VAR_1);
 if (VAR_3) {
  FUNC_0("Failed to register TIPC socket type\n");
  FUNC_2(&VAR_2);
  goto out;
 }

 VAR_0 = 1;
 out:
 return VAR_3;
}
