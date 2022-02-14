
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd4_compoundres {int opcnt; TYPE_1__* rqstp; } ;
struct nfsd4_compoundargs {TYPE_2__* ops; } ;
struct TYPE_4__ {scalar_t__ opnum; } ;
struct TYPE_3__ {struct nfsd4_compoundargs* rq_argp; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct nfsd4_compoundres *VAR_1)
{
 struct nfsd4_compoundargs *VAR_2 = VAR_1->rqstp->rq_argp;
 return VAR_1->opcnt == 1 && VAR_2->ops[0].opnum == VAR_0;
}
