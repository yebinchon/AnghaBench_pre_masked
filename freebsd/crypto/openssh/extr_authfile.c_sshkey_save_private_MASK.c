
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sshbuf*) ;
 struct sshbuf* FUNC_1 () ;
 int FUNC_2 (struct sshkey*,struct sshbuf*,char const*,char const*,int,char const*,int) ;
 int FUNC_3 (struct sshbuf*,char const*) ;

int
FUNC_4(struct sshkey *VAR_1, const char *VAR_2,
    const char *VAR_3, const char *VAR_4,
    int VAR_5, const char *VAR_6, int VAR_7)
{
 struct sshbuf *VAR_8 = ((void*)0);
 int VAR_9;

 if ((VAR_8 = FUNC_1()) == ((void*)0))
  return VAR_0;
 if ((VAR_9 = FUNC_2(VAR_1, VAR_8, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7)) != 0)
  goto out;
 if ((VAR_9 = FUNC_3(VAR_8, VAR_2)) != 0)
  goto out;
 VAR_9 = 0;
 out:
 FUNC_0(VAR_8);
 return VAR_9;
}
