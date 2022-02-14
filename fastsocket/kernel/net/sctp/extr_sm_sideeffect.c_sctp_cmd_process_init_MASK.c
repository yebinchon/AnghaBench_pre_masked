
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_init_chunk_t ;
typedef int sctp_cmd_seq_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_association*,struct sctp_chunk*,int ,int *,int ) ;
 int FUNC_1 (struct sctp_chunk*) ;

__attribute__((used)) static int FUNC_2(sctp_cmd_seq_t *VAR_1,
     struct sctp_association *VAR_2,
     struct sctp_chunk *VAR_3,
     sctp_init_chunk_t *VAR_4,
     gfp_t VAR_5)
{
 int VAR_6;






 if (!FUNC_0(VAR_2, VAR_3, FUNC_1(VAR_3), VAR_4, VAR_5))
  VAR_6 = -VAR_0;
 else
  VAR_6 = 0;

 return VAR_6;
}
