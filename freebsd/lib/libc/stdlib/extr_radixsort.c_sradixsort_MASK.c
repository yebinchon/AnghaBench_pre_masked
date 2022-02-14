
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int a ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const**) ;
 int ** FUNC_1 (int) ;
 int FUNC_2 (int const**,int const**,int,int ,int const*,int ) ;
 int FUNC_3 (int const**,int,int ,int const*,int ) ;

int
FUNC_4(const u_char **VAR_2, int VAR_3, const u_char *VAR_4, u_int VAR_5)
{
 const u_char *VAR_6, **VAR_7;
 int VAR_8;
 u_char VAR_9[256];

 VAR_0;
 if (VAR_3 < VAR_1)
  FUNC_3(VAR_2, VAR_3, 0, VAR_6, VAR_5);
 else {
  if ((VAR_7 = FUNC_1(VAR_3 * sizeof(VAR_2))) == ((void*)0))
   return (-1);
  FUNC_2(VAR_2, VAR_7, VAR_3, 0, VAR_6, VAR_5);
  FUNC_0(VAR_7);
 }
 return (0);
}
