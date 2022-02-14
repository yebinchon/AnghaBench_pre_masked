
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer {TYPE_1__** last_with_datap; } ;
struct TYPE_2__ {struct TYPE_2__* next; scalar_t__ off; } ;


 int FUNC_0 (struct evbuffer*) ;

__attribute__((used)) static int
FUNC_1(struct evbuffer *VAR_0)
{
 int VAR_1 = 0;
 FUNC_0(VAR_0);

 if (!*VAR_0->last_with_datap)
  return 0;

 while ((*VAR_0->last_with_datap)->next && (*VAR_0->last_with_datap)->next->off) {
  VAR_0->last_with_datap = &(*VAR_0->last_with_datap)->next;
  ++VAR_1;
 }
 return VAR_1;
}
