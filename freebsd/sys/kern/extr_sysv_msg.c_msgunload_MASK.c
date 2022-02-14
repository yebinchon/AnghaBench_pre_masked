
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {scalar_t__ msg_qbytes; TYPE_1__ msg_perm; } ;
struct msqid_kernel {TYPE_2__ u; } ;
struct TYPE_6__ {int msgmni; int msgtql; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msqid_kernel*,int ) ;
 int FUNC_1 (struct msqid_kernel*) ;
 int FUNC_2 (struct msqid_kernel*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct msqid_kernel* VAR_6 ;
 TYPE_3__ VAR_7 ;
 struct msqid_kernel* VAR_8 ;
 struct msqid_kernel* VAR_9 ;
 int VAR_10 ;
 struct msqid_kernel* VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7()
{
 struct msqid_kernel *VAR_12;
 int VAR_13;




 FUNC_6(VAR_5);




 for (VAR_13 = 0; VAR_13 < VAR_7.msgmni; VAR_13++) {
  VAR_12 = &VAR_11[VAR_13];
  if (VAR_12->u.msg_qbytes != 0 ||
      (VAR_12->u.msg_perm.mode & VAR_1) != 0)
   break;
 }
 if (VAR_13 != VAR_7.msgmni)
  return (VAR_0);

 if (VAR_4 != 0)
  FUNC_4(VAR_4);






 FUNC_0(VAR_9, VAR_2);
 FUNC_0(VAR_8, VAR_2);
 FUNC_0(VAR_6, VAR_2);
 FUNC_0(VAR_11, VAR_2);
 FUNC_3(&VAR_10);
 return (0);
}
