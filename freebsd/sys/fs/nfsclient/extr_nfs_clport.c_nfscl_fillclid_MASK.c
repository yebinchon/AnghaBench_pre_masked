
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int u_int64_t ;
typedef int u_int16_t ;
typedef char* caddr_t ;


 int FUNC_0 (char*,scalar_t__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

void
FUNC_3(u_int64_t VAR_0, char *VAR_1, u_int8_t *VAR_2, u_int16_t VAR_3)
{
 int VAR_4;




 if (VAR_3 >= sizeof (u_int64_t)) {
  FUNC_0((caddr_t)&VAR_0, VAR_2, sizeof (u_int64_t));
  VAR_2 += sizeof (u_int64_t);
  VAR_3 -= sizeof (u_int64_t);
 }




 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 > 0 && VAR_3 >= VAR_4) {
  FUNC_0(VAR_1, VAR_2, VAR_4);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
 }




 while (VAR_3 > 0) {
  *VAR_2++ = (u_int8_t)(FUNC_1() % 256);
  VAR_3--;
 }
}
