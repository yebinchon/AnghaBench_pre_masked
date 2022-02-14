
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct nfsd4_session {int se_flags; } ;
struct nfsd4_conn {int cn_xpt_user; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsd4_conn* FUNC_0 (struct svc_rqst*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfsd4_conn*,struct nfsd4_session*) ;
 int FUNC_3 (struct nfsd4_conn*) ;
 int VAR_4 ;

__attribute__((used)) static __be32 FUNC_4(struct svc_rqst *VAR_5, struct nfsd4_session *VAR_6)
{
 struct nfsd4_conn *VAR_7;
 u32 VAR_8 = VAR_1;
 int VAR_9;

 if (VAR_6->se_flags & VAR_2)
  VAR_8 |= VAR_0;
 VAR_7 = FUNC_0(VAR_5, VAR_8);
 if (!VAR_7)
  return VAR_4;
 FUNC_2(VAR_7, VAR_6);
 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9)

  FUNC_1(&VAR_7->cn_xpt_user);
 return VAR_3;
}
