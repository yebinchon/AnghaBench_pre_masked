
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* slot; } ;
struct nfsd4_compoundres {TYPE_2__ cstate; } ;
struct TYPE_3__ {int sl_cachethis; } ;


 scalar_t__ FUNC_0 (struct nfsd4_compoundres*) ;

__attribute__((used)) static inline bool FUNC_1(struct nfsd4_compoundres *VAR_0)
{
 return !VAR_0->cstate.slot->sl_cachethis || FUNC_0(VAR_0);
}
