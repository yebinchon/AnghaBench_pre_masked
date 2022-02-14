
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef char Char ;


 int FUNC_0 (unsigned char) ;

__attribute__((used)) static time_t
FUNC_1(Char *VAR_0)
{



    time_t VAR_1;
    Char *VAR_2;
    int VAR_3;

    if (!VAR_0 || *(VAR_2 = VAR_0) != '+')
 return (time_t)0;

    for (++VAR_2, VAR_1 = 0, VAR_3 = 0; *VAR_2; ++VAR_2, ++VAR_3) {
 if (!FUNC_0((unsigned char)*VAR_2))
     return (time_t)0;
 VAR_1 = VAR_1 * 10 + (time_t)((unsigned char)*VAR_2 - '0');
    }

    if (VAR_3 != 10)
 return (time_t)0;

    return VAR_1;
}
