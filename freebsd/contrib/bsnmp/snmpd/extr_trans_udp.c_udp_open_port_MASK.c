
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u_int8_t ;
typedef int u_int32_t ;
struct TYPE_6__ {int len; int* subs; } ;
struct TYPE_8__ {TYPE_1__ index; } ;
struct TYPE_7__ {int fd; int peerlen; struct sockaddr* peer; scalar_t__ cred; scalar_t__ stream; int * id; } ;
struct udp_port {int port; TYPE_3__ tport; TYPE_2__ input; int ret; void** addr; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct udp_port* FUNC_0 (int) ;
 int FUNC_1 (struct udp_port*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(u_int8_t *VAR_6, u_int32_t VAR_7, struct udp_port **VAR_8)
{
 struct udp_port *VAR_9;
 int VAR_10;

 if (VAR_7 > 0xffff)
  return (VAR_3);
 if ((VAR_9 = FUNC_0(sizeof(*VAR_9))) == ((void*)0))
  return (VAR_1);
 FUNC_1(VAR_9, 0, sizeof(*VAR_9));


 VAR_9->tport.index.len = 5;
 VAR_9->tport.index.subs[0] = VAR_6[0];
 VAR_9->tport.index.subs[1] = VAR_6[1];
 VAR_9->tport.index.subs[2] = VAR_6[2];
 VAR_9->tport.index.subs[3] = VAR_6[3];
 VAR_9->tport.index.subs[4] = VAR_7;

 VAR_9->addr[0] = VAR_6[0];
 VAR_9->addr[1] = VAR_6[1];
 VAR_9->addr[2] = VAR_6[2];
 VAR_9->addr[3] = VAR_6[3];
 VAR_9->port = VAR_7;

 VAR_9->input.fd = -1;
 VAR_9->input.id = ((void*)0);
 VAR_9->input.stream = 0;
 VAR_9->input.cred = 0;
 VAR_9->input.peer = (struct sockaddr *)&VAR_9->ret;
 VAR_9->input.peerlen = sizeof(VAR_9->ret);

 FUNC_2(VAR_5, &VAR_9->tport);

 if (VAR_4 != VAR_0 &&
     (VAR_10 = FUNC_4(&VAR_9->tport)) != VAR_2) {
  FUNC_3(&VAR_9->tport);
  return (VAR_10);
 }
 *VAR_8 = VAR_9;
 return (VAR_2);
}
