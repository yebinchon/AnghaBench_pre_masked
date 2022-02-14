
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char**,char const*,int ) ;
 int FUNC_3 (int *,char const*,int ) ;

int
FUNC_4(FILE *VAR_3, const char *VAR_4, va_list VAR_5)
{
    char *VAR_6;
    int VAR_7;
    if(VAR_0 == VAR_2)
 return FUNC_3(VAR_3, VAR_4, VAR_5);
    else {
 int VAR_8;
 VAR_8 = FUNC_2(&VAR_6, VAR_4, VAR_5);
 if (VAR_8 == -1)
     return VAR_8;
 VAR_7 = FUNC_0(&VAR_1, VAR_6, VAR_8);
 FUNC_1(VAR_6);
 return VAR_7;
    }
}
