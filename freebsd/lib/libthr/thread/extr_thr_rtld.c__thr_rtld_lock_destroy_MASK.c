
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtld_lock {int dummy; } ;


 int VAR_0 ;
 struct rtld_lock* VAR_1 ;

__attribute__((used)) static void
FUNC_0(void *VAR_2)
{
 int VAR_3;
 size_t VAR_4;

 VAR_3 = (struct rtld_lock *)VAR_2 - &VAR_1[0];
 for (VAR_4 = 0; VAR_4 < sizeof(struct rtld_lock); ++VAR_4)
  ((char *)VAR_2)[VAR_4] = 0;
 VAR_0 &= ~(1 << VAR_3);
}
