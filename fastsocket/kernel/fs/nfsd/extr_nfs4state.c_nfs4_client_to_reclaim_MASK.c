
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_client_reclaim {int cr_recdir; int cr_strhash; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nfs4_client_reclaim* FUNC_1 () ;
 unsigned int FUNC_2 (char const*) ;
 int FUNC_3 (char*,int ,char const*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char const*,int ) ;
 int * VAR_1 ;
 int VAR_2 ;

int
FUNC_6(const char *VAR_3)
{
 unsigned int VAR_4;
 struct nfs4_client_reclaim *VAR_5 = ((void*)0);

 FUNC_3("NFSD nfs4_client_to_reclaim NAME: %.*s\n", VAR_0, VAR_3);
 VAR_5 = FUNC_1();
 if (!VAR_5)
  return 0;
 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(&VAR_5->cr_strhash);
 FUNC_4(&VAR_5->cr_strhash, &VAR_1[VAR_4]);
 FUNC_5(VAR_5->cr_recdir, VAR_3, VAR_0);
 VAR_2++;
 return 1;
}
