
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sctp_ulpevent {int dummy; } ;
struct TYPE_2__ {int sinit_max_instreams; int sinit_num_ostreams; } ;
struct sctp_association {int ulpq; TYPE_1__ c; } ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 struct sctp_ulpevent* FUNC_0 (struct sctp_association*,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_1 (int *,struct sctp_ulpevent*) ;

__attribute__((used)) static void FUNC_2(sctp_cmd_seq_t *VAR_1,
     struct sctp_association *VAR_2,
     u8 VAR_3)
{
 struct sctp_ulpevent *VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0, VAR_3, 0,
         VAR_2->c.sinit_num_ostreams,
         VAR_2->c.sinit_max_instreams,
         ((void*)0), VAR_0);
 if (VAR_4)
  FUNC_1(&VAR_2->ulpq, VAR_4);
}
