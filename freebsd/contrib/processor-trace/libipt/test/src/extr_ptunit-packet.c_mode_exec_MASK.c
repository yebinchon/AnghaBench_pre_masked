
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
struct pt_packet_mode_exec {int csd; int csl; } ;
struct packet_fixture {TYPE_5__* packet; } ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;
struct TYPE_6__ {int csd; int csl; } ;
struct TYPE_7__ {TYPE_1__ exec; } ;
struct TYPE_8__ {TYPE_2__ bits; int leaf; } ;
struct TYPE_9__ {TYPE_3__ mode; } ;
struct TYPE_10__ {TYPE_4__ payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pt_packet_mode_exec FUNC_0 (int) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (int ,struct packet_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct packet_fixture *VAR_3,
          enum pt_exec_mode VAR_4)
{
 struct pt_packet_mode_exec VAR_5;

 VAR_5 = FUNC_0(VAR_4);

 VAR_3->packet[0].type = VAR_1;
 VAR_3->packet[0].payload.mode.leaf = VAR_2;
 VAR_3->packet[0].payload.mode.bits.exec.csl = VAR_5.csl;
 VAR_3->packet[0].payload.mode.bits.exec.csd = VAR_5.csd;

 FUNC_2(VAR_0, VAR_3);

 return FUNC_1();
}
