
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct TYPE_2__ {unsigned int error; } ;
struct sctp_association {TYPE_1__ outqueue; } ;
typedef int sctp_cmd_seq_t ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct sctp_ulpevent*) ;
 int FUNC_3 (int *,int ,int ) ;
 struct sctp_ulpevent* FUNC_4 (struct sctp_association*,int ,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(sctp_cmd_seq_t *VAR_6,
     struct sctp_association *VAR_7,
     unsigned VAR_8)
{
 struct sctp_ulpevent *VAR_9;

 VAR_9 = FUNC_4(VAR_7,0, VAR_1,
      (__u16)VAR_8, 0, 0, ((void*)0),
      VAR_0);

 if (VAR_9)
  FUNC_3(VAR_6, VAR_3,
    FUNC_2(VAR_9));

 FUNC_3(VAR_6, VAR_4,
   FUNC_1(VAR_5));


 VAR_7->outqueue.error = VAR_8;
 FUNC_3(VAR_6, VAR_2, FUNC_0());
}
