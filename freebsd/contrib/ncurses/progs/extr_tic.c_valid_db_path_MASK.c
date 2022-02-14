
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suffix ;
struct stat {int st_mode; } ;


 char* VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;
 unsigned int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (size_t) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (char const*) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static char *
FUNC_14(const char *VAR_4)
{
    struct stat VAR_5;
    char *VAR_6 = FUNC_12(VAR_4);


    FUNC_0(1, ("** stat(%s)", VAR_6));
    if (FUNC_10(VAR_6, &VAR_5) >= 0) {
 if (!FUNC_1(VAR_5.st_mode)
     || FUNC_6(VAR_6, VAR_1 | VAR_2 | VAR_3) != 0) {
     FUNC_0(1, ("...not a writable directory"));
     FUNC_8(VAR_6);
     VAR_6 = 0;
 }

    } else {

 unsigned VAR_7 = FUNC_5(VAR_6);

 FUNC_0(1, ("...not found"));
 if (VAR_7) {
     char VAR_8 = VAR_6[VAR_7];
     VAR_6[VAR_7] = 0;
     if (FUNC_10(VAR_6, &VAR_5) >= 0
  && FUNC_1(VAR_5.st_mode)
  && FUNC_6(VAR_6, VAR_1 | VAR_2 | VAR_3) == 0) {
  VAR_6[VAR_7] = VAR_8;
     } else {
  FUNC_0(1, ("...parent directory %s is not writable", VAR_6));
  FUNC_8(VAR_6);
  VAR_6 = 0;
     }
 } else {
     FUNC_0(1, ("... no parent directory"));
     FUNC_8(VAR_6);
     VAR_6 = 0;
 }
    }
    return VAR_6;
}
