
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
struct sctp_paddrinfo {int spinfo_assoc_id; int spinfo_address; } ;
typedef int sp ;
typedef int socklen_t ;
typedef int sctp_assoc_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ,struct sctp_paddrinfo*,int*) ;
 int FUNC_1 (int ,struct sockaddr*,int ) ;
 int FUNC_2 (struct sctp_paddrinfo*,int ,int) ;

sctp_assoc_t
FUNC_3(int VAR_2, struct sockaddr *VAR_3)
{
 struct sctp_paddrinfo VAR_4;
 socklen_t VAR_5;


 VAR_5 = sizeof(VAR_4);
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1((caddr_t)&VAR_4.spinfo_address, VAR_3, VAR_3->sa_len);
 if (FUNC_0(VAR_2, VAR_0,
     VAR_1, &VAR_4, &VAR_5) != 0) {

  return ((sctp_assoc_t) 0);
 }
 return (VAR_4.spinfo_assoc_id);
}
