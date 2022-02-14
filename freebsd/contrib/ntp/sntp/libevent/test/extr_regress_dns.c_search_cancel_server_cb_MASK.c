
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdns_server_request {int nquestions; TYPE_1__** questions; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct evdns_server_request*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct evdns_server_request *VAR_2, void *VAR_3)
{
 const char *VAR_4;

 if (VAR_2->nquestions != 1)
  FUNC_1(("Only handling one question at a time; got %d",
   VAR_2->nquestions));

 VAR_4 = VAR_2->questions[0]->name;

 FUNC_0(("got question, %s", VAR_4));

 FUNC_4(VAR_1 > 0);
 FUNC_4(!FUNC_3(VAR_2, 3));

 if (!--VAR_1)
  FUNC_2(((void*)0), VAR_0);

end:
 ;
}
