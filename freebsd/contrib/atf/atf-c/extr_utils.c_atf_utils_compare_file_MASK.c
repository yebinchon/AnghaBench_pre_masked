
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int FUNC_0 (int,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (char const*,char*,scalar_t__) ;
 int FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (int const,char*,int) ;
 scalar_t__ FUNC_5 (char const*) ;

bool
FUNC_6(const char *VAR_1, const char *VAR_2)
{
    const int VAR_3 = FUNC_3(VAR_1, VAR_0);
    FUNC_0(VAR_3 != -1, "Cannot open %s", VAR_1);

    const char *VAR_4 = VAR_2;
    ssize_t VAR_5 = FUNC_5(VAR_2);

    char VAR_6[1024];
    ssize_t VAR_7;
    while ((VAR_7 = FUNC_4(VAR_3, VAR_6, sizeof(VAR_6))) > 0 &&
           VAR_7 <= VAR_5) {
        if (FUNC_2(VAR_4, VAR_6, VAR_7) != 0) {
            FUNC_1(VAR_3);
            return 0;
        }
        VAR_5 -= VAR_7;
        VAR_4 += VAR_7;
    }
    FUNC_1(VAR_3);
    return VAR_7 == 0 && VAR_5 == 0;
}
