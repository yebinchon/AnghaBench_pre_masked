
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct nfsd4_sequence {int cachethis; int maxslots; int slotid; int seqid; TYPE_1__ sessionid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_3,
        struct nfsd4_sequence *VAR_4)
{
 VAR_0;

 FUNC_2(VAR_2 + 16);
 FUNC_0(VAR_4->sessionid.data, VAR_2);
 FUNC_1(VAR_4->seqid);
 FUNC_1(VAR_4->slotid);
 FUNC_1(VAR_4->maxslots);
 FUNC_1(VAR_4->cachethis);

 VAR_1;
}
