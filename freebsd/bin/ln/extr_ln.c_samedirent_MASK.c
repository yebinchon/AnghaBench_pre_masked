
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3, *VAR_4;
 char VAR_5[VAR_0];
 struct stat VAR_6, VAR_7;

 if (FUNC_2(VAR_1, VAR_2) == 0)
  return 1;
 VAR_3 = FUNC_3(VAR_1, '/');
 if (VAR_3 != ((void*)0))
  VAR_3++;
 else
  VAR_3 = VAR_1;
 VAR_4 = FUNC_3(VAR_2, '/');
 if (VAR_4 != ((void*)0))
  VAR_4++;
 else
  VAR_4 = VAR_2;
 if (FUNC_2(VAR_3, VAR_4) != 0)
  return 0;
 if (VAR_3 - VAR_1 >= VAR_0 || VAR_4 - VAR_2 >= VAR_0)
  return 0;
 if (VAR_3 == VAR_1)
  FUNC_0(VAR_5, ".", 2);
 else {
  FUNC_0(VAR_5, VAR_1, VAR_3 - VAR_1);
  VAR_5[VAR_3 - VAR_1] = '\0';
 }
 if (FUNC_1(VAR_5, &VAR_6) != 0)
  return 0;
 if (VAR_4 == VAR_2)
  FUNC_0(VAR_5, ".", 2);
 else {
  FUNC_0(VAR_5, VAR_2, VAR_4 - VAR_2);
  VAR_5[VAR_4 - VAR_2] = '\0';
 }
 if (FUNC_1(VAR_5, &VAR_7) != 0)
  return 0;
 return VAR_6 == VAR_7 && VAR_6 == VAR_7;
}
