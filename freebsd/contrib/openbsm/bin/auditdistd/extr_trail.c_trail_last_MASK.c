
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; scalar_t__ d_type; } ;
typedef int curfile ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int,char*,...) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 size_t FUNC_7 (char*,char*,size_t) ;
 scalar_t__ FUNC_8 (int *,char*) ;

void
FUNC_9(DIR *VAR_3, char *VAR_4, size_t VAR_5)
{
 char VAR_6[VAR_2];
 struct dirent *VAR_7;

 FUNC_0(VAR_3 != ((void*)0));

 VAR_6[0] = '\0';

 FUNC_5(VAR_3);
 while ((VAR_7 = FUNC_4(VAR_3)) != ((void*)0)) {
  if (VAR_7->d_name[0] < '0' || VAR_7->d_name[0] > '9')
   continue;
  if (VAR_7->d_type == VAR_1)
   VAR_7->d_type = FUNC_8(VAR_3, VAR_7->d_name);

  if (VAR_7->d_type != VAR_0)
   continue;

  if (VAR_6[0] != '\0' && FUNC_6(VAR_7->d_name, VAR_6) < 0)
   continue;
  FUNC_1(FUNC_7(VAR_6, VAR_7->d_name, sizeof(VAR_6)) <
      sizeof(VAR_6));
 }
 if (VAR_6[0] == '\0') {



  FUNC_3(1, "No trail files.");
  FUNC_2(VAR_4, VAR_5);
  return;
 }
 FUNC_1(FUNC_7(VAR_4, VAR_6, VAR_5) < VAR_5);
 FUNC_3(1, "Found the most recent trail file: \"%s\".", VAR_4);
}
