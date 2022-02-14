
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int type; int rsa; int ecdsa; int dsa; } ;
struct sshbuf {int dummy; } ;
typedef int EVP_CIPHER ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char**) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;



 int FUNC_5 (int *,int ,int const*,int *,int,int *,int *) ;
 int FUNC_6 (int *,int ,int const*,int *,int,int *,int *) ;
 int FUNC_7 (int *,int ,int const*,int *,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct sshbuf*,char*,int) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int
FUNC_10(struct sshkey *VAR_4, struct sshbuf *VAR_5,
    const char *VAR_6, const char *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10, VAR_11 = FUNC_9(VAR_6);
 u_char *VAR_12 = (VAR_11 > 0) ? (u_char *)VAR_6 : ((void*)0);
 const EVP_CIPHER *VAR_13 = (VAR_11 > 0) ? FUNC_4() : ((void*)0);
 char *VAR_14;
 BIO *VAR_15 = ((void*)0);

 if (VAR_11 > 0 && VAR_11 <= 4)
  return VAR_3;
 if ((VAR_15 = FUNC_2(FUNC_3())) == ((void*)0))
  return VAR_0;

 switch (VAR_4->type) {
 case 130:
  VAR_8 = FUNC_5(VAR_15, VAR_4->dsa,
      VAR_13, VAR_12, VAR_11, ((void*)0), ((void*)0));
  break;






 case 128:
  VAR_8 = FUNC_7(VAR_15, VAR_4->rsa,
      VAR_13, VAR_12, VAR_11, ((void*)0), ((void*)0));
  break;
 default:
  VAR_8 = 0;
  break;
 }
 if (VAR_8 == 0) {
  VAR_9 = VAR_2;
  goto out;
 }
 if ((VAR_10 = FUNC_1(VAR_15, &VAR_14)) <= 0) {
  VAR_9 = VAR_1;
  goto out;
 }
 if ((VAR_9 = FUNC_8(VAR_5, VAR_14, VAR_10)) != 0)
  goto out;
 VAR_9 = 0;
 out:
 FUNC_0(VAR_15);
 return VAR_9;
}
