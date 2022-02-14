
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int EC_POINT ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int const*,size_t,int *,int ) ;
 scalar_t__ FUNC_7 (struct sshbuf*,int *,int *) ;
 int FUNC_8 (struct sshbuf*,int const**,size_t*) ;

int
FUNC_9(struct sshbuf *VAR_2, EC_KEY *VAR_3)
{
 EC_POINT *VAR_4 = FUNC_3(FUNC_0(VAR_3));
 int VAR_5;
 const u_char *VAR_6;
 size_t VAR_7;

 if (VAR_4 == ((void*)0)) {
  FUNC_5(("SSH_ERR_ALLOC_FAIL"));
  return VAR_0;
 }
 if ((VAR_5 = FUNC_8(VAR_2, &VAR_6, &VAR_7)) < 0) {
  FUNC_2(VAR_4);
  return VAR_5;
 }
 if ((VAR_5 = FUNC_6(VAR_6, VAR_7, VAR_4, FUNC_0(VAR_3))) != 0) {
  FUNC_2(VAR_4);
  return VAR_5;
 }
 if (FUNC_1(VAR_3, VAR_4) != 1) {
  FUNC_2(VAR_4);
  return VAR_0;
 }
 FUNC_2(VAR_4);

 if (FUNC_7(VAR_2, ((void*)0), ((void*)0)) != 0) {

  FUNC_5(("SSH_ERR_INTERNAL_ERROR"));
  FUNC_4();
  return VAR_1;
 }
 return 0;
}
