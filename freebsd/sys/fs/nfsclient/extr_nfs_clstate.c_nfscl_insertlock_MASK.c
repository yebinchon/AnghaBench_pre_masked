
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfscllockowner {int nfsl_lock; } ;
struct nfscllock {int dummy; } ;
struct TYPE_2__ {int cllocks; int cllocallocks; } ;


 int FUNC_0 (struct nfscllock*,struct nfscllock*,int ) ;
 int FUNC_1 (int *,struct nfscllock*,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct nfscllockowner *VAR_2, struct nfscllock *VAR_3,
    struct nfscllock *VAR_4, int VAR_5)
{

 if ((struct nfscllockowner *)VAR_4 == VAR_2)
  FUNC_1(&VAR_2->nfsl_lock, VAR_3, VAR_0);
 else
  FUNC_0(VAR_4, VAR_3, VAR_0);
 if (VAR_5)
  VAR_1++;
 else
  VAR_1++;
}
