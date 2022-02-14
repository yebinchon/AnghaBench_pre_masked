
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,size_t) ;
 scalar_t__ FUNC_2 (char*,struct servent*,char**,int,int*) ;

__attribute__((used)) static int
FUNC_3(struct servent *VAR_5, char *VAR_6, size_t VAR_7,
    char *VAR_8, size_t VAR_9, int *VAR_10)
{
 char **VAR_11;
 int VAR_12;

 if (VAR_7 <= VAR_9 + VAR_4 + sizeof(char *)) {
  *VAR_10 = VAR_0;
  return (VAR_2);
 }
 VAR_11 = (char **)FUNC_0(&VAR_6[VAR_9 + 1]);
 VAR_12 = (VAR_6 + VAR_7 - (char *)VAR_11) / sizeof(char *);
 if (VAR_12 < 1) {
  *VAR_10 = VAR_0;
  return (VAR_2);
 }

 FUNC_1(VAR_6, VAR_8, VAR_9);
 VAR_6[VAR_9] = '\0';

 if (FUNC_2(VAR_6, VAR_5, VAR_11, VAR_12, VAR_10) != 0)
  return ((*VAR_10 == 0) ? VAR_1 : VAR_2);
 return (VAR_3);
}
