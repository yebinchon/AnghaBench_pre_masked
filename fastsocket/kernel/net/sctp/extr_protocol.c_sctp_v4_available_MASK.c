
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ s_addr; } ;
struct TYPE_5__ {TYPE_1__ sin_addr; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct TYPE_6__ {int freebind; } ;
struct sctp_sock {TYPE_3__ inet; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_sock*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(union sctp_addr *VAR_4, struct sctp_sock *VAR_5)
{
 int VAR_6 = FUNC_1(&VAR_2, VAR_4->v4.sin_addr.s_addr);


 if (VAR_4->v4.sin_addr.s_addr != FUNC_0(VAR_0) &&
    VAR_6 != VAR_1 &&
    !VAR_5->inet.freebind &&
    !VAR_3)
  return 0;

 if (FUNC_2(FUNC_3(VAR_5)))
  return 0;

 return 1;
}
