
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_5__ {struct packet_fixture* context; int callback; } ;
struct TYPE_6__ {int size; TYPE_1__ decode; struct TYPE_6__* end; struct TYPE_6__* begin; } ;
struct packet_fixture {scalar_t__ unknown; int decoder; TYPE_2__ config; int encoder; TYPE_2__* buffer; TYPE_2__* packet; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct packet_fixture *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->buffer, 0, sizeof(VAR_1->buffer));
 FUNC_0(VAR_1->packet, 0, sizeof(VAR_1->packet));
 FUNC_0(&VAR_1->config, 0, sizeof(VAR_1->config));
 VAR_1->config.size = sizeof(VAR_1->config);
 VAR_1->config.begin = VAR_1->buffer;
 VAR_1->config.end = VAR_1->buffer + sizeof(VAR_1->buffer);
 VAR_1->config.decode.callback = VAR_0;
 VAR_1->config.decode.context = VAR_1;

 FUNC_1(&VAR_1->encoder, &VAR_1->config);
 FUNC_2(&VAR_1->decoder, &VAR_1->config);

 VAR_2 = FUNC_3(&VAR_1->decoder, 0x0ull);
 FUNC_4(VAR_2, 0);

 VAR_1->unknown = 0;

 return FUNC_5();
}
