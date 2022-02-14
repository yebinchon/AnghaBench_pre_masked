
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct event_base {int dummy; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct event_base*,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (struct evhttp_request*) ;
 scalar_t__ FUNC_6 (struct evhttp_request*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char const*) ;
 int VAR_3 ;

void
FUNC_10(struct evhttp_request *VAR_4, void *VAR_5)
{
 const char *VAR_6 = VAR_0;
 struct event_base *VAR_7 = VAR_5;

 if (VAR_4 == ((void*)0)) {
  FUNC_8(VAR_2, "FAILED (timeout)\n");
  FUNC_7(1);
 }

 if (FUNC_6(VAR_4) != VAR_1) {

  FUNC_8(VAR_2, "FAILED (response code)\n");
  FUNC_7(1);
 }

 if (FUNC_3(FUNC_5(VAR_4), "Content-Type") == ((void*)0)) {
  FUNC_8(VAR_2, "FAILED (content type)\n");
  FUNC_7(1);
 }

 if (FUNC_1(FUNC_4(VAR_4)) != FUNC_9(VAR_6)) {
  FUNC_8(VAR_2, "FAILED (length %lu vs %lu)\n",
      (unsigned long)FUNC_1(FUNC_4(VAR_4)), (unsigned long)FUNC_9(VAR_6));
  FUNC_7(1);
 }

 if (FUNC_0(FUNC_4(VAR_4), VAR_6) != 0) {
  FUNC_8(VAR_2, "FAILED (data)\n");
  FUNC_7(1);
 }

 VAR_3 = 1;
 FUNC_2(VAR_7, ((void*)0));
}
