
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {int se_sessionid; } ;
struct nfs4_sessionid {int dummy; } ;


 int FUNC_0 (struct nfs4_sessionid*,int *,int) ;

__attribute__((used)) static bool FUNC_1(struct nfsd4_session *VAR_0, struct nfs4_sessionid *VAR_1)
{
 if (!VAR_0)
  return 0;
 return !FUNC_0(VAR_1, &VAR_0->se_sessionid, sizeof(*VAR_1));
}
