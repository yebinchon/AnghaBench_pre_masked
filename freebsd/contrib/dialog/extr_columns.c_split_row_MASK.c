
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 char* FUNC_1 (char*,unsigned int) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static unsigned
FUNC_3(char *VAR_0, unsigned *VAR_1, unsigned *VAR_2)
{
    int VAR_3 = (int) FUNC_2(FUNC_0());
    char *VAR_4 = 0;
    unsigned VAR_5 = 0;
    unsigned VAR_6 = 0;

    do {
 if (VAR_5) {
     VAR_6 = (unsigned) (VAR_3 + VAR_4 - VAR_0);
     VAR_2[VAR_5 - 1] = VAR_6 - VAR_1[VAR_5 - 1] - (unsigned) VAR_3;
 }
 VAR_1[VAR_5] = VAR_6;
 ++VAR_5;
    } while ((VAR_4 = FUNC_1(VAR_0, VAR_6)) != 0);

    VAR_6 = (unsigned) FUNC_2(VAR_0);
    VAR_2[VAR_5 - 1] = VAR_6 - VAR_1[VAR_5 - 1];

    return VAR_5;
}
