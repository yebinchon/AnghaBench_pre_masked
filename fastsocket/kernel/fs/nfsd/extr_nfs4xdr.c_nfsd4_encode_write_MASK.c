
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct nfsd4_write {TYPE_1__ wr_verifier; int wr_how_written; int wr_bytes_written; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct nfsd4_write *VAR_2)
{
 __be32 *VAR_3;

 if (!VAR_1) {
  FUNC_1(16);
  FUNC_2(VAR_2->wr_bytes_written);
  FUNC_2(VAR_2->wr_how_written);
  FUNC_3(VAR_2->wr_verifier.data, 8);
  FUNC_0();
 }
 return VAR_1;
}
