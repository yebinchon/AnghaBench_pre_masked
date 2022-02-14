
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvec* head; } ;
struct svc_rqst {int rq_secure; TYPE_1__ rq_res; struct svc_cacherep* rq_cacherep; } ;
struct kvec {int iov_len; scalar_t__ iov_base; } ;
struct svc_cacherep {int c_type; int c_state; int c_secure; struct kvec c_replvec; int c_replstat; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct svc_cacherep*) ;
 int FUNC_2 (scalar_t__,int *,size_t) ;
 int FUNC_3 (struct svc_cacherep*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct svc_rqst *VAR_4, int VAR_5, __be32 *VAR_6)
{
 struct svc_cacherep *VAR_7 = VAR_4->rq_cacherep;
 struct kvec *VAR_8 = &VAR_4->rq_res.head[0], *VAR_9;
 int VAR_10;
 size_t VAR_11 = 0;

 if (!VAR_7)
  return;

 VAR_10 = VAR_8->iov_len - ((char*)VAR_6 - (char*)VAR_8->iov_base);
 VAR_10 >>= 2;


 if (!VAR_6 || VAR_10 > (256 >> 2)) {
  FUNC_3(VAR_7);
  return;
 }

 switch (VAR_5) {
 case 128:
  if (VAR_10 != 1)
   FUNC_4("nfsd: RC_REPLSTAT/reply len %d!\n",VAR_10);
  VAR_7->c_replstat = *VAR_6;
  break;
 case 129:
  VAR_9 = &VAR_7->c_replvec;
  VAR_11 = VAR_10 << 2;
  VAR_9->iov_base = FUNC_0(VAR_11, VAR_0);
  if (!VAR_9->iov_base) {
   FUNC_3(VAR_7);
   return;
  }
  VAR_9->iov_len = VAR_11;
  FUNC_2(VAR_9->iov_base, VAR_6, VAR_11);
  break;
 case 130:
  FUNC_3(VAR_7);
  return;
 }
 FUNC_5(&VAR_2);
 VAR_3 += VAR_11;
 FUNC_1(VAR_7);
 VAR_7->c_secure = VAR_4->rq_secure;
 VAR_7->c_type = VAR_5;
 VAR_7->c_state = VAR_1;
 FUNC_6(&VAR_2);
 return;
}
