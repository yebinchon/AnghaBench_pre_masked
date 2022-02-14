
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(int VAR_2, int VAR_3, int VAR_4)
{
 uint64_t VAR_5;
 u_int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6 < (VAR_4 - 5))
  VAR_7 = 1;
 else
  VAR_7 = 0;

 for(;;) {
  if ((VAR_6 >= (VAR_4 - 5)) && (VAR_6 <= VAR_4))
   break;
  if (VAR_7)
   FUNC_2(VAR_5, VAR_0,
       (1 << VAR_3));
  else
   FUNC_2(VAR_5, VAR_1,
       (1 << VAR_3));
  VAR_6 = FUNC_0(VAR_5, VAR_3);
 }
 return (FUNC_0(VAR_5, VAR_3));
}
