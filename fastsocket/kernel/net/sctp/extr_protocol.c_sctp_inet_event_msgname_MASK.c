
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;
struct sctp_ulpevent {struct sctp_association* asoc; } ;
struct TYPE_6__ {struct sockaddr_in v4; } ;
struct TYPE_5__ {int port; TYPE_3__ primary_addr; } ;
struct sctp_association {TYPE_2__ peer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static void FUNC_2(struct sctp_ulpevent *VAR_0, char *VAR_1,
        int *VAR_2)
{
 struct sockaddr_in *VAR_3, *VAR_4;

 if (VAR_1) {
  struct sctp_association *VAR_5;

  VAR_5 = VAR_0->asoc;
  FUNC_1(VAR_1, VAR_2);
  VAR_3 = (struct sockaddr_in *)VAR_1;
  VAR_4 = &VAR_5->peer.primary_addr.v4;
  VAR_3->sin_port = FUNC_0(VAR_5->peer.port);
  VAR_3->sin_addr.s_addr = VAR_4->sin_addr.s_addr;
 }
}
