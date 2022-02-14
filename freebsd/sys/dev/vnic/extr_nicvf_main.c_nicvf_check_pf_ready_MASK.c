
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; } ;
union nic_mbx {TYPE_1__ msg; } ;
struct nicvf {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int
FUNC_2(struct nicvf *VAR_1)
{
 union nic_mbx VAR_2 = {};

 VAR_2.msg.msg = VAR_0;
 if (FUNC_1(VAR_1, &VAR_2)) {
  FUNC_0(VAR_1->dev,
      "PF didn't respond to READY msg\n");
  return 0;
 }

 return 1;
}
