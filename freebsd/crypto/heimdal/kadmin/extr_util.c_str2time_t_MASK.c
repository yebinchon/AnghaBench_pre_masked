
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm2 ;
typedef int tm ;
typedef scalar_t__ time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (struct tm*,int ,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*,char*,struct tm*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct tm,int ) ;

int
FUNC_7 (const char *VAR_0, time_t *VAR_1)
{
    const char *VAR_2;
    struct tm VAR_3, VAR_4;

    FUNC_1 (&VAR_3, 0, sizeof (VAR_3));
    FUNC_1 (&VAR_4, 0, sizeof (VAR_4));

    while(FUNC_0((unsigned char)*VAR_0))
 VAR_0++;

    if (VAR_0[0] == '+') {
 VAR_0++;
 *VAR_1 = FUNC_2(VAR_0, "month");
 if (*VAR_1 < 0)
     return -1;
 *VAR_1 += FUNC_5(((void*)0));
 return 0;
    }

    if(FUNC_3(VAR_0, "never") == 0) {
 *VAR_1 = 0;
 return 0;
    }

    if(FUNC_3(VAR_0, "now") == 0) {
 *VAR_1 = FUNC_5(((void*)0));
 return 0;
    }

    VAR_2 = FUNC_4 (VAR_0, "%Y-%m-%d", &VAR_3);

    if (VAR_2 == ((void*)0))
 return -1;

    while(FUNC_0((unsigned char)*VAR_2))
 VAR_2++;



    if(VAR_2[0] != '\0' && FUNC_4 (VAR_2, "%H:%M:%S", &VAR_4) != ((void*)0)) {
 VAR_3.tm_hour = VAR_4;
 VAR_3.tm_min = VAR_4;
 VAR_3.tm_sec = VAR_4;
    } else {

 VAR_3.tm_hour = 23;
 VAR_3.tm_min = 59;
 VAR_3.tm_sec = 59;
    }

    *VAR_1 = FUNC_6 (VAR_3, 0);
    return 0;
}
