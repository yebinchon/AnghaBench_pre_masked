
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; } ;
union nic_mbx {TYPE_1__ msg; } ;
struct nicpf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicpf*,int,union nic_mbx*) ;

__attribute__((used)) static void
FUNC_1(struct nicpf *VAR_1, int VAR_2)
{
 union nic_mbx VAR_3 = {};

 VAR_3.msg.msg = VAR_0;
 FUNC_0(VAR_1, VAR_2, &VAR_3);
}
