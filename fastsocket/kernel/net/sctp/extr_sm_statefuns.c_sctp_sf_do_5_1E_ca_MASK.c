
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
struct sctp_association {TYPE_2__ peer; TYPE_1__ c; scalar_t__ autoclose; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_ulpevent*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct sctp_chunk*,int) ;
 int FUNC_7 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 struct sctp_ulpevent* FUNC_9 (struct sctp_association const*,int ) ;
 struct sctp_ulpevent* FUNC_10 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_11 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_12(const struct sctp_endpoint *VAR_15,
          const struct sctp_association *VAR_16,
          const sctp_subtype_t VAR_17, void *VAR_18,
          sctp_cmd_seq_t *VAR_19)
{
 struct sctp_chunk *VAR_20 = VAR_18;
 struct sctp_ulpevent *VAR_21;

 if (!FUNC_11(VAR_20, VAR_16))
  return FUNC_7(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);




 if (!FUNC_6(VAR_20, sizeof(sctp_chunkhdr_t)))
  return FUNC_8(VAR_15, VAR_16, VAR_17, VAR_18,
        VAR_19);







 FUNC_5(VAR_19, VAR_3, FUNC_1());







 FUNC_5(VAR_19, VAR_6,
   FUNC_3(VAR_11));
 FUNC_5(VAR_19, VAR_4,
   FUNC_2(VAR_14));
 FUNC_0(VAR_13);
 FUNC_0(VAR_12);
 FUNC_5(VAR_19, VAR_2, FUNC_1());
 if (VAR_16->autoclose)
  FUNC_5(VAR_19, VAR_5,
    FUNC_3(VAR_10));





 VAR_21 = FUNC_10(VAR_16, 0, VAR_7,
          0, VAR_16->c.sinit_num_ostreams,
          VAR_16->c.sinit_max_instreams,
          ((void*)0), VAR_0);

 if (!VAR_21)
  goto nomem;

 FUNC_5(VAR_19, VAR_1, FUNC_4(VAR_21));






 if (VAR_16->peer.adaptation_ind) {
  VAR_21 = FUNC_9(VAR_16, VAR_0);
  if (!VAR_21)
   goto nomem;

  FUNC_5(VAR_19, VAR_1,
    FUNC_4(VAR_21));
 }

 return VAR_8;
nomem:
 return VAR_9;
}
