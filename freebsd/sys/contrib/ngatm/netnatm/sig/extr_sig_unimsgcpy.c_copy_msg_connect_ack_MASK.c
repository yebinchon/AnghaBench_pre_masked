
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_connect_ack {int unrec; int notify; } ;


 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(struct uni_connect_ack *VAR_0, struct uni_connect_ack *VAR_1)
{
 if(FUNC_0(VAR_0->notify))
  VAR_1->notify = VAR_0->notify;
 if(FUNC_0(VAR_0->unrec))
  VAR_1->unrec = VAR_0->unrec;
}
