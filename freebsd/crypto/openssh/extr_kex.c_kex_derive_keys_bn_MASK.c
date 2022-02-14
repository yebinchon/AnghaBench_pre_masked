
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sshbuf {int dummy; } ;
struct ssh {int dummy; } ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (struct ssh*,int *,int ,struct sshbuf*) ;
 int FUNC_1 (struct sshbuf*) ;
 struct sshbuf* FUNC_2 () ;
 int FUNC_3 (struct sshbuf*,int const*) ;

int
FUNC_4(struct ssh *VAR_1, u_char *VAR_2, u_int VAR_3,
    const BIGNUM *VAR_4)
{
 struct sshbuf *VAR_5;
 int VAR_6;

 if ((VAR_5 = FUNC_2()) == ((void*)0))
  return VAR_0;
 if ((VAR_6 = FUNC_3(VAR_5, VAR_4)) == 0)
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
 FUNC_1(VAR_5);
 return VAR_6;
}
