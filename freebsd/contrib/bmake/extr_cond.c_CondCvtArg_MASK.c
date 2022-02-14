
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 double FUNC_0 (char*,char**) ;
 unsigned long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static Boolean
FUNC_2(char *VAR_4, double *VAR_5)
{
    char *VAR_6, VAR_7;
    unsigned long VAR_8;
    double VAR_9;

    VAR_3 = 0;
    if (!*VAR_4) {
 *VAR_5 = (double)0;
 return VAR_2;
    }
    VAR_8 = FUNC_1(VAR_4, &VAR_6, VAR_4[1] == 'x' ? 16 : 10);
    VAR_7 = *VAR_6;
    if (VAR_7 == 0 && VAR_3 != VAR_0) {
 VAR_9 = VAR_4[0] == '-' ? -(double)-VAR_8 : (double)VAR_8;
    } else {
 if (VAR_7 != 0 && VAR_7 != '.' && VAR_7 != 'e' && VAR_7 != 'E')
     return VAR_1;
 VAR_9 = FUNC_0(VAR_4, &VAR_6);
 if (*VAR_6)
     return VAR_1;
    }

    *VAR_5 = VAR_9;
    return VAR_2;
}
