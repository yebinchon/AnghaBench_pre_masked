
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef char Char ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*,struct stat*) ;
 scalar_t__ FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*,struct stat*) ;
 char* FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static Char
FUNC_17(Char *VAR_4, Char *VAR_5)
{
    if (VAR_4) {
 Char *VAR_6;
 char *VAR_7;
 struct stat VAR_8;

 if (FUNC_12(VAR_4)) return(' ');

 VAR_6 = FUNC_9(VAR_4, VAR_5);
 VAR_7 = FUNC_13(VAR_6);
 FUNC_16(VAR_6);

 if (FUNC_11(VAR_7, &VAR_8) != -1) {
     if (VAR_8.st_mode & (VAR_3|VAR_1|VAR_2))
  return ('*');
 }
    }
    return (' ');
}
