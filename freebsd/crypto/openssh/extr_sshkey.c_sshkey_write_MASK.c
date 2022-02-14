
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct sshbuf*) ;
 int FUNC_3 (struct sshbuf*) ;
 struct sshbuf* FUNC_4 () ;
 int FUNC_5 (struct sshbuf*) ;
 int FUNC_6 (struct sshkey const*,struct sshbuf*) ;

int
FUNC_7(const struct sshkey *VAR_5, FILE *VAR_6)
{
 struct sshbuf *VAR_7 = ((void*)0);
 int VAR_8 = VAR_2;

 if ((VAR_7 = FUNC_4()) == ((void*)0))
  return VAR_1;
 if ((VAR_8 = FUNC_6(VAR_5, VAR_7)) != 0)
  goto out;
 if (FUNC_1(FUNC_5(VAR_7), FUNC_3(VAR_7), 1, VAR_6) != 1) {
  if (FUNC_0(VAR_6))
   VAR_4 = VAR_0;
  VAR_8 = VAR_3;
  goto out;
 }

 VAR_8 = 0;
 out:
 FUNC_2(VAR_7);
 return VAR_8;
}
