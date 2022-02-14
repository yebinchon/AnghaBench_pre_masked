
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* inject_op ) (TYPE_1__*,void const*,size_t) ;} ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (TYPE_1__*,void const*,size_t) ;

int
FUNC_1(pcap_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
 return (VAR_0->inject_op(VAR_0, VAR_1, VAR_2));
}
