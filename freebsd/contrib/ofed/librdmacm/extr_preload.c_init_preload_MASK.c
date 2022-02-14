
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* fxstat; void* sendfile; void* dup2; void* fcntl; void* getsockopt; void* setsockopt; void* getsockname; void* getpeername; void* close; void* shutdown; void* poll; void* writev; void* write; void* sendmsg; void* sendto; void* send; void* readv; void* read; void* recvmsg; void* recvfrom; void* recv; void* connect; void* accept; void* listen; void* bind; void* socket; } ;
struct TYPE_3__ {void* fcntl; void* getsockopt; void* setsockopt; void* getsockname; void* getpeername; void* close; void* shutdown; void* poll; void* writev; void* write; void* sendmsg; void* sendto; void* send; void* readv; void* read; void* recvmsg; void* recvfrom; void* recv; void* connect; void* accept; void* listen; void* bind; void* socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 static int VAR_5;


 if (VAR_5)
  return;

 FUNC_2(&VAR_2);
 if (VAR_5)
  goto out;

 VAR_3.socket = FUNC_0(VAR_1, "socket");
 VAR_3.bind = FUNC_0(VAR_1, "bind");
 VAR_3.listen = FUNC_0(VAR_1, "listen");
 VAR_3.accept = FUNC_0(VAR_1, "accept");
 VAR_3.connect = FUNC_0(VAR_1, "connect");
 VAR_3.recv = FUNC_0(VAR_1, "recv");
 VAR_3.recvfrom = FUNC_0(VAR_1, "recvfrom");
 VAR_3.recvmsg = FUNC_0(VAR_1, "recvmsg");
 VAR_3.read = FUNC_0(VAR_1, "read");
 VAR_3.readv = FUNC_0(VAR_1, "readv");
 VAR_3.send = FUNC_0(VAR_1, "send");
 VAR_3.sendto = FUNC_0(VAR_1, "sendto");
 VAR_3.sendmsg = FUNC_0(VAR_1, "sendmsg");
 VAR_3.write = FUNC_0(VAR_1, "write");
 VAR_3.writev = FUNC_0(VAR_1, "writev");
 VAR_3.poll = FUNC_0(VAR_1, "poll");
 VAR_3.shutdown = FUNC_0(VAR_1, "shutdown");
 VAR_3.close = FUNC_0(VAR_1, "close");
 VAR_3.getpeername = FUNC_0(VAR_1, "getpeername");
 VAR_3.getsockname = FUNC_0(VAR_1, "getsockname");
 VAR_3.setsockopt = FUNC_0(VAR_1, "setsockopt");
 VAR_3.getsockopt = FUNC_0(VAR_1, "getsockopt");
 VAR_3.fcntl = FUNC_0(VAR_1, "fcntl");
 VAR_3.dup2 = FUNC_0(VAR_1, "dup2");
 VAR_3.sendfile = FUNC_0(VAR_1, "sendfile");
 VAR_3.fxstat = FUNC_0(VAR_1, "__fxstat");

 VAR_4.socket = FUNC_0(VAR_0, "rsocket");
 VAR_4.bind = FUNC_0(VAR_0, "rbind");
 VAR_4.listen = FUNC_0(VAR_0, "rlisten");
 VAR_4.accept = FUNC_0(VAR_0, "raccept");
 VAR_4.connect = FUNC_0(VAR_0, "rconnect");
 VAR_4.recv = FUNC_0(VAR_0, "rrecv");
 VAR_4.recvfrom = FUNC_0(VAR_0, "rrecvfrom");
 VAR_4.recvmsg = FUNC_0(VAR_0, "rrecvmsg");
 VAR_4.read = FUNC_0(VAR_0, "rread");
 VAR_4.readv = FUNC_0(VAR_0, "rreadv");
 VAR_4.send = FUNC_0(VAR_0, "rsend");
 VAR_4.sendto = FUNC_0(VAR_0, "rsendto");
 VAR_4.sendmsg = FUNC_0(VAR_0, "rsendmsg");
 VAR_4.write = FUNC_0(VAR_0, "rwrite");
 VAR_4.writev = FUNC_0(VAR_0, "rwritev");
 VAR_4.poll = FUNC_0(VAR_0, "rpoll");
 VAR_4.shutdown = FUNC_0(VAR_0, "rshutdown");
 VAR_4.close = FUNC_0(VAR_0, "rclose");
 VAR_4.getpeername = FUNC_0(VAR_0, "rgetpeername");
 VAR_4.getsockname = FUNC_0(VAR_0, "rgetsockname");
 VAR_4.setsockopt = FUNC_0(VAR_0, "rsetsockopt");
 VAR_4.getsockopt = FUNC_0(VAR_0, "rgetsockopt");
 VAR_4.fcntl = FUNC_0(VAR_0, "rfcntl");

 FUNC_1();
 FUNC_4();
 VAR_5 = 1;
out:
 FUNC_3(&VAR_2);
}
