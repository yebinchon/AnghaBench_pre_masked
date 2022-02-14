
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct packet_fixture {TYPE_3__* packet; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_5__ {TYPE_1__ vmcs; } ;
struct TYPE_6__ {TYPE_2__ payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (int ,struct packet_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct packet_fixture *VAR_2)
{
 VAR_2->packet[0].type = VAR_1;
 VAR_2->packet[0].payload.vmcs.base = 0xabcdef000ull;

 FUNC_1(VAR_0, VAR_2);

 return FUNC_0();
}
