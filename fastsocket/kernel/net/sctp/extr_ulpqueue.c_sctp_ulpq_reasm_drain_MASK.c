
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sctp_ulpq {int reasm; } ;
struct sctp_ulpevent {int msg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff_head*,int ) ;
 int FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_2 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_3 (struct sctp_ulpq*) ;
 int FUNC_4 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_7(struct sctp_ulpq *VAR_1)
{
 struct sctp_ulpevent *VAR_2 = ((void*)0);
 struct sk_buff_head VAR_3;

 if (FUNC_5(&VAR_1->reasm))
  return;

 while ((VAR_2 = FUNC_3(VAR_1)) != ((void*)0)) {

  if ((VAR_2) && (VAR_2->msg_flags & VAR_0)){
   FUNC_6(&VAR_3);
   FUNC_0(&VAR_3, FUNC_1(VAR_2));

   VAR_2 = FUNC_2(VAR_1, VAR_2);
  }




  if (VAR_2)
   FUNC_4(VAR_1, VAR_2);
 }
}
