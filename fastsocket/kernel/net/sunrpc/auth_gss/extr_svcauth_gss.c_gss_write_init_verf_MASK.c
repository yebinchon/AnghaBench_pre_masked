
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct rsi {scalar_t__ major_status; int out_handle; } ;
struct rsc {int h; int mechctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct rsc* FUNC_1 (int *) ;
 int FUNC_2 (struct svc_rqst*) ;
 int FUNC_3 (struct svc_rqst*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static inline int
FUNC_4(struct svc_rqst *VAR_4, struct rsi *VAR_5)
{
 struct rsc *VAR_6;
 int VAR_7;

 if (VAR_5->major_status != VAR_1)
  return FUNC_2(VAR_4);
 VAR_6 = FUNC_1(&VAR_5->out_handle);
 if (VAR_6 == ((void*)0)) {
  VAR_5->major_status = VAR_2;
  return FUNC_2(VAR_4);
 }
 VAR_7 = FUNC_3(VAR_4, VAR_6->mechctx, VAR_0);
 FUNC_0(&VAR_6->h, &VAR_3);
 return VAR_7;
}
