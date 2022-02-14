
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int osrel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,int*,size_t*,int *,int ) ;

int
FUNC_1(void)
{
 size_t VAR_3;
 int VAR_4[2];
 int VAR_5, VAR_6;

 if (VAR_2 != 0)
  return (VAR_2);

 VAR_4[0] = VAR_0;
 VAR_4[1] = VAR_1;
 VAR_6 = 0;
 VAR_3 = sizeof(VAR_6);
 VAR_5 = FUNC_0(VAR_4, 2, &VAR_6, &VAR_3, ((void*)0), 0);
 if (VAR_5 == 0 && VAR_6 > 0 && VAR_3 == sizeof(VAR_6))
  VAR_2 = VAR_6;
 return (VAR_2);
}
