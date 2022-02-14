
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct sshbuf* FUNC_1 (char const*) ;
 int FUNC_2 (struct sshbuf*,int) ;
 int FUNC_3 (struct sshbuf*) ;
 char* FUNC_4 (struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*,int ) ;

struct sshbuf *
FUNC_6(const char *VAR_0)
{
 struct sshbuf *VAR_1 = FUNC_1(VAR_0);
 const u_char *VAR_2;


 for (VAR_2 = FUNC_4(VAR_1); FUNC_3(VAR_1) > 0;) {
  if (VAR_2[FUNC_3(VAR_1) - 1] == '\r' ||
      VAR_2[FUNC_3(VAR_1) - 1] == '\t' ||
      VAR_2[FUNC_3(VAR_1) - 1] == ' ' ||
      VAR_2[FUNC_3(VAR_1) - 1] == '\n')
   FUNC_0(FUNC_2(VAR_1, 1), 0);
  else
   break;
 }

 FUNC_0(FUNC_5(VAR_1, 0), 0);
 return VAR_1;
}
