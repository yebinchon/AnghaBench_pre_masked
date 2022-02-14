
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stat {int st_mode; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char const*,struct stat*,int ) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static uint8_t
FUNC_5(DIR *VAR_3, const char *VAR_4)
{
 struct stat VAR_5;
 int VAR_6;

 FUNC_1(VAR_3 != ((void*)0));

 VAR_6 = FUNC_2(VAR_3);
 FUNC_1(VAR_6 >= 0);
 if (FUNC_3(VAR_6, VAR_4, &VAR_5, VAR_0) == -1) {
  FUNC_4(VAR_2, "Unable to stat \"%s\"", VAR_4);
  return (VAR_1);
 }
 return (FUNC_0(VAR_5.st_mode));
}
