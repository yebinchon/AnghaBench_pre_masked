
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int*,int ) ;

int
FUNC_3(device_t VAR_1, u_char VAR_2, char *VAR_3, int VAR_4, int *VAR_5)
{
 u_char VAR_6 = VAR_2 & ~VAR_0;
 int VAR_7;

 if ((VAR_7 = FUNC_0(VAR_1, VAR_6, 0)))
  return (VAR_7);

 VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5, 0);

 FUNC_1(VAR_1);

 return (VAR_7);
}
