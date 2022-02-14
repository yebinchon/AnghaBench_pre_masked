
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef scalar_t__ mbuf_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(mbuf_t VAR_1, u_int16_t *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 mbuf_t VAR_5;

 VAR_5 = VAR_1;
 while (VAR_5) {
  VAR_3 += FUNC_1(VAR_5);
  VAR_5 = FUNC_2(VAR_5);
 }
 VAR_4 = (VAR_3 > VAR_0) ? VAR_0 : VAR_3;
 *VAR_2 = FUNC_0(VAR_1, VAR_4);
 return (VAR_3);
}
