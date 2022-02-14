
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_4__ {scalar_t__ adaptation_ind; } ;
struct TYPE_3__ {int sinit_max_instreams; int sinit_num_ostreams; } ;
struct sctp_association {scalar_t__ state; TYPE_2__ peer; TYPE_1__ c; } ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_ulpevent*) ;
 int FUNC_6 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_7 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_8 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_9 (struct sctp_association const*,int ) ;
 struct sctp_ulpevent* FUNC_10 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static sctp_disposition_t FUNC_11(const struct sctp_endpoint *VAR_12,
     const struct sctp_association *VAR_13,
     struct sctp_chunk *VAR_14,
     sctp_cmd_seq_t *VAR_15,
     struct sctp_association *VAR_16)
{
 struct sctp_ulpevent *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 struct sctp_chunk *VAR_19;
 if (VAR_13->state < VAR_11) {
  FUNC_6(VAR_15, VAR_5,
    FUNC_4(VAR_9));
  FUNC_6(VAR_15, VAR_3,
    FUNC_3(VAR_11));
  FUNC_1(VAR_10);
  FUNC_6(VAR_15, VAR_2,
    FUNC_2());
  VAR_17 = FUNC_10(VAR_13, 0,
          VAR_6, 0,
          VAR_13->c.sinit_num_ostreams,
          VAR_13->c.sinit_max_instreams,
          ((void*)0), VAR_0);
  if (!VAR_17)
   goto nomem;






  if (VAR_13->peer.adaptation_ind) {
   VAR_18 = FUNC_9(VAR_13,
         VAR_0);
   if (!VAR_18)
    goto nomem;

  }
 }

 VAR_19 = FUNC_7(VAR_16, VAR_14);
 if (!VAR_19)
  goto nomem;

 FUNC_6(VAR_15, VAR_4, FUNC_0(VAR_19));

 if (VAR_17)
  FUNC_6(VAR_15, VAR_1,
    FUNC_5(VAR_17));
 if (VAR_18)
  FUNC_6(VAR_15, VAR_1,
     FUNC_5(VAR_18));

 return VAR_7;

nomem:
 if (VAR_18)
  FUNC_8(VAR_18);
 if (VAR_17)
  FUNC_8(VAR_17);
 return VAR_8;
}
