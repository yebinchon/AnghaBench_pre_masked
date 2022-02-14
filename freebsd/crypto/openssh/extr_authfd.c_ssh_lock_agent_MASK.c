
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct sshbuf*,struct sshbuf*) ;
 int FUNC_2 (struct sshbuf*) ;
 int FUNC_3 (struct sshbuf*,int *) ;
 struct sshbuf* FUNC_4 () ;
 int FUNC_5 (struct sshbuf*,char const*) ;
 int FUNC_6 (struct sshbuf*,int ) ;

int
FUNC_7(int VAR_3, int VAR_4, const char *VAR_5)
{
 int VAR_6;
 u_char VAR_7 = VAR_4 ? VAR_0 : VAR_1;
 struct sshbuf *VAR_8;

 if ((VAR_8 = FUNC_4()) == ((void*)0))
  return VAR_2;
 if ((VAR_6 = FUNC_6(VAR_8, VAR_7)) != 0 ||
     (VAR_6 = FUNC_5(VAR_8, VAR_5)) != 0)
  goto out;
 if ((VAR_6 = FUNC_1(VAR_3, VAR_8, VAR_8)) != 0)
  goto out;
 if ((VAR_6 = FUNC_3(VAR_8, &VAR_7)) != 0)
  goto out;
 VAR_6 = FUNC_0(VAR_7);
 out:
 FUNC_2(VAR_8);
 return VAR_6;
}
