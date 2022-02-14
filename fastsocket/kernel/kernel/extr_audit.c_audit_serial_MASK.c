
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DEFINE_SPINLOCK ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

unsigned int FUNC_3(void)
{
 static DEFINE_SPINLOCK(VAR_0);
 static unsigned int VAR_1 = 0;

 unsigned long VAR_2;
 unsigned int VAR_3;

 FUNC_0(&VAR_0, VAR_2);
 do {
  VAR_3 = ++VAR_1;
 } while (FUNC_2(!VAR_3));
 FUNC_1(&VAR_0, VAR_2);

 return VAR_3;
}
