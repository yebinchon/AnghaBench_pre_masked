
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int item_p ;
typedef int hook_p ;
typedef TYPE_3__* hinfo_p ;
struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_9__ {TYPE_2__ m_pkthdr; } ;
struct TYPE_6__ {int octets; int frames; } ;
struct TYPE_8__ {TYPE_1__ stats; } ;


 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(hook_p VAR_0, item_p VAR_1)
{
 const hinfo_p VAR_2 = FUNC_2(VAR_0);

 VAR_2->stats.frames++;
 VAR_2->stats.octets += FUNC_0(VAR_1)->m_pkthdr.len;
 FUNC_1(VAR_1);
 return 0;
}
