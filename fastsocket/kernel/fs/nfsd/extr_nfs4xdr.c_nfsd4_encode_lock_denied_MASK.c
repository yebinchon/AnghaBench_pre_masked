
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nfsd4_lock_denied {int ld_type; TYPE_2__* ld_sop; int ld_clientid; int ld_length; int ld_start; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int __be32 ;
struct TYPE_3__ {int len; int * data; } ;
struct TYPE_4__ {int so_ref; TYPE_1__ so_owner; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(struct nfsd4_compoundres *VAR_1, struct nfsd4_lock_denied *VAR_2)
{
 __be32 *VAR_3;

 FUNC_1(32 + FUNC_5(VAR_2->ld_sop ? VAR_2->ld_sop->so_owner.len : 0));
 FUNC_3(VAR_2->ld_start);
 FUNC_3(VAR_2->ld_length);
 FUNC_2(VAR_2->ld_type);
 if (VAR_2->ld_sop) {
  FUNC_4(&VAR_2->ld_clientid, 8);
  FUNC_2(VAR_2->ld_sop->so_owner.len);
  FUNC_4(VAR_2->ld_sop->so_owner.data, VAR_2->ld_sop->so_owner.len);
  FUNC_6(&VAR_2->ld_sop->so_ref, VAR_0);
 } else {
  FUNC_3((u64)0);
  FUNC_2(0);
 }
 FUNC_0();
}
