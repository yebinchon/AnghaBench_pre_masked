
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union sctp_addr_param {int dummy; } sctp_addr_param ;
struct TYPE_3__ {int sin_family; } ;
union sctp_addr {TYPE_1__ v4; } ;
struct sctp_packet {int dummy; } ;
struct sctp_errhdr {int length; int cause; scalar_t__ variable; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_af {int (* to_addr_param ) (union sctp_addr*,union sctp_addr_param*) ;} ;
typedef int sctp_errhdr_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_4__ {struct sctp_endpoint* ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct sctp_packet*) ;
 int FUNC_3 (int) ;
 struct sctp_packet* FUNC_4 (struct sctp_endpoint*,int *,struct sctp_chunk*,struct sctp_errhdr*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 struct sctp_af* FUNC_6 (int ) ;
 int FUNC_7 () ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (union sctp_addr*,union sctp_addr_param*) ;

__attribute__((used)) static int FUNC_10(union sctp_addr *VAR_4,
          struct sctp_chunk *VAR_5,
          sctp_cmd_seq_t *VAR_6)
{
 int VAR_7;
 struct sctp_packet *VAR_8;
 union sctp_addr_param *VAR_9;
 struct sctp_errhdr *VAR_10;
 struct sctp_endpoint *VAR_11;
 char VAR_12[sizeof(struct sctp_errhdr)+sizeof(union sctp_addr_param)];
 struct sctp_af *VAR_13 = FUNC_6(VAR_4->v4.sin_family);




 VAR_10 = (struct sctp_errhdr *)VAR_12;
 VAR_9 = (union sctp_addr_param *)VAR_10->variable;


 VAR_7 = VAR_13->to_addr_param(VAR_4, VAR_9);
 VAR_7 += sizeof(sctp_errhdr_t);

 VAR_10->cause = VAR_2;
 VAR_10->length = FUNC_3(VAR_7);


 VAR_11 = FUNC_8((FUNC_7()))->ep;




 VAR_8 = FUNC_4(VAR_11, ((void*)0), VAR_5, VAR_10, VAR_7);

 if (!VAR_8)
  goto out;
 FUNC_5(VAR_6, VAR_1, FUNC_2(VAR_8));

 FUNC_0(VAR_3);


 FUNC_5(VAR_6, VAR_0, FUNC_1());

out:



 return 0;
}
