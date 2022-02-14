
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_runtime {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct gpio_runtime *VAR_4, int VAR_5)
{
 int VAR_6;

 if (FUNC_2(!VAR_4)) return;
 if (VAR_3 < 0)
  return;

 VAR_6 = FUNC_1(VAR_0, ((void*)0),
         VAR_3, 0);
 VAR_6 = FUNC_0(VAR_2, VAR_6, VAR_5);
 FUNC_1(VAR_1, ((void*)0),
     VAR_3, VAR_6);
}
