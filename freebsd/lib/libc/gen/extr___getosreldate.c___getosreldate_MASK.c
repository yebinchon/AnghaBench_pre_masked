
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int osreldate ;
typedef int osrel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int*,int,int*,size_t*,int *,int ) ;

int
FUNC_2(void)
{
 static int VAR_3;
 size_t VAR_4;
 int VAR_5[2];
 int VAR_6, VAR_7;

 if (VAR_3 != 0)
  return (VAR_3);

 VAR_6 = FUNC_0(VAR_0, &VAR_3, sizeof(VAR_3));
 if (VAR_6 == 0 && VAR_3 != 0)
  return (VAR_3);

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_2;
 VAR_7 = 0;
 VAR_4 = sizeof(VAR_7);
 VAR_6 = FUNC_1(VAR_5, 2, &VAR_7, &VAR_4, ((void*)0), 0);
 if (VAR_6 == 0 && VAR_7 > 0 && VAR_4 == sizeof(VAR_7))
  VAR_3 = VAR_7;
 return (VAR_3);
}
