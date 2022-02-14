
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct httpread {int dummy; } ;
struct http_server {int cb_ctx; int (* cb ) (int ,struct http_request*) ;} ;
struct TYPE_2__ {int sin_port; int sin_addr; } ;
struct http_request {TYPE_1__ cli; struct http_server* srv; } ;
typedef enum httpread_event { ____Placeholder_httpread_event } httpread_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct http_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct http_request*) ;
 int FUNC_4 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct httpread *VAR_2, void *VAR_3,
       enum httpread_event VAR_4)
{
 struct http_request *VAR_5 = VAR_3;
 struct http_server *VAR_6 = VAR_5->srv;

 if (VAR_4 == VAR_0) {
  FUNC_4(VAR_1, "HTTP: Request from %s:%d received",
      FUNC_1(VAR_5->cli.sin_addr),
      FUNC_2(VAR_5->cli.sin_port));
  VAR_6->cb(VAR_6->cb_ctx, VAR_5);
  return;
 }
 FUNC_4(VAR_1, "HTTP: Request from %s:%d could not be received "
     "completely", FUNC_1(VAR_5->cli.sin_addr),
     FUNC_2(VAR_5->cli.sin_port));
 FUNC_0(VAR_5);
}
