
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_secinfo {int si_namelen; int si_name; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundargs *VAR_4,
       struct nfsd4_secinfo *VAR_5)
{
 VAR_0;

 FUNC_1(4);
 FUNC_0(VAR_5->si_namelen);
 FUNC_1(VAR_5->si_namelen);
 FUNC_2(VAR_5->si_name, VAR_5->si_namelen);
 VAR_3 = FUNC_3(VAR_5->si_name, VAR_5->si_namelen,
        VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_1;
}
