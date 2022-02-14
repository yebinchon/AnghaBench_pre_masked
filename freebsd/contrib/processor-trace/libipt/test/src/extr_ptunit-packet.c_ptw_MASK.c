
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct packet_fixture {TYPE_3__* packet; } ;
typedef int mask ;
struct TYPE_4__ {int payload; int ip; int plc; } ;
struct TYPE_5__ {TYPE_1__ ptw; } ;
struct TYPE_6__ {TYPE_2__ payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,struct packet_fixture*) ;
 int FUNC_4 (size_t,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct packet_fixture *VAR_2, uint8_t VAR_3,
    int VAR_4)
{
 uint64_t VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 FUNC_1(VAR_7, 0);

 VAR_5 = 0x1234567890abcdefull;

 FUNC_4((size_t) VAR_7, sizeof(VAR_6));
 VAR_6 = ~0ull >> ((sizeof(VAR_6) - (size_t) VAR_7) * 8);

 VAR_2->packet[0].type = VAR_1;
 VAR_2->packet[0].payload.ptw.payload = VAR_5 & VAR_6;
 VAR_2->packet[0].payload.ptw.plc = VAR_3;
 VAR_2->packet[0].payload.ptw.ip = VAR_4 ? 1 : 0;

 FUNC_3(VAR_0, VAR_2);

 return FUNC_2();
}
