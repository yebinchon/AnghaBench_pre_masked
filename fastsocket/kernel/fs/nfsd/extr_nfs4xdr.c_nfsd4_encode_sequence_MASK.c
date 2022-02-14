
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct nfsd4_sequence {int maxslots; int slotid; int seqid; TYPE_1__ sessionid; } ;
struct TYPE_4__ {int* datap; } ;
struct nfsd4_compoundres {TYPE_2__ cstate; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__be32
FUNC_4(struct nfsd4_compoundres *VAR_1, int VAR_2,
        struct nfsd4_sequence *VAR_3)
{
 __be32 *VAR_4;

 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_0 + 20);
 FUNC_3(VAR_3->sessionid.data, VAR_0);
 FUNC_2(VAR_3->seqid);
 FUNC_2(VAR_3->slotid);
 FUNC_2(VAR_3->maxslots);





 FUNC_2(VAR_3->maxslots);
 FUNC_2(0);

 FUNC_0();
 VAR_1->cstate.datap = VAR_4;
 return 0;
}
