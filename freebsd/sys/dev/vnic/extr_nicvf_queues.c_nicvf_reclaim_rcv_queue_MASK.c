
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; } ;
union nic_mbx {TYPE_1__ msg; } ;
struct queue_set {int dummy; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void
FUNC_1(struct nicvf *VAR_1, struct queue_set *VAR_2, int VAR_3)
{
 union nic_mbx VAR_4 = {};


 VAR_4.msg.msg = VAR_0;
 FUNC_0(VAR_1, &VAR_4);
}
