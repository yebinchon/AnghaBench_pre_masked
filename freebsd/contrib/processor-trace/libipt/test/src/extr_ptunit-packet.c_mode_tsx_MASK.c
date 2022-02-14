
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct packet_fixture {TYPE_5__* packet; } ;
struct TYPE_6__ {int intx; } ;
struct TYPE_7__ {TYPE_1__ tsx; } ;
struct TYPE_8__ {TYPE_2__ bits; int leaf; } ;
struct TYPE_9__ {TYPE_3__ mode; } ;
struct TYPE_10__ {TYPE_4__ payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (int ,struct packet_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct packet_fixture *VAR_3)
{
 VAR_3->packet[0].type = VAR_1;
 VAR_3->packet[0].payload.mode.leaf = VAR_2;
 VAR_3->packet[0].payload.mode.bits.tsx.intx = 1;

 FUNC_1(VAR_0, VAR_3);

 return FUNC_0();
}
