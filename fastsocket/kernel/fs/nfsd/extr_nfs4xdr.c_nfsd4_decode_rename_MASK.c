
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_rename {int rn_snamelen; int rn_tnamelen; int rn_tname; int rn_sname; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundargs *VAR_5, struct nfsd4_rename *VAR_6)
{
 VAR_0;

 FUNC_1(4);
 FUNC_0(VAR_6->rn_snamelen);
 FUNC_1(VAR_6->rn_snamelen + 4);
 FUNC_2(VAR_6->rn_sname, VAR_6->rn_snamelen);
 FUNC_0(VAR_6->rn_tnamelen);
 FUNC_1(VAR_6->rn_tnamelen);
 FUNC_2(VAR_6->rn_tname, VAR_6->rn_tnamelen);
 if ((VAR_4 = FUNC_3(VAR_6->rn_sname, VAR_6->rn_snamelen, VAR_3)))
  return VAR_4;
 if ((VAR_4 = FUNC_3(VAR_6->rn_tname, VAR_6->rn_tnamelen, VAR_2)))
  return VAR_4;

 VAR_1;
}
