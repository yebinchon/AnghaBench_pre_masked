
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hostinfo {int * addrs; } ;


 int FUNC_0 (struct hostinfo*) ;
 struct hostinfo* FUNC_1 (char*) ;

void
FUNC_2(register u_int32_t *VAR_0, register char *VAR_1)
{
 register struct hostinfo *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 *VAR_0 = VAR_2->addrs[0];
 FUNC_0(VAR_2);
}
