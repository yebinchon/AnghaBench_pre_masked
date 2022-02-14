
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evkeyvalq {struct evkeyval* tqh_first; } ;
struct TYPE_2__ {struct evkeyval* tqe_next; } ;
struct evkeyval {char const* key; char* value; TYPE_1__ next; } ;
struct evhttp_request {int dummy; } ;
struct evbuffer {int dummy; } ;
typedef int cbuf ;
 scalar_t__ FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*,char*,int) ;
 int FUNC_2 (struct evhttp_request*) ;
 struct evbuffer* FUNC_3 (struct evhttp_request*) ;
 struct evkeyvalq* FUNC_4 (struct evhttp_request*) ;
 char* FUNC_5 (struct evhttp_request*) ;
 int FUNC_6 (struct evhttp_request*,int,char*,int *) ;
 int FUNC_7 (char*,int,int,int ) ;
 int FUNC_8 (char*,char const*,char*) ;
 int FUNC_9 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_10(struct evhttp_request *VAR_1, void *VAR_2)
{
 const char *VAR_3;
 struct evkeyvalq *VAR_4;
 struct evkeyval *VAR_5;
 struct evbuffer *VAR_6;

 switch (FUNC_2(VAR_1)) {
 case 134: VAR_3 = "GET"; break;
 case 130: VAR_3 = "POST"; break;
 case 133: VAR_3 = "HEAD"; break;
 case 129: VAR_3 = "PUT"; break;
 case 135: VAR_3 = "DELETE"; break;
 case 132: VAR_3 = "OPTIONS"; break;
 case 128: VAR_3 = "TRACE"; break;
 case 136: VAR_3 = "CONNECT"; break;
 case 131: VAR_3 = "PATCH"; break;
 default: VAR_3 = "unknown"; break;
 }

 FUNC_8("Received a %s request for %s\nHeaders:\n",
     VAR_3, FUNC_5(VAR_1));

 VAR_4 = FUNC_4(VAR_1);
 for (VAR_5 = VAR_4->tqh_first; VAR_5;
     VAR_5 = VAR_5->next.tqe_next) {
  FUNC_8("  %s: %s\n", VAR_5->key, VAR_5->value);
 }

 VAR_6 = FUNC_3(VAR_1);
 FUNC_9("Input data: <<<");
 while (FUNC_0(VAR_6)) {
  int VAR_7;
  char VAR_8[128];
  VAR_7 = FUNC_1(VAR_6, VAR_8, sizeof(VAR_8));
  if (VAR_7 > 0)
   (void) FUNC_7(VAR_8, 1, VAR_7, VAR_0);
 }
 FUNC_9(">>>");

 FUNC_6(VAR_1, 200, "OK", ((void*)0));
}
