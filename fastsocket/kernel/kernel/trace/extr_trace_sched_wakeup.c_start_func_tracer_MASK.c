
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  VAR_5 = FUNC_0(&VAR_0);
 else
  VAR_5 = FUNC_1(&VAR_3,
         &VAR_2);

 if (!VAR_5 && FUNC_2())
  VAR_1 = 1;
 else
  VAR_1 = 0;

 return VAR_5;
}
