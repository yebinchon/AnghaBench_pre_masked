
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_op {int opnum; struct nfs4_replay* replay; } ;
struct nfsd4_compoundres {int dummy; } ;
struct nfs4_replay {int rp_buflen; int rp_buf; int rp_status; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

void
FUNC_5(struct nfsd4_compoundres *VAR_0, struct nfsd4_op *VAR_1)
{
 __be32 *VAR_2;
 struct nfs4_replay *VAR_3 = VAR_1->replay;

 FUNC_1(!VAR_3);

 FUNC_2(8);
 FUNC_3(VAR_1->opnum);
 *VAR_2++ = VAR_3->rp_status;
 FUNC_0();

 FUNC_2(VAR_3->rp_buflen);
 FUNC_4(VAR_3->rp_buf, VAR_3->rp_buflen);
 FUNC_0();
}
