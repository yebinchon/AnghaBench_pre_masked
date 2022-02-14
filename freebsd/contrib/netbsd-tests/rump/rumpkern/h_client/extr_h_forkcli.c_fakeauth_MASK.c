
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rumpclient_fork {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rumpclient_fork*) ;
 struct rumpclient_fork* FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct rumpclient_fork *VAR_2;
 uint32_t *VAR_3;
 int VAR_4;

 if ((VAR_2 = FUNC_3()) == ((void*)0))
  FUNC_0(1, "prefork");


 VAR_3 = (void *)VAR_2;
 *(VAR_3+3) = *(VAR_3+3) ^ 0x1;

 VAR_4 = FUNC_2(VAR_2);
 if (!(VAR_4 == -1 && VAR_1 == VAR_0))
  FUNC_1(1);
}
