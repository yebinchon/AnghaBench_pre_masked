
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_sackhdr {int dummy; } ;
struct sctp_association {int ep; int state; int outqueue; } ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,struct sctp_association*,int *,int ) ;
 scalar_t__ FUNC_2 (int *,struct sctp_sackhdr*) ;

__attribute__((used)) static int FUNC_3(sctp_cmd_seq_t *VAR_3,
     struct sctp_association *VAR_4,
     struct sctp_sackhdr *VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_2(&VAR_4->outqueue, VAR_5)) {

  VAR_6 = FUNC_1(VAR_2,
     FUNC_0(VAR_1),
     VAR_4->state, VAR_4->ep, VAR_4, ((void*)0),
     VAR_0);
 }

 return VAR_6;
}
