
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_10__ {scalar_t__ end; } ;
struct TYPE_11__ {TYPE_3__ config; } ;
struct TYPE_13__ {scalar_t__ pos; } ;
struct packet_fixture {TYPE_5__* packet; TYPE_4__ decoder; TYPE_6__ encoder; } ;
struct TYPE_8__ {int value; } ;
struct TYPE_9__ {TYPE_1__ cyc; } ;
struct TYPE_12__ {TYPE_2__ payload; int type; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct packet_fixture *VAR_2)
{
 int VAR_3;

 VAR_2->packet[0].type = VAR_0;
 VAR_2->packet[0].payload.cyc.value = 0xa8;

 VAR_3 = FUNC_0(&VAR_2->encoder, &VAR_2->packet[0]);
 FUNC_3(VAR_3, 0);

 VAR_2->decoder.config.end = VAR_2->encoder.pos - 1;

 VAR_3 = FUNC_1(&VAR_2->decoder, &VAR_2->packet[1],
      sizeof(VAR_2->packet[1]));
 FUNC_2(VAR_3, -VAR_1);

 return FUNC_4();
}
