
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {int dummy; } ;
struct evhttp_request {scalar_t__ response_code; int input_buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct kill*) ;
 struct kill* FUNC_4 () ;
 int FUNC_5 (struct kill*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct evhttp_request *VAR_3, void *VAR_4)
{
 struct kill* VAR_5 = ((void*)0);

 if (VAR_3->response_code != VAR_0) {
  FUNC_2(VAR_1, "FAILED (response code)\n");
  FUNC_1(1);
 }

 VAR_5 = FUNC_4();

 if ((FUNC_5(VAR_5, VAR_3->input_buffer)) == -1) {
  FUNC_2(VAR_1, "FAILED (unmarshal)\n");
  FUNC_1(1);
 }

 FUNC_3(VAR_5);

 VAR_2 = 1;
 FUNC_0(((void*)0));
}
