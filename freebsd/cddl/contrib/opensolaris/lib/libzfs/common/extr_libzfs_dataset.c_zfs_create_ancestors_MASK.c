
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libzfs_handle_t ;
typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*,int *,int ,int*) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,char*) ;

int
FUNC_9(libzfs_handle_t *VAR_3, const char *VAR_4)
{
 int VAR_5;
 char *VAR_6;
 char VAR_7[1024];
 int VAR_8 = 0;

 (void) FUNC_5(VAR_7, sizeof (VAR_7), FUNC_3(VAR_2,
     "cannot create '%s'"), VAR_4);





 if (FUNC_2(VAR_4) != 0) {
  FUNC_8(VAR_3, FUNC_3(VAR_2,
      "maximum name nesting depth exceeded"));
  return (FUNC_7(VAR_3, VAR_1, VAR_7));
 }

 if (FUNC_0(VAR_3, VAR_4, ((void*)0), VAR_0, &VAR_5) != 0)
  return (-1);

 if ((VAR_6 = FUNC_6(VAR_4)) != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_5);
  FUNC_4(VAR_6);
 }
 if (VAR_6 == ((void*)0) || VAR_8 != 0)
  return (-1);

 return (0);
}
