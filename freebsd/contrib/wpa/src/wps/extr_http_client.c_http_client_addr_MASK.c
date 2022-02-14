
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct http_client {int sd; size_t max_response; void (* cb ) (void*,struct http_client*,int) ;struct wpabuf* req; void* cb_ctx; struct sockaddr_in dst; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int,int ,int ,struct http_client*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,struct http_client*,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct http_client*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct http_client* FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,int ) ;

struct http_client * FUNC_9(struct sockaddr_in *VAR_11,
          struct wpabuf *VAR_12, size_t VAR_13,
          void (*VAR_14)(void *VAR_15,
       struct http_client *VAR_16,
       enum http_client_event VAR_17),
          void *VAR_18)
{
 struct http_client *VAR_19;

 VAR_19 = FUNC_5(sizeof(*VAR_19));
 if (VAR_19 == ((void*)0))
  return ((void*)0);
 VAR_19->sd = -1;
 VAR_19->dst = *VAR_11;
 VAR_19->max_response = VAR_13;
 VAR_19->cb = VAR_14;
 VAR_19->cb_ctx = VAR_18;

 VAR_19->sd = FUNC_6(VAR_0, VAR_7, 0);
 if (VAR_19->sd < 0)
  goto fail;

 if (FUNC_3(VAR_19->sd, VAR_3, VAR_6) != 0) {
  FUNC_8(VAR_5, "HTTP: fnctl(O_NONBLOCK) failed: %s",
      FUNC_7(VAR_8));
  goto fail;
 }

 if (FUNC_0(VAR_19->sd, (struct sockaddr *) VAR_11, sizeof(*VAR_11))) {
  if (VAR_8 != VAR_1) {
   FUNC_8(VAR_5, "HTTP: Failed to connect: %s",
       FUNC_7(VAR_8));
   goto fail;
  }





 }

 if (FUNC_1(VAR_19->sd, VAR_2, VAR_10,
    VAR_19, ((void*)0)) ||
     FUNC_2(VAR_4, 0,
       VAR_9, VAR_19, ((void*)0)))
  goto fail;

 VAR_19->req = VAR_12;

 return VAR_19;

fail:
 FUNC_4(VAR_19);
 return ((void*)0);
}
