
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sshbuf*,int,char const*,struct sshkey**,char**) ;
 int FUNC_1 (struct sshbuf*,int,char const*,struct sshkey**) ;

int
FUNC_2(struct sshbuf *VAR_4, int VAR_5,
    const char *VAR_6, struct sshkey **VAR_7, char **VAR_8)
{
 int VAR_9 = VAR_0;

 if (VAR_7 != ((void*)0))
  *VAR_7 = ((void*)0);
 if (VAR_8 != ((void*)0))
  *VAR_8 = ((void*)0);

 switch (VAR_5) {







 case 131:



  return FUNC_0(VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8);
 case 129:
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8);

  if (VAR_9 == 0 || VAR_9 == VAR_3)
   return VAR_9;




  return VAR_1;

 default:
  return VAR_2;
 }
}
