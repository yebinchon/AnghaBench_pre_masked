
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct packet_fixture {TYPE_3__* packet; } ;
typedef enum pt_packet_type { ____Placeholder_pt_packet_type } pt_packet_type ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;
struct TYPE_4__ {int ipc; int ip; } ;
struct TYPE_5__ {TYPE_1__ ip; } ;
struct TYPE_6__ {int type; TYPE_2__ payload; } ;


 int VAR_0 ;
 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (int ,struct packet_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct packet_fixture *VAR_1,
          enum pt_packet_type VAR_2,
          enum pt_ip_compression VAR_3,
          uint64_t VAR_4)
{
 VAR_1->packet[0].type = VAR_2;
 VAR_1->packet[0].payload.ip.ipc = VAR_3;
 VAR_1->packet[0].payload.ip.ip = VAR_4;

 FUNC_1(VAR_0, VAR_1);

 return FUNC_0();
}
