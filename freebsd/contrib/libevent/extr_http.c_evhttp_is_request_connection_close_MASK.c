
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int output_headers; int flags; int input_headers; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct evhttp_request *VAR_0)
{
 return
  FUNC_0(VAR_0->flags, VAR_0->input_headers) ||
  FUNC_0(VAR_0->flags, VAR_0->output_headers);
}
