
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin_port; int sin_addr; } ;
struct http_client {size_t req_pos; int cb_ctx; int (* cb ) (int ,struct http_client*,int ) ;int * hread; int max_response; int sd; int * req; TYPE_1__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,struct http_client*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t,size_t,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct http_client*,int ) ;
 int FUNC_7 (int ,struct http_client*,int ) ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (int *) ;
 size_t FUNC_10 (int *) ;
 size_t FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(int VAR_6, void *VAR_7, void *VAR_8)
{
 struct http_client *VAR_9 = VAR_7;
 int VAR_10;
 size_t VAR_11;

 VAR_11 = FUNC_11(VAR_9->req) - VAR_9->req_pos;
 FUNC_8(VAR_3, "HTTP: Send client request to %s:%d (%lu of %lu "
     "bytes remaining)",
     FUNC_2(VAR_9->dst.sin_addr), FUNC_3(VAR_9->dst.sin_port),
     (unsigned long) FUNC_11(VAR_9->req),
     (unsigned long) VAR_11);

 VAR_10 = FUNC_4(VAR_9->sd, FUNC_10(VAR_9->req) + VAR_9->req_pos, VAR_11, 0);
 if (VAR_10 < 0) {
  FUNC_8(VAR_3, "HTTP: Failed to send buffer: %s",
      FUNC_5(VAR_4));
  FUNC_0(VAR_9->sd, VAR_0);
  VAR_9->cb(VAR_9->cb_ctx, VAR_9, VAR_1);
  return;
 }

 if ((size_t) VAR_10 < VAR_11) {
  FUNC_8(VAR_3, "HTTP: Sent %d of %lu bytes; %lu bytes "
      "remaining",
      VAR_10, (unsigned long) FUNC_11(VAR_9->req),
      (unsigned long) VAR_11 - VAR_10);
  VAR_9->req_pos += VAR_10;
  return;
 }

 FUNC_8(VAR_3, "HTTP: Full client request sent to %s:%d",
     FUNC_2(VAR_9->dst.sin_addr), FUNC_3(VAR_9->dst.sin_port));
 FUNC_0(VAR_9->sd, VAR_0);
 FUNC_9(VAR_9->req);
 VAR_9->req = ((void*)0);

 VAR_9->hread = FUNC_1(VAR_9->sd, VAR_5, VAR_9,
       VAR_9->max_response, VAR_2);
 if (VAR_9->hread == ((void*)0)) {
  VAR_9->cb(VAR_9->cb_ctx, VAR_9, VAR_1);
  return;
 }
}
