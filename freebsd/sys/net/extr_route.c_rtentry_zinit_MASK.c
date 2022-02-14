
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int * rt_pksent; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtentry*) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, int VAR_2, int VAR_3)
{
 struct rtentry *VAR_4 = VAR_1;

 VAR_4->rt_pksent = FUNC_1(VAR_3);
 if (VAR_4->rt_pksent == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_4);

 return (0);
}
