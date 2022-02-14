
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sshbuf*,int ,char const*,struct sshkey**,char**) ;

int
FUNC_1(struct sshbuf *VAR_1, const char *VAR_2,
    struct sshkey **VAR_3, char **VAR_4)
{
 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 if (VAR_4 != ((void*)0))
  *VAR_4 = ((void*)0);

 return FUNC_0(VAR_1, VAR_0,
     VAR_2, VAR_3, VAR_4);
}
