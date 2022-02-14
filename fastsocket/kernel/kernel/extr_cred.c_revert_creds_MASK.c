
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cred {int usage; } ;
struct TYPE_2__ {struct cred* cred; } ;


 int FUNC_0 (struct cred const*,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,struct cred const*,int ,int ) ;
 int FUNC_3 (struct cred const*) ;
 int FUNC_4 (struct cred*,struct cred const*) ;
 int FUNC_5 (struct cred const*) ;
 int FUNC_6 (struct cred const*) ;

void FUNC_7(const struct cred *VAR_1)
{
 const struct cred *VAR_2 = VAR_0->cred;

 FUNC_2("revert_creds(%p{%d,%d})", VAR_1,
        FUNC_1(&VAR_1->usage),
        FUNC_5(VAR_1));

 FUNC_6(VAR_1);
 FUNC_6(VAR_2);
 FUNC_0(VAR_1, 1);
 FUNC_4(VAR_0->cred, VAR_1);
 FUNC_0(VAR_2, -1);
 FUNC_3(VAR_2);
}
