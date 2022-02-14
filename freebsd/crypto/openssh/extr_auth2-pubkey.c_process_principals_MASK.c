
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_int ;
struct sshkey_cert {int dummy; } ;
struct sshauthopt {int dummy; } ;
struct ssh {int dummy; } ;
typedef int loc ;
typedef int FILE ;


 scalar_t__ FUNC_0 (struct ssh*,char*,struct sshkey_cert const*,char*,struct sshauthopt**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (char*,int,char*,char const*,scalar_t__) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int
FUNC_5(struct ssh *VAR_0, FILE *VAR_1, const char *VAR_2,
    const struct sshkey_cert *VAR_3, struct sshauthopt **VAR_4)
{
 char VAR_5[256], *VAR_6 = ((void*)0), *VAR_7, *VAR_8;
 size_t VAR_9 = 0;
 u_long VAR_10 = 0;
 u_int VAR_11 = 0;

 if (VAR_4 != ((void*)0))
  *VAR_4 = ((void*)0);

 while (FUNC_2(&VAR_6, &VAR_9, VAR_1) != -1) {
  VAR_10++;

  if (VAR_11)
   continue;


  for (VAR_7 = VAR_6; *VAR_7 == ' ' || *VAR_7 == '\t'; VAR_7++)
   ;

  if ((VAR_8 = FUNC_4(VAR_7, '#')) != ((void*)0))
   *VAR_8 = '\0';
  if (!*VAR_7 || *VAR_7 == '\n')
   continue;

  FUNC_3(VAR_5, sizeof(VAR_5), "%.200s:%lu", VAR_2, VAR_10);
  if (FUNC_0(VAR_0, VAR_7, VAR_3, VAR_5, VAR_4) == 0)
   VAR_11 = 1;
 }
 FUNC_1(VAR_6);
 return VAR_11;
}
