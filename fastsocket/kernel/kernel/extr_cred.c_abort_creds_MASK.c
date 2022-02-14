
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int usage; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct cred*,int,scalar_t__) ;
 int FUNC_3 (struct cred*) ;
 scalar_t__ FUNC_4 (struct cred*) ;

void FUNC_5(struct cred *VAR_0)
{
 FUNC_2("abort_creds(%p{%d,%d})", VAR_0,
        FUNC_1(&VAR_0->usage),
        FUNC_4(VAR_0));




 FUNC_0(FUNC_1(&VAR_0->usage) < 1);
 FUNC_3(VAR_0);
}
