
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct prison {int dummy; } ;
struct TYPE_4__ {scalar_t__ msg_qbytes; } ;
struct msqid_kernel {TYPE_2__* cred; TYPE_1__ u; } ;
struct TYPE_6__ {int msgmni; } ;
struct TYPE_5__ {struct prison* cr_prison; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msqid_kernel*) ;
 struct msqid_kernel* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct prison *VAR_3)
{
 struct msqid_kernel *VAR_4;
 int VAR_5;


 FUNC_1(&VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0.msgmni; VAR_5++) {
  VAR_4 = &VAR_2[VAR_5];
  if (VAR_4->u.msg_qbytes != 0 &&
      VAR_4->cred != ((void*)0) && VAR_4->cred->cr_prison == VAR_3)
   FUNC_0(VAR_4);
 }
 FUNC_2(&VAR_1);
}
