
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct terminal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct terminal*) ;

__attribute__((used)) static void
FUNC_2(struct terminal *VAR_2, u_int VAR_3)
{
 u_int VAR_4, VAR_5;

 if (!VAR_1)
  return;

 if ((VAR_3 == 0) || ((VAR_3 & 0xffff) == 0)) {
  FUNC_1(VAR_2);
  return;
 }

 VAR_5 = ((VAR_3 >> 16) & 0xffff) * VAR_0 / 1000;
 VAR_4 = 1193182 / (VAR_3 & 0xffff);

 FUNC_0(VAR_4, VAR_5);
}
