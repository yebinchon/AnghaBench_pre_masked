
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_state_t ;
struct TYPE_3__ {int (* fn ) (struct sctp_endpoint*,struct sctp_association*,int ,void*,int *) ;} ;
typedef TYPE_1__ sctp_sm_table_entry_t ;
typedef size_t sctp_event_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int printfn_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int *) ;


 int FUNC_1 (size_t,int ,int ,struct sctp_endpoint*,struct sctp_association*,void*,int ,int *,int ) ;
 TYPE_1__* FUNC_2 (size_t,int ,int ) ;

 int FUNC_3 (struct sctp_endpoint*,struct sctp_association*,int ,void*,int *) ;

int FUNC_4(sctp_event_t VAR_3, sctp_subtype_t VAR_4,
        sctp_state_t VAR_5,
        struct sctp_endpoint *VAR_6,
        struct sctp_association *VAR_7,
        void *VAR_8,
        gfp_t VAR_9)
{
 sctp_cmd_seq_t VAR_10;
 const sctp_sm_table_entry_t *VAR_11;
 sctp_disposition_t VAR_12;
 int VAR_13 = 0;
 typedef const char *(printfn_t)(sctp_subtype_t);

 static printfn_t *VAR_14[] = {
  ((void*)0), 131, 128, 130, 129,
 };
 printfn_t *VAR_15 __attribute__ ((unused)) = VAR_14[VAR_3];




 VAR_11 = FUNC_2(VAR_3, VAR_5, VAR_4);

 FUNC_0(&VAR_10);

 VAR_2;
 VAR_12 = (*VAR_11->fn)(VAR_6, VAR_7, VAR_4, VAR_8, &VAR_10);
 VAR_0;

 VAR_13 = FUNC_1(VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_12,
      &VAR_10, VAR_9);
 VAR_1;

 return VAR_13;
}
