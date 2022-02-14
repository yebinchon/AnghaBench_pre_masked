
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct sshbuf*) ;
 int FUNC_1 (struct sshbuf*) ;
 struct sshbuf* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sshbuf*) ;
 int FUNC_4 (struct sshbuf*) ;
 scalar_t__ FUNC_5 (struct sshbuf*,struct sshbuf*) ;

struct sshbuf *
FUNC_6(struct sshbuf *VAR_0)
{
 struct sshbuf *VAR_1;

 if (FUNC_0(VAR_0) != 0)
  return ((void*)0);
 if ((VAR_1 = FUNC_2(FUNC_4(VAR_0), FUNC_3(VAR_0))) == ((void*)0))
  return ((void*)0);
 if (FUNC_5(VAR_1, VAR_0) != 0) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 return VAR_1;
}
