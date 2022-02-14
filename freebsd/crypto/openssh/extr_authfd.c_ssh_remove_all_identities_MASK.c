
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
 int FUNC_5 (struct sshbuf*,int ) ;

int
FUNC_6(int VAR_3, int VAR_4)
{
 struct sshbuf *VAR_5;
 u_char VAR_6 = (VAR_4 == 1) ?
     VAR_1 :
     VAR_0;
 int VAR_7;

 if ((VAR_5 = FUNC_4()) == ((void*)0))
  return VAR_2;
 if ((VAR_7 = FUNC_5(VAR_5, VAR_6)) != 0)
  goto out;
 if ((VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_5)) != 0)
  goto out;
 if ((VAR_7 = FUNC_3(VAR_5, &VAR_6)) != 0)
  goto out;
 VAR_7 = FUNC_0(VAR_6);
 out:
 FUNC_2(VAR_5);
 return VAR_7;
}
