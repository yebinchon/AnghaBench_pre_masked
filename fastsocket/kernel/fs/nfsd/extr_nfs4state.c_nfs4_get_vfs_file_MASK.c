
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfs4_file {int * fi_fds; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfs4_file*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct svc_fh*,int ,int,int *) ;

__attribute__((used)) static __be32 FUNC_4(struct svc_rqst *VAR_2, struct nfs4_file
*VAR_3, struct svc_fh *VAR_4, u32 VAR_5)
{
 __be32 VAR_6;
 int VAR_7 = FUNC_1(VAR_5);
 int VAR_8 = FUNC_0(VAR_5);

 if (!VAR_3->fi_fds[VAR_7]) {
  VAR_6 = FUNC_3(VAR_2, VAR_4, VAR_0, VAR_8,
   &VAR_3->fi_fds[VAR_7]);
  if (VAR_6)
   return VAR_6;
 }
 FUNC_2(VAR_3, VAR_7);

 return VAR_1;
}
