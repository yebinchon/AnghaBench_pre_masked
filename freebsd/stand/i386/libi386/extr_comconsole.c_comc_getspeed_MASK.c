
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(void)
{
 u_int VAR_6;
 u_char VAR_7;
 u_char VAR_8;
 u_char VAR_9;

 VAR_9 = FUNC_1(VAR_5 + VAR_2);
 FUNC_2(VAR_5 + VAR_2, VAR_0 | VAR_9);

 VAR_8 = FUNC_1(VAR_5 + VAR_4);
 VAR_7 = FUNC_1(VAR_5 + VAR_3);

 FUNC_2(VAR_5 + VAR_2, VAR_9);

 VAR_6 = VAR_7 << 8 | VAR_8;


 if (VAR_6 == 0)
  return (VAR_1);
 return (FUNC_0(VAR_6));
}
