
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int family; int type; int protocol; } ;
struct TYPE_4__ {TYPE_1__ socket_op; } ;
struct fsocket_ioctl_arg {TYPE_2__ op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3(struct fsocket_ioctl_arg *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_0(VAR_1,"Try to create fastsocket\n");

 VAR_6 = VAR_5->op.socket_op.family;
 VAR_7 = VAR_5->op.socket_op.type;
 VAR_8 = VAR_5->op.socket_op.protocol;

 if (( VAR_6 == VAR_0 ) &&
  ((VAR_7 & VAR_4) == VAR_3 )) {
  VAR_9 = FUNC_1(VAR_7 & ~VAR_4);
  FUNC_0(VAR_1,"Create fastsocket %d\n", VAR_9);
  return VAR_9;
 } else {
  VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
  FUNC_0(VAR_2, "Create non fastsocket %d\n", VAR_9);
  return VAR_9;
 }
}
