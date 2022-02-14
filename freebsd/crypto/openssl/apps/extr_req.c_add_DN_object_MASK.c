
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int X509_NAME ;


 int FUNC_0 (int *,int,unsigned long,unsigned char*,int,int,int) ;
 int FUNC_1 (char*,char const*,char*,int,int,char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_2(X509_NAME *VAR_0, char *VAR_1, const char *VAR_2,
                         char *VAR_3, int VAR_4, int VAR_5, int VAR_6,
                         unsigned long VAR_7, int VAR_8)
{
    int VAR_9 = 0;
    char VAR_10[1024];

    VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_10, sizeof(VAR_10),
                     "DN value", "DN default");
    if ((VAR_9 == 0) || (VAR_9 == 1))
        return VAR_9;
    VAR_9 = 1;

    if (!FUNC_0(VAR_0, VAR_4, VAR_7,
                                    (unsigned char *)VAR_10, -1, -1, VAR_8))
        VAR_9 = 0;

    return VAR_9;
}
