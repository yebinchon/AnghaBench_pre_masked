
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sshbuf*) ;
 struct sshbuf* FUNC_2 (int const*,size_t) ;
 int FUNC_3 (struct sshbuf*,char**,int *) ;

__attribute__((used)) static int
FUNC_4(const u_char *VAR_1, size_t VAR_2, char **VAR_3)
{
 int VAR_4;
 struct sshbuf *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);

 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 if ((VAR_5 = FUNC_2(VAR_1, VAR_2)) == ((void*)0))
  return VAR_0;
 if ((VAR_4 = FUNC_3(VAR_5, &VAR_6, ((void*)0))) != 0)
  goto out;

 if (VAR_3 != ((void*)0)) {
  *VAR_3 = VAR_6;
  VAR_6 = ((void*)0);
 }
 VAR_4 = 0;
 out:
 FUNC_0(VAR_6);
 FUNC_1(VAR_5);
 return VAR_4;
}
