
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
struct sftp_conn {scalar_t__ limit_kbps; int bwlimit_out; int fd_out; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int mlen ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct iovec*,int,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int) ;
 int * VAR_2 ;
 int FUNC_3 (struct sshbuf*) ;
 scalar_t__ FUNC_4 (struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct sftp_conn *VAR_4, struct sshbuf *VAR_5)
{
 u_char VAR_6[4];
 struct iovec VAR_7[2];

 if (FUNC_3(VAR_5) > VAR_0)
  FUNC_1("Outbound message too long %zu", FUNC_3(VAR_5));


 FUNC_2(VAR_6, FUNC_3(VAR_5));
 VAR_7[0].iov_base = VAR_6;
 VAR_7[0].iov_len = sizeof(VAR_6);
 VAR_7[1].iov_base = (u_char *)FUNC_4(VAR_5);
 VAR_7[1].iov_len = FUNC_3(VAR_5);

 if (FUNC_0(VAR_3, VAR_4->fd_out, VAR_7, 2,
     VAR_4->limit_kbps > 0 ? VAR_2 : ((void*)0), &VAR_4->bwlimit_out) !=
     FUNC_3(VAR_5) + sizeof(VAR_6))
  FUNC_1("Couldn't send packet: %s", FUNC_6(VAR_1));

 FUNC_5(VAR_5);
}
