
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sockaddr {int sa_family; } ;
struct sock {int dummy; } ;
struct sctp_af {int sockaddr_len; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sock*,struct sockaddr*,int) ;
 int FUNC_1 (struct sock*,struct sockaddr*,int) ;
 int FUNC_2 (struct sock*,union sctp_addr*,int ) ;
 struct sctp_af* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, struct sockaddr *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 void *VAR_6;
 struct sockaddr *VAR_7;
 struct sctp_af *VAR_8;

 FUNC_0("sctp_bindx_add (sk: %p, addrs: %p, addrcnt: %d)\n",
     VAR_1, VAR_2, VAR_3);

 VAR_6 = VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {



  VAR_7 = (struct sockaddr *)VAR_6;
  VAR_8 = FUNC_3(VAR_7->sa_family);
  if (!VAR_8) {
   VAR_5 = -VAR_0;
   goto err_bindx_add;
  }

  VAR_5 = FUNC_2(VAR_1, (union sctp_addr *)VAR_7,
          VAR_8->sockaddr_len);

  VAR_6 += VAR_8->sockaddr_len;

err_bindx_add:
  if (VAR_5 < 0) {

   if (VAR_4 > 0)
    FUNC_1(VAR_1, VAR_2, VAR_4);
   return VAR_5;
  }
 }

 return VAR_5;
}
