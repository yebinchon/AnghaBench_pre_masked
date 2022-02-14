
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct sshkey {TYPE_1__* cert; } const sshkey ;
struct TYPE_2__ {struct sshkey const* signature_key; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (struct sshkey const*,struct sshkey const*) ;
 int FUNC_5 (struct sshkey const*,struct sshkey const*) ;
 int FUNC_6 (struct sshkey const*) ;
 scalar_t__ FUNC_7 (struct sshkey const*) ;
 struct sshkey const* FUNC_8 (int ) ;
 int FUNC_9 (struct sshkey const*,char**) ;

int
FUNC_10(struct sshkey *VAR_4, const char *VAR_5, int VAR_6,
    int VAR_7)
{
 FILE *VAR_8;
 char *VAR_9 = ((void*)0), *VAR_10;
 size_t VAR_11 = 0;
 int VAR_12 = 0;
 struct sshkey *VAR_13 = ((void*)0);

 int (*VAR_14)(const struct sshkey *, const struct sshkey *) =
     VAR_6 ? FUNC_4 : FUNC_5;

 if ((VAR_8 = FUNC_1(VAR_5, "r")) == ((void*)0))
  return VAR_3;

 while (FUNC_3(&VAR_9, &VAR_11, VAR_8) != -1) {
  VAR_10 = VAR_9;


  for (; *VAR_10 && (*VAR_10 == ' ' || *VAR_10 == '\t'); VAR_10++)
   ;


  switch (*VAR_10) {
  case '#':
  case '\n':
  case '\0':
   continue;
  }

  if ((VAR_13 = FUNC_8(VAR_0)) == ((void*)0)) {
   VAR_12 = VAR_1;
   goto out;
  }
  if ((VAR_12 = FUNC_9(VAR_13, &VAR_10)) != 0)
   goto out;
  if (VAR_14(VAR_4, VAR_13) ||
      (VAR_7 && FUNC_7(VAR_4) &&
      VAR_14(VAR_4->cert->signature_key, VAR_13))) {
   VAR_12 = 0;
   goto out;
  }
  FUNC_6(VAR_13);
  VAR_13 = ((void*)0);
 }
 VAR_12 = VAR_2;
 out:
 FUNC_2(VAR_9);
 FUNC_6(VAR_13);
 FUNC_0(VAR_8);
 return VAR_12;
}
