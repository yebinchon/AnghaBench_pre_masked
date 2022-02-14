
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int const*) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct sshbuf*,int *,int) ;
 int FUNC_4 (struct sshbuf*) ;
 scalar_t__ FUNC_5 (int const*,int *,int) ;

int
FUNC_6(const u_char VAR_2[VAR_0],
    const u_char VAR_3[VAR_0], struct sshbuf *VAR_4)
{
 u_char VAR_5[VAR_0];
 int VAR_6;


 FUNC_2(VAR_5, VAR_0);
 if (FUNC_5(VAR_3, VAR_5, VAR_0) == 0)
  return VAR_1;

 FUNC_0(VAR_5, VAR_2, VAR_3);



 FUNC_4(VAR_4);
 VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_0);
 FUNC_2(VAR_5, VAR_0);
 return VAR_6;
}
