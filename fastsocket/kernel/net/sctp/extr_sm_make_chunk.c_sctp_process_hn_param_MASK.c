
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union sctp_params {int v; TYPE_1__* p; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int __u16 ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int ,int ) ;
 int FUNC_2 (struct sctp_chunk*) ;
 int FUNC_3 (struct sctp_chunk*,int ,int ) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,struct sctp_chunk*,int ) ;

__attribute__((used)) static int FUNC_5(const struct sctp_association *VAR_1,
     union sctp_params VAR_2,
     struct sctp_chunk *VAR_3,
     struct sctp_chunk **VAR_4)
{
 __u16 VAR_5 = FUNC_0(VAR_2.p->length);






 if (*VAR_4)
  FUNC_2(*VAR_4);

 *VAR_4 = FUNC_4(VAR_1, VAR_3, VAR_5);

 if (*VAR_4) {
  FUNC_3(*VAR_4, VAR_0, VAR_5);
  FUNC_1(*VAR_4, VAR_5, VAR_2.v);
 }


 return 0;
}
