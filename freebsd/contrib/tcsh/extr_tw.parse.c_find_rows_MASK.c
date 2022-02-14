
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_2(Char *VAR_1[], int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    unsigned int VAR_7 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 VAR_7 = FUNC_1(VAR_7, (unsigned int) FUNC_0(VAR_1[VAR_4]));

    VAR_7 += VAR_3 ? 1 : 2;
    VAR_5 = (VAR_0 + 1) / VAR_7;
    if (!VAR_5)
 VAR_5 = 1;
    VAR_6 = (VAR_2 + (VAR_5 - 1)) / VAR_5;

    return VAR_6;
}
