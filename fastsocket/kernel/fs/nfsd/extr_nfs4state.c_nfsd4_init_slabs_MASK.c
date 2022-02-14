
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stateowner {int dummy; } ;
struct nfs4_stateid {int dummy; } ;
struct nfs4_file {int dummy; } ;
struct nfs4_delegation {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * VAR_2 ;
 void* FUNC_1 (char*,int,int ,int ,int *) ;
 int FUNC_2 () ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int
FUNC_3(void)
{
 VAR_4 = FUNC_1("nfsd4_stateowners",
   sizeof(struct nfs4_stateowner), 0, 0, ((void*)0));
 if (VAR_4 == ((void*)0))
  goto out_nomem;
 VAR_2 = FUNC_1("nfsd4_files",
   sizeof(struct nfs4_file), 0, 0, ((void*)0));
 if (VAR_2 == ((void*)0))
  goto out_nomem;
 VAR_3 = FUNC_1("nfsd4_stateids",
   sizeof(struct nfs4_stateid), 0, 0, ((void*)0));
 if (VAR_3 == ((void*)0))
  goto out_nomem;
 VAR_1 = FUNC_1("nfsd4_delegations",
   sizeof(struct nfs4_delegation), 0, 0, ((void*)0));
 if (VAR_1 == ((void*)0))
  goto out_nomem;
 return 0;
out_nomem:
 FUNC_2();
 FUNC_0("nfsd4: out of memory while initializing nfsv4\n");
 return -VAR_0;
}
