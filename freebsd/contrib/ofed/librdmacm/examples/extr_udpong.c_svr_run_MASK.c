
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int *,int*) ;

__attribute__((used)) static int FUNC_3(void)
{
 ssize_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0();
 while (!VAR_4) {
  VAR_1 = sizeof VAR_0;
  VAR_3 = FUNC_2(&VAR_2, sizeof VAR_2, &VAR_0, &VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_4 = FUNC_1(&VAR_2, VAR_3, &VAR_0, VAR_1);
 }
 return VAR_4;
}
