
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t,char*,size_t) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 size_t FUNC_4 (struct sshbuf*) ;
 int * FUNC_5 (struct sshbuf*) ;
 char* FUNC_6 (char*) ;

char *
FUNC_7(struct sshbuf *VAR_1)
{
 size_t VAR_2 = FUNC_4(VAR_1), VAR_3;
 const u_char *VAR_4 = FUNC_5(VAR_1);
 char *VAR_5;
 int VAR_6;

 if (VAR_2 == 0)
  return FUNC_6("");
 VAR_3 = ((VAR_2 + 2) / 3) * 4 + 1;
 if (VAR_0 / 2 <= VAR_2 || (VAR_5 = FUNC_3(VAR_3)) == ((void*)0))
  return ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_5, VAR_3)) == -1) {
  FUNC_1(VAR_5, VAR_3);
  FUNC_2(VAR_5);
  return ((void*)0);
 }
 return VAR_5;
}
