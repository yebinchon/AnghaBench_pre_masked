
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt_mutex*) ;
 int FUNC_1 (struct rt_mutex*) ;
 int FUNC_2 (struct rt_mutex*,int ) ;
 scalar_t__ FUNC_3 (struct rt_mutex*) ;
 int FUNC_4 (struct rt_mutex*,int ,int ) ;
 int FUNC_5 (struct rt_mutex*,int ) ;

__attribute__((used)) static int FUNC_6(struct rt_mutex *VAR_1)
{
 FUNC_1(VAR_1);

 if (FUNC_3(VAR_1) && !FUNC_5(VAR_1, VAR_0))
  return 0;


 FUNC_0(VAR_1);

 FUNC_4(VAR_1, VAR_0, 0);

 FUNC_2(VAR_1, VAR_0);

 return 1;
}
