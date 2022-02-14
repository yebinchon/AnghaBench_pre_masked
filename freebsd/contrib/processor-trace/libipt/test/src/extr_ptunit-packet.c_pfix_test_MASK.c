
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct packet_fixture {TYPE_1__* packet; int decoder; int encoder; } ;
struct TYPE_5__ {int size; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct packet_fixture *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->encoder, &VAR_0->packet[0]);
 FUNC_2(VAR_1, 0);

 VAR_0->packet[0].size = (uint8_t) VAR_1;

 VAR_1 = FUNC_1(&VAR_0->decoder, &VAR_0->packet[1],
      sizeof(VAR_0->packet[1]));
 FUNC_2(VAR_1, 0);

 return FUNC_3(&VAR_0->packet[0], &VAR_0->packet[1]);
}
