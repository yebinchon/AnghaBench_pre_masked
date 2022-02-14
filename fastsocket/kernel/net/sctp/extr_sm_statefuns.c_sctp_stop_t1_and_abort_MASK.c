
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static sctp_disposition_t FUNC_7(sctp_cmd_seq_t *VAR_8,
        __be16 VAR_9, int VAR_10,
        const struct sctp_association *VAR_11,
        struct sctp_transport *VAR_12)
{
 FUNC_0("ABORT received (INIT).\n");
 FUNC_6(VAR_8, VAR_1,
   FUNC_4(VAR_7));
 FUNC_2(VAR_6);
 FUNC_6(VAR_8, VAR_3,
   FUNC_5(VAR_5));
 FUNC_6(VAR_8, VAR_2, FUNC_1(VAR_10));

 FUNC_6(VAR_8, VAR_0,
   FUNC_3(VAR_9));
 return VAR_4;
}
