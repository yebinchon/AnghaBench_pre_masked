
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct packet_fixture {TYPE_3__* packet; int encoder; } ;
struct TYPE_4__ {int ctc; int fc; } ;
struct TYPE_5__ {TYPE_1__ tma; } ;
struct TYPE_6__ {TYPE_2__ payload; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct packet_fixture *VAR_2)
{
 int VAR_3;

 VAR_2->packet[0].type = VAR_0;
 VAR_2->packet[0].payload.tma.ctc = 0x42;
 VAR_2->packet[0].payload.tma.fc = 0x200;

 VAR_3 = FUNC_0(&VAR_2->encoder, &VAR_2->packet[0]);
 FUNC_1(VAR_3, -VAR_1);

 return FUNC_2();
}
