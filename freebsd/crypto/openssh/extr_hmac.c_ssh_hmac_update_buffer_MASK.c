
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;
struct ssh_hmac_ctx {int digest; } ;


 int FUNC_0 (int ,struct sshbuf const*) ;

int
FUNC_1(struct ssh_hmac_ctx *VAR_0, const struct sshbuf *VAR_1)
{
 return FUNC_0(VAR_0->digest, VAR_1);
}
