
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct lsock_port {scalar_t__ type; int peers; int name; } ;
struct TYPE_2__ {int stream; int cred; int peerlen; int fd; int * id; struct sockaddr* peer; } ;
struct lsock_peer {TYPE_1__ input; int peer; struct lsock_port* port; } ;


 int FUNC_0 (int *,struct lsock_peer*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,struct sockaddr*,int*) ;
 struct lsock_peer* FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int,int ,struct lsock_peer*,int *) ;
 int FUNC_5 (struct lsock_peer*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7(int VAR_5, void *VAR_6)
{
 struct lsock_port *VAR_7 = VAR_6;
 struct lsock_peer *VAR_8;

 if ((VAR_8 = FUNC_2(1, sizeof(*VAR_8))) == ((void*)0)) {
  FUNC_6(VAR_2, "%s: peer malloc failed", VAR_7->name);
  (void)FUNC_3(FUNC_1(VAR_5, ((void*)0), ((void*)0)));
  return;
 }

 VAR_8->port = VAR_7;

 VAR_8->input.stream = 1;
 VAR_8->input.cred = (VAR_7->type == VAR_0 ||
     VAR_7->type == VAR_1);
 VAR_8->input.peerlen = sizeof(VAR_8->peer);
 VAR_8->input.peer = (struct sockaddr *)&VAR_8->peer;

 VAR_8->input.fd = FUNC_1(VAR_5, VAR_8->input.peer, &VAR_8->input.peerlen);
 if (VAR_8->input.fd == -1) {
  FUNC_6(VAR_2, "%s: accept failed: %m", VAR_7->name);
  FUNC_5(VAR_8);
  return;
 }

 if ((VAR_8->input.id = FUNC_4(VAR_8->input.fd, VAR_4,
     VAR_8, ((void*)0))) == ((void*)0)) {
  FUNC_3(VAR_8->input.fd);
  FUNC_5(VAR_8);
  return;
 }

 FUNC_0(&VAR_7->peers, VAR_8, VAR_3);
}
