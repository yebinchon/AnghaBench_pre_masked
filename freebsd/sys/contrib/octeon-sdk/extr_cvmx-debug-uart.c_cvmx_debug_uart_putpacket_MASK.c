
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2)
{
    size_t VAR_3;
    unsigned char VAR_4;
    unsigned char *VAR_5 = (unsigned char *) VAR_2;
    char VAR_6[3];

    for (VAR_4 = 0, VAR_3 = 0; VAR_5[VAR_3]; VAR_3++)
      VAR_4 += VAR_5[VAR_3];
    FUNC_0(VAR_6, VAR_4);

    FUNC_1(&VAR_1);
    FUNC_3(VAR_0, '$');
    FUNC_4(VAR_0, VAR_2);
    FUNC_3(VAR_0, '#');
    FUNC_4(VAR_0, VAR_6);
    FUNC_2(&VAR_1);

    return 0;
}
