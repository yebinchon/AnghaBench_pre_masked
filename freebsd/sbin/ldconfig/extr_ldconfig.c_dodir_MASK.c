
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int dewey ;
typedef int caddr_t ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,char*,int*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int*,char*) ;
 int FUNC_4 (char) ;
 int * FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;

int
FUNC_10(char *VAR_4, int VAR_5)
{
 DIR *VAR_6;
 struct dirent *VAR_7;
 char VAR_8[VAR_2];
 int VAR_9[VAR_1], VAR_10;

 if ((VAR_6 = FUNC_5(VAR_4)) == ((void*)0)) {
  if (VAR_5 && VAR_3 == VAR_0)
   return 0;
  FUNC_9("%s", VAR_4);
  return -1;
 }

 while ((VAR_7 = FUNC_6(VAR_6)) != ((void*)0)) {
  int VAR_11;
  char *VAR_12;


  if (VAR_7->d_name[0] != 'l' ||
      VAR_7->d_name[1] != 'i' ||
      VAR_7->d_name[2] != 'b')
   continue;


  (void)FUNC_7(VAR_8, VAR_7->d_name + 3);
  VAR_11 = FUNC_8(VAR_8);
  if (VAR_11 < 4)
   continue;


  for (VAR_12 = VAR_8 + VAR_11 - 4; VAR_12 > VAR_8; --VAR_12) {
   if (VAR_12[0] == '.' &&
       VAR_12[1] == 's' &&
       VAR_12[2] == 'o' &&
       VAR_12[3] == '.')
    break;
  }
  if (VAR_12 <= VAR_8)
   continue;

  *VAR_12 = '\0';
  if (!FUNC_4(*(VAR_12+4)))
   continue;

  FUNC_0((caddr_t)VAR_9, sizeof(VAR_9));
  VAR_10 = FUNC_3(VAR_9, VAR_12 + 4);
  if (VAR_10 < 2)
   continue;
  FUNC_2(VAR_4, VAR_7->d_name, VAR_8, VAR_9, VAR_10);
 }

 FUNC_1(VAR_6);
 return 0;
}
