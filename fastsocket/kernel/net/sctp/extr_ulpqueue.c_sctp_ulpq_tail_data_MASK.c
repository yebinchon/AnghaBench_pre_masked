
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sctp_ulpq {int dummy; } ;
struct sctp_ulpevent {int msg_flags; } ;
struct sctp_chunk {int asoc; scalar_t__ chunk_hdr; } ;
typedef int sctp_data_chunk_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff_head*,int ) ;
 int FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_2 (int ,struct sctp_chunk*,int ) ;
 struct sctp_ulpevent* FUNC_3 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_4 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 int FUNC_5 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 int FUNC_6 (struct sk_buff_head*) ;

int FUNC_7(struct sctp_ulpq *VAR_2, struct sctp_chunk *VAR_3,
   gfp_t VAR_4)
{
 struct sk_buff_head VAR_5;
 sctp_data_chunk_t *VAR_6;
 struct sctp_ulpevent *VAR_7;

 VAR_6 = (sctp_data_chunk_t *) VAR_3->chunk_hdr;


 VAR_7 = FUNC_2(VAR_3->asoc, VAR_3, VAR_4);
 if (!VAR_7)
  return -VAR_0;


 VAR_7 = FUNC_4(VAR_2, VAR_7);


 if ((VAR_7) && (VAR_7->msg_flags & VAR_1)){

  FUNC_6(&VAR_5);
  FUNC_0(&VAR_5, FUNC_1(VAR_7));

  VAR_7 = FUNC_3(VAR_2, VAR_7);
 }




 if (VAR_7)
  FUNC_5(VAR_2, VAR_7);

 return 0;
}
