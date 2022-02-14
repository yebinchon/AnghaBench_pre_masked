
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_6__ {scalar_t__ end; } ;
struct TYPE_7__ {TYPE_1__ config; } ;
struct TYPE_9__ {scalar_t__ pos; } ;
struct packet_fixture {TYPE_3__* packet; TYPE_2__ decoder; TYPE_4__ encoder; } ;
typedef enum pt_packet_type { ____Placeholder_pt_packet_type } pt_packet_type ;
struct TYPE_8__ {int type; } ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct packet_fixture *VAR_1,
       enum pt_packet_type VAR_2)
{
 int VAR_3;

 VAR_1->packet[0].type = VAR_2;

 VAR_3 = FUNC_0(&VAR_1->encoder, &VAR_1->packet[0]);
 FUNC_3(VAR_3, 0);

 VAR_1->decoder.config.end = VAR_1->encoder.pos - 1;

 VAR_3 = FUNC_1(&VAR_1->decoder, &VAR_1->packet[1],
      sizeof(VAR_1->packet[1]));
 FUNC_2(VAR_3, -VAR_0);

 return FUNC_4();
}
