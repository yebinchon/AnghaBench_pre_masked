
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpq {TYPE_2__* asoc; } ;
struct sctp_stream {int dummy; } ;
typedef int __u16 ;
struct TYPE_4__ {TYPE_1__* ssnmap; } ;
struct TYPE_3__ {struct sctp_stream in; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sctp_stream*,int ) ;
 int FUNC_2 (struct sctp_stream*,int ,int ) ;
 int FUNC_3 (struct sctp_ulpq*,int ) ;

void FUNC_4(struct sctp_ulpq *VAR_0, __u16 VAR_1, __u16 VAR_2)
{
 struct sctp_stream *VAR_3;


 VAR_3 = &VAR_0->asoc->ssnmap->in;


 if (FUNC_0(VAR_2, FUNC_1(VAR_3, VAR_1)))
  return;


 FUNC_2(VAR_3, VAR_1, VAR_2);




 FUNC_3(VAR_0, VAR_1);
 return;
}
