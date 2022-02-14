
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {int sin_port; int sin_addr; } ;
struct http_request {int fd; TYPE_1__ cli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,size_t,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 size_t FUNC_7 (struct wpabuf*) ;

void FUNC_8(struct http_request *VAR_2, struct wpabuf *VAR_3)
{
 int VAR_4;

 FUNC_4(VAR_0, "HTTP: Send %lu byte response to %s:%d",
     (unsigned long) FUNC_7(VAR_3),
     FUNC_0(VAR_2->cli.sin_addr),
     FUNC_1(VAR_2->cli.sin_port));

 VAR_4 = FUNC_2(VAR_2->fd, FUNC_6(VAR_3), FUNC_7(VAR_3), 0);
 if (VAR_4 < 0) {
  FUNC_4(VAR_0, "HTTP: Send failed: %s",
      FUNC_3(VAR_1));
 } else if ((size_t) VAR_4 < FUNC_7(VAR_3)) {
  FUNC_4(VAR_0, "HTTP: Sent only %d of %lu bytes",
      VAR_4, (unsigned long) FUNC_7(VAR_3));

 }

 FUNC_5(VAR_3);
}
