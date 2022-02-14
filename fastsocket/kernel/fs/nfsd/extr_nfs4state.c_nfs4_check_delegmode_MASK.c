
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_delegation {scalar_t__ dl_type; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline __be32
FUNC_0(struct nfs4_delegation *VAR_4, int VAR_5)
{
 if ((VAR_5 & VAR_1) && (VAR_4->dl_type == VAR_0))
  return VAR_3;
 else
  return VAR_2;
}
