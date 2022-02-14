
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int s_addr; } ;
struct http_server {void (* cb ) (void*,struct http_request*) ;scalar_t__ fd; int port; void* cb_ctx; } ;
typedef int sin ;
typedef int on ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,struct http_server*,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int FUNC_4 (struct http_server*) ;
 int FUNC_5 (struct in_addr) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 struct http_server* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ,int*,int) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,char*,int,...) ;

struct http_server * FUNC_13(struct in_addr *VAR_11, int VAR_12,
          void (*VAR_13)(void *VAR_14,
       struct http_request *VAR_15),
          void *VAR_16)
{
 struct sockaddr_in VAR_17;
 struct http_server *VAR_18;
 int VAR_19 = 1;

 VAR_18 = FUNC_8(sizeof(*VAR_18));
 if (VAR_18 == ((void*)0))
  return ((void*)0);
 VAR_18->cb = VAR_13;
 VAR_18->cb_ctx = VAR_16;

 VAR_18->fd = FUNC_10(VAR_0, VAR_6, 0);
 if (VAR_18->fd < 0)
  goto fail;

 if (FUNC_9(VAR_18->fd, VAR_7, VAR_8, &VAR_19, sizeof(VAR_19)) < 0)
 {
  FUNC_12(VAR_4,
      "HTTP: setsockopt(SO_REUSEADDR) failed: %s",
      FUNC_11(VAR_9));

 }

 if (FUNC_2(VAR_18->fd, VAR_3, VAR_5) < 0)
  goto fail;
 if (VAR_12 < 0)
  VAR_18->port = 49152;
 else
  VAR_18->port = VAR_12;

 FUNC_7(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.sin_family = VAR_0;
 VAR_17.sin_addr.s_addr = VAR_11->s_addr;

 for (;;) {
  VAR_17.sin_port = FUNC_3(VAR_18->port);
  if (FUNC_0(VAR_18->fd, (struct sockaddr *) &VAR_17, sizeof(VAR_17)) == 0)
   break;
  if (VAR_9 == VAR_1) {

   if (++VAR_18->port == 65535 || VAR_12 >= 0)
    goto fail;
   continue;
  }
  FUNC_12(VAR_4, "HTTP: Failed to bind server port %d: "
      "%s", VAR_18->port, FUNC_11(VAR_9));
  goto fail;
 }
 if (FUNC_6(VAR_18->fd, 10 ) < 0 ||
     FUNC_2(VAR_18->fd, VAR_3, VAR_5) < 0 ||
     FUNC_1(VAR_18->fd, VAR_2, VAR_10,
    VAR_18, ((void*)0)))
  goto fail;

 FUNC_12(VAR_4, "HTTP: Started server on %s:%d",
     FUNC_5(*VAR_11), VAR_18->port);

 return VAR_18;

fail:
 FUNC_4(VAR_18);
 return ((void*)0);
}
