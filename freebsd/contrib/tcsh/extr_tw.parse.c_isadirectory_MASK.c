
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int Char ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int const*,int const*) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(const Char *VAR_0, const Char *VAR_1)


{
    if (VAR_0) {
 Char *VAR_2;
 char *VAR_3;
 struct stat VAR_4;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 VAR_3 = FUNC_4(VAR_2);
 FUNC_6(VAR_2);
 if (FUNC_5(VAR_3, &VAR_4) >= 0) {
     if (FUNC_0(VAR_4.st_mode))
  return 1;
 }
    }
    return 0;
}
