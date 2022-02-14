
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kafs_data {char* (* get_realm ) (struct kafs_data*,char*) ;} ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int ,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char**,char*) ;
 char* FUNC_8 (struct kafs_data*,char*) ;

__attribute__((used)) static int
FUNC_9(struct kafs_data *VAR_5,
        const char *VAR_6, char **VAR_7, int VAR_8)
{
    FILE *VAR_9;
    char VAR_10[1024];
    char *VAR_11;
    int VAR_12 = -1;

    if ((VAR_9 = FUNC_2(VAR_2, "r"))
 || (VAR_9 = FUNC_2(VAR_0, "r"))
 || (VAR_9 = FUNC_2(VAR_3, "r"))
 || (VAR_9 = FUNC_2(VAR_4, "r"))
 || (VAR_9 = FUNC_2(VAR_1, "r"))) {
 while (FUNC_1(VAR_10, sizeof(VAR_10), VAR_9)) {
     int VAR_13;

     if (VAR_10[0] != '>')
  continue;
     VAR_11 = VAR_10;
     FUNC_7(&VAR_11, " \t\n#");

     if (VAR_8)
  VAR_13 = FUNC_4(VAR_10 + 1, VAR_6);
     else
  VAR_13 = FUNC_6(VAR_10 + 1, VAR_6, FUNC_5(VAR_6));

     if (VAR_13 == 0) {




  if (FUNC_1(VAR_10, sizeof(VAR_10), VAR_9) == ((void*)0))
      break;
  VAR_11 = FUNC_3(VAR_10, '#');
  if (VAR_11 == ((void*)0))
      break;
  VAR_11++;
  if (VAR_10[FUNC_5(VAR_10) - 1] == '\n')
      VAR_10[FUNC_5(VAR_10) - 1] = '\0';
  *VAR_7 = (*VAR_5->get_realm)(VAR_5, VAR_11);
  if (*VAR_7 && **VAR_7 != '\0')
      VAR_12 = 0;
  break;
     }
 }
 FUNC_0(VAR_9);
    }
    return VAR_12;
}
