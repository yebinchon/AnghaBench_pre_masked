
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eui64 {int dummy; } ;
typedef int local_host ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eui64*,struct eui64*,int) ;
 scalar_t__ FUNC_1 (char*,struct eui64*,char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int ,int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (char**) ;
 scalar_t__ FUNC_10 (char*,char*,char const*,int ,char**,int*) ;

int
FUNC_11(const char *VAR_3, struct eui64 *VAR_4)
{
 FILE *VAR_5;
 char VAR_6[VAR_0 + 2];
 struct eui64 VAR_7;
 char VAR_8[VAR_1];





 if ((VAR_5 = FUNC_4(VAR_2, "re")) == ((void*)0))
  return (1);

 while (FUNC_3(VAR_6,VAR_0,VAR_5)) {
  if (VAR_6[0] == '#')
   continue;
  if (FUNC_1(VAR_6, &VAR_7, VAR_8,
      sizeof(VAR_8)) == 0) {
   if (FUNC_6(VAR_3, VAR_8) == 0) {

    FUNC_0(&VAR_7, VAR_4, sizeof(struct eui64));
    FUNC_2(VAR_5);
    return(0);
   }
  }
 }
 FUNC_2(VAR_5);
 return (1);
}
