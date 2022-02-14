
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdns_server_request {TYPE_1__** questions; int nquestions; } ;
typedef int ev_uint32_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct evdns_server_request*,int ,int,int*,int) ;
 int FUNC_1 (struct evdns_server_request*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct evdns_server_request *VAR_1, void *VAR_2)
{
 ev_uint32_t VAR_3 = 0x7f000001;
 FUNC_2(VAR_1->nquestions);
 FUNC_0(VAR_1, VAR_1->questions[0]->name, 1,
     &VAR_3, 100);
 FUNC_1(VAR_1, 0);
 return;
end:
 FUNC_1(VAR_1, VAR_0);
}
