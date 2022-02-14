
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int EC_POINT ;
typedef int EC_GROUP ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int const*,size_t,int *,int const*) ;
 scalar_t__ FUNC_3 (struct sshbuf*,int *,int *) ;
 int FUNC_4 (struct sshbuf*,int const**,size_t*) ;

int
FUNC_5(struct sshbuf *VAR_1, EC_POINT *VAR_2, const EC_GROUP *VAR_3)
{
 const u_char *VAR_4;
 size_t VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_4(VAR_1, &VAR_4, &VAR_5)) < 0)
  return VAR_6;
 if ((VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_2, VAR_3)) != 0)
  return VAR_6;

 if (FUNC_3(VAR_1, ((void*)0), ((void*)0)) != 0) {

  FUNC_1(("SSH_ERR_INTERNAL_ERROR"));
  FUNC_0();
  return VAR_0;
 }
 return 0;
}
