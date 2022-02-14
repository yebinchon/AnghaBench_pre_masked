
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
struct msghdr {int msg_iov; } ;
typedef int sctp_errhdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (struct sctp_chunk*,size_t,void*) ;
 int FUNC_4 (struct sctp_chunk*) ;
 int FUNC_5 (struct sctp_chunk*,int ,size_t) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association const*,int *,int) ;

struct sctp_chunk *FUNC_7(const struct sctp_association *VAR_2,
     const struct msghdr *VAR_3,
     size_t VAR_4)
{
 struct sctp_chunk *VAR_5;
 void *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_5 = FUNC_6(VAR_2, ((void*)0), sizeof(sctp_errhdr_t) + VAR_4);
 if (!VAR_5)
  goto err_chunk;

 if (VAR_4) {

  VAR_6 = FUNC_1(VAR_4, VAR_0);
  if (!VAR_6)
   goto err_payload;

  VAR_7 = FUNC_2(VAR_6, VAR_3->msg_iov, VAR_4);
  if (VAR_7 < 0)
   goto err_copy;
 }

 FUNC_5(VAR_5, VAR_1, VAR_4);
 FUNC_3(VAR_5, VAR_4, VAR_6);

 if (VAR_4)
  FUNC_0(VAR_6);

 return VAR_5;

err_copy:
 FUNC_0(VAR_6);
err_payload:
 FUNC_4(VAR_5);
 VAR_5 = ((void*)0);
err_chunk:
 return VAR_5;
}
