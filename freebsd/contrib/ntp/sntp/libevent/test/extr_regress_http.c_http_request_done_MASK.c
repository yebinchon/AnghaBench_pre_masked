
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (struct evhttp_request*) ;
 int FUNC_6 (struct evhttp_request*) ;
 scalar_t__ FUNC_7 (struct evhttp_request*) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 int FUNC_9 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (char const*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_11(struct evhttp_request *VAR_4, void *VAR_5)
{
 const char *VAR_6 = VAR_5;

 if (FUNC_7(VAR_4) != VAR_0) {
  FUNC_9(VAR_2, "FAILED\n");
  FUNC_8(1);
 }

 if (FUNC_4(FUNC_6(VAR_4), "Content-Type") == ((void*)0)) {
  FUNC_9(VAR_2, "FAILED\n");
  FUNC_8(1);
 }

 if (FUNC_2(FUNC_5(VAR_4)) != FUNC_10(VAR_6)) {
  FUNC_9(VAR_2, "FAILED\n");
  FUNC_8(1);
 }

 if (FUNC_1(FUNC_5(VAR_4), VAR_6) != 0) {
  FUNC_9(VAR_2, "FAILED\n");
  FUNC_8(1);
 }

 VAR_3 = 1;
 FUNC_0(VAR_1);
 FUNC_3(VAR_1, ((void*)0));
}
