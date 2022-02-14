
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 size_t FUNC_2 (int const*,int const*,int ,int *,size_t,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (struct sshbuf*,int *,size_t) ;

int
FUNC_5(struct sshbuf *VAR_5, const EC_POINT *VAR_6, const EC_GROUP *VAR_7)
{
 u_char VAR_8[VAR_1];
 BN_CTX *VAR_9;
 size_t VAR_10;
 int VAR_11;

 if ((VAR_9 = FUNC_1()) == ((void*)0))
  return VAR_2;
 if ((VAR_10 = FUNC_2(VAR_7, VAR_6, VAR_0,
     ((void*)0), 0, VAR_9)) > VAR_1) {
  FUNC_0(VAR_9);
  return VAR_4;
 }
 if (FUNC_2(VAR_7, VAR_6, VAR_0,
     VAR_8, VAR_10, VAR_9) != VAR_10) {
  FUNC_0(VAR_9);
  return VAR_3;
 }
 FUNC_0(VAR_9);
 VAR_11 = FUNC_4(VAR_5, VAR_8, VAR_10);
 FUNC_3(VAR_8, VAR_10);
 return VAR_11;
}
