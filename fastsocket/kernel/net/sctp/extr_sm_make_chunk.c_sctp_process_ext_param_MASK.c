
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sctp_params {TYPE_3__* ext; TYPE_2__* p; } ;
struct TYPE_4__ {int prsctp_capable; int auth_capable; int asconf_capable; } ;
struct sctp_association {TYPE_1__ peer; } ;
typedef int sctp_paramhdr_t ;
typedef int __u16 ;
struct TYPE_6__ {int* chunks; } ;
struct TYPE_5__ {int length; } ;






 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct sctp_association *VAR_3,
        union sctp_params VAR_4)
{
 __u16 VAR_5 = FUNC_0(VAR_4.p->length) - sizeof(sctp_paramhdr_t);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  switch (VAR_4.ext->chunks[VAR_6]) {
      case 128:
       if (VAR_2 &&
    !VAR_3->peer.prsctp_capable)
        VAR_3->peer.prsctp_capable = 1;
       break;
      case 129:



       if (VAR_1)
        VAR_3->peer.auth_capable = 1;
       break;
      case 131:
      case 130:
       if (VAR_0)
        VAR_3->peer.asconf_capable = 1;
       break;
      default:
       break;
  }
 }
}
