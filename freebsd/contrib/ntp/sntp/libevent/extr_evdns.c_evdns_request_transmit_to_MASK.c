
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct request {scalar_t__ request_len; int ns; scalar_t__ request; TYPE_1__* base; } ;
struct nameserver {int requests_inflight; int socket; int addrlen; int address; int event; } ;
struct TYPE_2__ {scalar_t__ disable_when_inactive; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,void*,scalar_t__,int ,struct sockaddr*,int ) ;

__attribute__((used)) static int
FUNC_8(struct request *VAR_0, struct nameserver *VAR_1) {
 int VAR_2;
 FUNC_0(VAR_0->base);
 FUNC_1(VAR_0);

 if (VAR_1->requests_inflight == 1 &&
  VAR_0->base->disable_when_inactive &&
  FUNC_3(&VAR_1->event, ((void*)0)) < 0) {
  return 1;
 }

 VAR_2 = FUNC_7(VAR_1->socket, (void*)VAR_0->request, VAR_0->request_len, 0,
     (struct sockaddr *)&VAR_1->address, VAR_1->addrlen);
 if (VAR_2 < 0) {
  int VAR_3 = FUNC_5(VAR_1->socket);
  if (FUNC_2(VAR_3))
   return 1;
  FUNC_6(VAR_0->ns, FUNC_4(VAR_3));
  return 2;
 } else if (VAR_2 != (int)VAR_0->request_len) {
  return 1;
 } else {
  return 0;
 }
}
