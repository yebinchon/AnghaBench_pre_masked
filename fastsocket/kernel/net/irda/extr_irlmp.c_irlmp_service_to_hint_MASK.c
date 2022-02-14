
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int word; void** byte; } ;
typedef TYPE_1__ __u16_host_order ;
typedef int __u16 ;


 void*** VAR_0 ;

__u16 FUNC_0(int VAR_1)
{
 __u16_host_order VAR_2;

 VAR_2.byte[0] = VAR_0[VAR_1][0];
 VAR_2.byte[1] = VAR_0[VAR_1][1];

 return VAR_2.word;
}
