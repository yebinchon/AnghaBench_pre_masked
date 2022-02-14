
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpq {TYPE_2__* asoc; } ;
struct sctp_ulpevent {int msg_flags; scalar_t__ stream; scalar_t__ ssn; } ;
struct sctp_stream {int dummy; } ;
typedef scalar_t__ __u16 ;
struct TYPE_4__ {TYPE_1__* ssnmap; } ;
struct TYPE_3__ {struct sctp_stream in; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_stream*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sctp_stream*,scalar_t__) ;
 int FUNC_2 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 int FUNC_3 (struct sctp_ulpq*,struct sctp_ulpevent*) ;

__attribute__((used)) static struct sctp_ulpevent *FUNC_4(struct sctp_ulpq *VAR_1,
          struct sctp_ulpevent *VAR_2)
{
 __u16 VAR_3, VAR_4;
 struct sctp_stream *VAR_5;


 if (VAR_0 & VAR_2->msg_flags)
  return VAR_2;


 VAR_3 = VAR_2->stream;
 VAR_4 = VAR_2->ssn;
 VAR_5 = &VAR_1->asoc->ssnmap->in;


 if (VAR_4 != FUNC_1(VAR_5, VAR_3)) {



  FUNC_3(VAR_1, VAR_2);
  return ((void*)0);
 }


 FUNC_0(VAR_5, VAR_3);




 FUNC_2(VAR_1, VAR_2);

 return VAR_2;
}
