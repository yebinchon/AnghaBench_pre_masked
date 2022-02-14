
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct packet_fixture {int unknown; TYPE_3__* packet; struct packet_fixture* buffer; int decoder; } ;
struct TYPE_4__ {int priv; int packet; } ;
struct TYPE_5__ {TYPE_1__ unknown; } ;
struct TYPE_6__ {int type; TYPE_2__ payload; int size; } ;


 int VAR_0 ;
 struct packet_fixture VAR_1 ;
 struct packet_fixture VAR_2 ;
 struct packet_fixture VAR_3 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,struct packet_fixture*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct packet_fixture *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_4->buffer[0] = VAR_3;
 VAR_4->buffer[1] = VAR_2;
 VAR_4->buffer[2] = VAR_1;
 VAR_4->unknown = VAR_5;

 VAR_6 = FUNC_0(&VAR_4->decoder, &VAR_4->packet[1],
      sizeof(VAR_4->packet[1]));
 FUNC_1(VAR_6, VAR_5);

 if (VAR_5 >= 0) {
  FUNC_1(VAR_4->packet[1].type, VAR_0);
  FUNC_4(VAR_4->packet[1].size, (uint8_t) VAR_6);
  FUNC_3(VAR_4->packet[1].payload.unknown.packet,
      VAR_4->buffer);
  FUNC_3(VAR_4->packet[1].payload.unknown.priv, VAR_4);
 }

 return FUNC_2();
}
