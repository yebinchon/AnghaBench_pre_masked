
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_info {int * cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_info* VAR_2 ;
 int FUNC_0 (struct device_info**,int ,int) ;
 int FUNC_1 (int ,int *,struct device_info*) ;

int
FUNC_2(void)
{
 struct device_info *VAR_3;
 int VAR_4 = 0;

 FUNC_0(&VAR_2, 0, sizeof(struct device_info) * VAR_1);
 VAR_3 = &VAR_2[0];

 if (!FUNC_1(VAR_0, ((void*)0), VAR_3))
  return (0);

 while (VAR_3->cookie != ((void*)0)) {

  if (++VAR_4 >= VAR_1)
   break;


  VAR_3++;


  VAR_3->cookie = VAR_2[VAR_4 - 1].cookie;

  if (!FUNC_1(VAR_0, ((void*)0), VAR_3))
   return (0);
 }

 return (VAR_4);
}
