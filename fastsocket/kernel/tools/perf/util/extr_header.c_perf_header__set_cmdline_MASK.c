
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 char** FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 char const** VAR_2 ;

int
FUNC_1(int VAR_3, const char **VAR_4)
{
 int VAR_5;







 if (VAR_2)
  return 0;

 VAR_1 = (u32)VAR_3;


 VAR_2 = FUNC_0(VAR_3, sizeof(char *));
 if (!VAR_2)
  return -VAR_0;





 for (VAR_5 = 0; VAR_5 < VAR_3 ; VAR_5++)
  VAR_2[VAR_5] = VAR_4[VAR_5];

 return 0;
}
