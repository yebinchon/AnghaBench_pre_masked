
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int BIGNUM ;


 int * FUNC_0 (int const*,size_t,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct sshbuf*,int const**,size_t*) ;

int
FUNC_2(struct sshbuf *VAR_1, BIGNUM *VAR_2)
{
 const u_char *VAR_3;
 size_t VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_1, &VAR_3, &VAR_4)) != 0)
  return VAR_5;
 if (VAR_2 != ((void*)0) && FUNC_0(VAR_3, VAR_4, VAR_2) == ((void*)0))
  return VAR_0;
 return 0;
}
