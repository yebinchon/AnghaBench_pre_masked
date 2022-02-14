
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int time_t ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {TYPE_1__* skb; } ;
struct sctp_bind_addr {int dummy; } ;
struct TYPE_10__ {int primary_path; } ;
struct TYPE_9__ {int bind_addr; } ;
struct sctp_association {int init_err_counter; int max_init_attempts; TYPE_4__ peer; TYPE_3__ base; } ;
typedef int sctp_subtype_t ;
typedef int sctp_errhdr_t ;
typedef int sctp_disposition_t ;
struct TYPE_8__ {int length; int type; } ;
struct TYPE_11__ {int lifespan_increment; TYPE_2__ param_hdr; } ;
typedef TYPE_5__ sctp_cookie_preserve_param_t ;
typedef int sctp_cmd_seq_t ;
typedef int bht ;
typedef int __be32 ;
struct TYPE_7__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 () ;
 int VAR_20 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_21 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (struct sctp_chunk*,int,TYPE_5__*) ;
 struct sctp_chunk* FUNC_12 (struct sctp_association const*,struct sctp_bind_addr*,int ,int) ;

__attribute__((used)) static sctp_disposition_t FUNC_13(const struct sctp_endpoint *VAR_22,
       const struct sctp_association *VAR_23,
       const sctp_subtype_t VAR_24,
       void *VAR_25,
       sctp_cmd_seq_t *VAR_26)
{
 struct sctp_chunk *VAR_27 = VAR_25;
 time_t VAR_28;
 sctp_cookie_preserve_param_t VAR_29;
 sctp_errhdr_t *VAR_30;
 struct sctp_chunk *VAR_31;
 struct sctp_bind_addr *VAR_32;
 int VAR_33 = VAR_23->init_err_counter + 1;

 if (VAR_33 > VAR_23->max_init_attempts) {
  FUNC_10(VAR_26, VAR_9,
    FUNC_1(VAR_0));
  FUNC_10(VAR_26, VAR_6,
    FUNC_3(VAR_17));
  return VAR_15;
 }

 VAR_30 = (sctp_errhdr_t *)(VAR_27->skb->data);
 VAR_28 = FUNC_9(*(__be32 *)((u8 *)VAR_30 + sizeof(sctp_errhdr_t)));
 VAR_28 = (VAR_28 * 2) / 1000;

 VAR_29.param_hdr.type = VAR_20;
 VAR_29.param_hdr.length = FUNC_8(sizeof(VAR_29));
 VAR_29.lifespan_increment = FUNC_7(VAR_28);


 VAR_32 = (struct sctp_bind_addr *) &VAR_23->base.bind_addr;
 VAR_31 = FUNC_12(VAR_23, VAR_32, VAR_1, sizeof(VAR_29));
 if (!VAR_31)
  goto nomem;

 FUNC_11(VAR_31, sizeof(VAR_29), &VAR_29);


 FUNC_10(VAR_26, VAR_2, FUNC_2());


 FUNC_10(VAR_26, VAR_11, FUNC_2());
 FUNC_10(VAR_26, VAR_4, FUNC_2());




 FUNC_10(VAR_26, VAR_3, FUNC_2());




 FUNC_10(VAR_26, VAR_10,
   FUNC_6(VAR_23->peer.primary_path));




 FUNC_10(VAR_26, VAR_5, FUNC_2());

 FUNC_10(VAR_26, VAR_13,
   FUNC_5(VAR_18));
 FUNC_10(VAR_26, VAR_7,
   FUNC_4(VAR_21));
 FUNC_10(VAR_26, VAR_12,
   FUNC_5(VAR_19));

 FUNC_10(VAR_26, VAR_8, FUNC_0(VAR_31));

 return VAR_14;

nomem:
 return VAR_16;
}
