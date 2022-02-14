
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct httpread {int dummy; } ;
struct TYPE_2__ {int sin_port; int sin_addr; } ;
struct http_client {int cb_ctx; int (* cb ) (int ,struct http_client*,int ) ;TYPE_1__ dst; int hread; } ;
typedef enum httpread_event { ____Placeholder_httpread_event } httpread_event ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct http_client*,int *) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct http_client*,int ) ;
 int FUNC_6 (int ,struct http_client*,int ) ;
 int FUNC_7 (int ,struct http_client*,int ) ;
 int FUNC_8 (int ,struct http_client*,int ) ;
 int FUNC_9 (int ,struct http_client*,int ) ;
 int FUNC_10 (int ,char*,int,void*,...) ;

__attribute__((used)) static void FUNC_11(struct httpread *VAR_7, void *VAR_8,
         enum httpread_event VAR_9)
{
 struct http_client *VAR_10 = VAR_8;

 FUNC_10(VAR_5, "HTTP: httpread callback: handle=%p cookie=%p "
     "e=%d", VAR_7, VAR_8, VAR_9);

 FUNC_0(VAR_6, VAR_10, ((void*)0));
 switch (VAR_9) {
 case 129:
  if (FUNC_1(VAR_10->hread) == VAR_0)
  {
   int VAR_11 = FUNC_2(VAR_10->hread);
   if (VAR_11 == 200 ) {
    FUNC_10(VAR_5, "HTTP: Response OK from "
        "%s:%d",
        FUNC_3(VAR_10->dst.sin_addr),
        FUNC_4(VAR_10->dst.sin_port));
    VAR_10->cb(VAR_10->cb_ctx, VAR_10, VAR_3);
   } else {
    FUNC_10(VAR_5, "HTTP: Error %d from "
        "%s:%d", VAR_11,
        FUNC_3(VAR_10->dst.sin_addr),
        FUNC_4(VAR_10->dst.sin_port));
    VAR_10->cb(VAR_10->cb_ctx, VAR_10, VAR_2);
   }
  } else
   VAR_10->cb(VAR_10->cb_ctx, VAR_10, VAR_2);
  break;
 case 128:
  VAR_10->cb(VAR_10->cb_ctx, VAR_10, VAR_4);
  break;
 case 130:
  VAR_10->cb(VAR_10->cb_ctx, VAR_10, VAR_1);
  break;
 }
}
