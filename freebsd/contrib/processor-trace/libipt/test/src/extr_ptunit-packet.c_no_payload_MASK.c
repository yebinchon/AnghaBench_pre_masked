
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct packet_fixture {TYPE_1__* packet; } ;
typedef enum pt_packet_type { ____Placeholder_pt_packet_type } pt_packet_type ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (int ,struct packet_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct packet_fixture *VAR_1,
           enum pt_packet_type VAR_2)
{
 VAR_1->packet[0].type = VAR_2;

 FUNC_1(VAR_0, VAR_1);

 return FUNC_0();
}
