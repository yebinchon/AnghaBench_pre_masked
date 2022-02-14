
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eui64 {int * octet; } ;
typedef int local_host ;
typedef int eui64_a ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (char*,struct eui64*,char*,int) ;
 int FUNC_2 (struct eui64 const*,char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int ,int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (char**) ;
 scalar_t__ FUNC_11 (char*,char*,char*,int ,char**,int*) ;

int
FUNC_12(char *VAR_4, size_t VAR_5, const struct eui64 *VAR_6)
{
 FILE *VAR_7;
 char VAR_8[VAR_0 + 2];
 struct eui64 VAR_9;
 char VAR_10[VAR_2];






 if ((VAR_7 = FUNC_5(VAR_3, "re")) == ((void*)0))
  return (1);

 while (FUNC_4(VAR_8,VAR_0,VAR_7)) {
  if (VAR_8[0] == '#')
   continue;
  if (FUNC_1(VAR_8, &VAR_9, VAR_10,
      sizeof(VAR_10)) == 0) {
   if (FUNC_0(&VAR_9[0],
    &VAR_6->octet[0], VAR_1) == 0) {

    FUNC_7(VAR_4, VAR_10);
    FUNC_3(VAR_7);
    return(0);
   }
  }
 }
 FUNC_3(VAR_7);
 return (1);
}
