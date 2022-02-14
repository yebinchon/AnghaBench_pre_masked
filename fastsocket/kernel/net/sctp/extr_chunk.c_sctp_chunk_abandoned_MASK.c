
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_datamsg {int expires_at; int can_abandon; } ;
struct sctp_chunk {struct sctp_datamsg* msg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(struct sctp_chunk *VAR_1)
{
 struct sctp_datamsg *VAR_2 = VAR_1->msg;

 if (!VAR_2->can_abandon)
  return 0;

 if (FUNC_0(VAR_0, VAR_2->expires_at))
  return 1;

 return 0;
}
