
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct sshkey {int dummy; } ;
struct sshauthopt {int dummy; } ;
struct ssh {int dummy; } ;
struct passwd {int dummy; } ;
typedef int loc ;
typedef int FILE ;


 scalar_t__ FUNC_0 (struct ssh*,struct passwd*,struct sshkey*,char*,char*,struct sshauthopt**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,int,char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct ssh *VAR_0, struct passwd *VAR_1, FILE *VAR_2,
    char *VAR_3, struct sshkey *VAR_4, struct sshauthopt **VAR_5)
{
 char *VAR_6, *VAR_7 = ((void*)0), VAR_8[256];
 size_t VAR_9 = 0;
 int VAR_10 = 0;
 u_long VAR_11 = 0;

 if (VAR_5 != ((void*)0))
  *VAR_5 = ((void*)0);

 while (FUNC_2(&VAR_7, &VAR_9, VAR_2) != -1) {
  VAR_11++;

  if (VAR_10)
   continue;


  VAR_6 = VAR_7;
  FUNC_3(&VAR_6);
  if (!*VAR_6 || *VAR_6 == '\n' || *VAR_6 == '#')
   continue;
  FUNC_4(VAR_8, sizeof(VAR_8), "%.200s:%lu", VAR_3, VAR_11);
  if (FUNC_0(VAR_0, VAR_1, VAR_4, VAR_6, VAR_8, VAR_5) == 0)
   VAR_10 = 1;
 }
 FUNC_1(VAR_7);
 return VAR_10;
}
