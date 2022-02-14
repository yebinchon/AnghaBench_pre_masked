
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stateid {int st_perstateowner; int st_perfile; int st_hash; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nfs4_stateid *VAR_0)
{
 FUNC_0(&VAR_0->st_hash);
 FUNC_0(&VAR_0->st_perfile);
 FUNC_0(&VAR_0->st_perstateowner);
}
