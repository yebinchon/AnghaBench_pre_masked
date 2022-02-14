
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int id; } ;
struct ipc_params {int flg; } ;
struct ipc_ops {int (* associate ) (struct kern_ipc_perm*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kern_ipc_perm*,int ) ;
 int FUNC_1 (struct kern_ipc_perm*,int ) ;

__attribute__((used)) static int FUNC_2(struct kern_ipc_perm *VAR_1, struct ipc_ops *VAR_2,
   struct ipc_params *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_1, VAR_3->flg))
  VAR_4 = -VAR_0;
 else {
  VAR_4 = VAR_2->associate(VAR_1, VAR_3->flg);
  if (!VAR_4)
   VAR_4 = VAR_1->id;
 }

 return VAR_4;
}
