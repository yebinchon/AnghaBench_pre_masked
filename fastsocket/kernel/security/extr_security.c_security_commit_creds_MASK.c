
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cred {int dummy; } ;
struct TYPE_2__ {int (* cred_commit ) (struct cred*,struct cred const*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cred*,struct cred const*) ;

void FUNC_1(struct cred *VAR_1, const struct cred *VAR_2)
{
 VAR_0->cred_commit(VAR_1, VAR_2);
}
