
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stateid {int st_access_bmap; struct nfs4_stateid* st_openstp; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
__be32 FUNC_2(struct nfs4_stateid *VAR_4, int VAR_5)
{
        __be32 VAR_6 = VAR_3;


 if (VAR_4->st_openstp)
  VAR_4 = VAR_4->st_openstp;
 if ((VAR_5 & VAR_1) && (!FUNC_1(VAR_4->st_access_bmap)))
                goto out;
 if ((VAR_5 & VAR_0) && (!FUNC_0(VAR_4->st_access_bmap)))
                goto out;
 VAR_6 = VAR_2;
out:
 return VAR_6;
}
