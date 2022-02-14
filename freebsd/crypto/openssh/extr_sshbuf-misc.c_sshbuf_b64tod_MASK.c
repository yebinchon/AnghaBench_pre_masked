
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *,size_t) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (struct sshbuf*,int *,int) ;
 size_t FUNC_5 (char const*) ;

int
FUNC_6(struct sshbuf *VAR_2, const char *VAR_3)
{
 size_t VAR_4 = FUNC_5(VAR_3);
 int VAR_5, VAR_6;
 u_char *VAR_7;

 if (VAR_4 == 0)
  return 0;
 if ((VAR_7 = FUNC_3(VAR_4)) == ((void*)0))
  return VAR_0;
 if ((VAR_5 = FUNC_0(VAR_3, VAR_7, VAR_4)) < 0) {
  FUNC_1(VAR_7, VAR_4);
  FUNC_2(VAR_7);
  return VAR_1;
 }
 if ((VAR_6 = FUNC_4(VAR_2, VAR_7, VAR_5)) < 0) {
  FUNC_1(VAR_7, VAR_4);
  FUNC_2(VAR_7);
  return VAR_6;
 }
 FUNC_1(VAR_7, VAR_4);
 FUNC_2(VAR_7);
 return 0;
}
