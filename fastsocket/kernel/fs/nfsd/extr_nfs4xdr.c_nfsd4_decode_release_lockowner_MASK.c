
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int data; } ;
struct nfsd4_release_lockowner {int rl_clientid; TYPE_1__ rl_owner; } ;
struct nfsd4_compoundargs {scalar_t__ minorversion; } ;
typedef int clientid_t ;
typedef int __be32 ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static __be32
FUNC_5(struct nfsd4_compoundargs *VAR_3, struct nfsd4_release_lockowner *VAR_4)
{
 VAR_0;

 FUNC_3(12);
 FUNC_0(&VAR_4->rl_clientid, sizeof(clientid_t));
 FUNC_1(VAR_4->rl_owner.len);
 FUNC_3(VAR_4->rl_owner.len);
 FUNC_2(VAR_4->rl_owner.data, VAR_4->rl_owner.len);

 if (VAR_3->minorversion && !FUNC_4(&VAR_4->rl_clientid))
  return VAR_2;
 VAR_1;
}
