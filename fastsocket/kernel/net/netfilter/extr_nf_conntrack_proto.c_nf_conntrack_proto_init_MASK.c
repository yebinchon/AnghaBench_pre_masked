
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(void)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_3[VAR_4],
       &VAR_1);
 return 0;
}
