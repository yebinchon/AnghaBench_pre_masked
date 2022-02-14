
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
typedef int u_char ;
struct ssh {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ssh*,int) ;
 int FUNC_2 (struct ssh*,int) ;
 int FUNC_3 (struct ssh*,int ) ;

int
FUNC_4(struct ssh *VAR_1, u_int VAR_2)
{
 u_int32_t VAR_3 = 0;
 int VAR_4;
 u_int VAR_5;

 if ((VAR_4 = FUNC_3(VAR_1, VAR_0)) != 0 ||
     (VAR_4 = FUNC_1(VAR_1, VAR_2)) != 0)
  return VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_5 % 4 == 0)
   VAR_3 = FUNC_0();
  if ((VAR_4 = FUNC_2(VAR_1, (u_char)VAR_3 & 0xff)) != 0)
   return VAR_4;
  VAR_3 >>= 8;
 }
 return 0;
}
