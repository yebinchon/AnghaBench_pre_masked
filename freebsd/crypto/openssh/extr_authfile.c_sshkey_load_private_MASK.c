
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
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct sshbuf*) ;
 struct sshbuf* FUNC_3 () ;
 int FUNC_4 (int,struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*,char const*,struct sshkey**,char**) ;
 scalar_t__ FUNC_6 (int,char const*) ;
 int FUNC_7 (struct sshkey*,char const*) ;

int
FUNC_8(const char *VAR_4, const char *VAR_5,
    struct sshkey **VAR_6, char **VAR_7)
{
 struct sshbuf *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 if (VAR_6 != ((void*)0))
  *VAR_6 = ((void*)0);
 if (VAR_7 != ((void*)0))
  *VAR_7 = ((void*)0);

 if ((VAR_10 = FUNC_1(VAR_4, VAR_0)) < 0)
  return VAR_3;
 if (FUNC_6(VAR_10, VAR_4) != 0) {
  VAR_9 = VAR_2;
  goto out;
 }

 if ((VAR_8 = FUNC_3()) == ((void*)0)) {
  VAR_9 = VAR_1;
  goto out;
 }
 if ((VAR_9 = FUNC_4(VAR_10, VAR_8)) != 0 ||
     (VAR_9 = FUNC_5(VAR_8, VAR_5, VAR_6,
     VAR_7)) != 0)
  goto out;
 if (VAR_6 && *VAR_6 &&
     (VAR_9 = FUNC_7(*VAR_6, VAR_4)) != 0)
  goto out;
 VAR_9 = 0;
 out:
 FUNC_0(VAR_10);
 FUNC_2(VAR_8);
 return VAR_9;
}
