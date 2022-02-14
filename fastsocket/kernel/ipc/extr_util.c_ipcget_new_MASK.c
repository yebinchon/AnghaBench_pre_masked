
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_params {int dummy; } ;
struct ipc_ops {int (* getnew ) (struct ipc_namespace*,struct ipc_params*) ;} ;
struct ipc_namespace {int dummy; } ;
struct ipc_ids {int rw_mutex; int ipcs_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ipc_namespace*,struct ipc_params*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ipc_namespace *VAR_3, struct ipc_ids *VAR_4,
  struct ipc_ops *VAR_5, struct ipc_params *VAR_6)
{
 int VAR_7;
retry:
 VAR_7 = FUNC_1(&VAR_4->ipcs_idr, VAR_2);

 if (!VAR_7)
  return -VAR_1;

 FUNC_0(&VAR_4->rw_mutex);
 VAR_7 = VAR_5->getnew(VAR_3, VAR_6);
 FUNC_3(&VAR_4->rw_mutex);

 if (VAR_7 == -VAR_0)
  goto retry;

 return VAR_7;
}
