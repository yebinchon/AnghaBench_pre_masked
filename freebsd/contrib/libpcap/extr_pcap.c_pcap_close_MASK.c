
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* device; } ;
struct TYPE_7__ {int (* cleanup_op ) (TYPE_2__*) ;TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(pcap_t *VAR_0)
{
 if (VAR_0->opt.device != ((void*)0))
  FUNC_0(VAR_0->opt.device);
 VAR_0->cleanup_op(VAR_0);
 FUNC_0(VAR_0);
}
