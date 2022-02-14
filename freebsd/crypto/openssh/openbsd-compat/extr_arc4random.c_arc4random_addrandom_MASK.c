
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int VAR_2 ;

void
FUNC_5(u_char *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_1();
 if (!VAR_2)
  FUNC_4();
 while (VAR_4 > 0) {
  VAR_5 = FUNC_0(VAR_4, VAR_1 + VAR_0);
  FUNC_3(VAR_3, VAR_5);
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
 }
 FUNC_2();
}
