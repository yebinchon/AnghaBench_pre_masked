
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int response_code; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct evhttp_request *VAR_3)
{
 return (VAR_3->response_code != VAR_1 &&
  VAR_3->response_code != VAR_2 &&
  (VAR_3->response_code < 100 || VAR_3->response_code >= 200) &&
  VAR_3->type != VAR_0);
}
