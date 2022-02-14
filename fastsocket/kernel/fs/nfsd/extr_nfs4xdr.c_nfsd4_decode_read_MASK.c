
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_read {int rd_length; int rd_offset; int rd_stateid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct nfsd4_compoundargs*,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundargs *VAR_3, struct nfsd4_read *VAR_4)
{
 VAR_0;

 VAR_2 = FUNC_3(VAR_3, &VAR_4->rd_stateid);
 if (VAR_2)
  return VAR_2;
 FUNC_2(12);
 FUNC_1(VAR_4->rd_offset);
 FUNC_0(VAR_4->rd_length);

 VAR_1;
}
