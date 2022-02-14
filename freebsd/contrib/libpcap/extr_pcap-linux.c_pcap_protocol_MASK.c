
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int protocol; } ;
struct TYPE_5__ {TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(pcap_t *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->opt.protocol;
 if (VAR_2 == 0)
  VAR_2 = VAR_0;

 return FUNC_0(VAR_2);
}
