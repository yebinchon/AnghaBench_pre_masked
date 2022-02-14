
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int ** VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_0[VAR_2]) {
   FUNC_0(VAR_0[VAR_2]);
   FUNC_1(VAR_0[VAR_2]);
   VAR_0[VAR_2] = ((void*)0);
  }
 }

 return 0;
}
