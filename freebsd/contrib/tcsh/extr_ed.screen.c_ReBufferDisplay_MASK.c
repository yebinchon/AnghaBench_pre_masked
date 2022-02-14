
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int ** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int ** VAR_5 ;
 int FUNC_1 (int **) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(void)
{
    int VAR_6;
    Char **VAR_7;

    VAR_7 = VAR_0;
    VAR_0 = ((void*)0);
    FUNC_1(VAR_7);
    VAR_7 = VAR_5;
    VAR_5 = ((void*)0);
    FUNC_1(VAR_7);
    VAR_3 = FUNC_0(VAR_2);
    VAR_4 = (VAR_1 * 4) / VAR_3 + 1;
    VAR_7 = FUNC_2(sizeof(*VAR_7) * (VAR_4 + 1));
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 VAR_7[VAR_6] = FUNC_2(sizeof(*VAR_7[VAR_6]) * (VAR_3 + 1));
    VAR_7[VAR_4] = ((void*)0);
    VAR_0 = VAR_7;
    VAR_7 = FUNC_2(sizeof(*VAR_7) * (VAR_4 + 1));
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 VAR_7[VAR_6] = FUNC_2(sizeof(*VAR_7[VAR_6]) * (VAR_3 + 1));
    VAR_7[VAR_4] = ((void*)0);
    VAR_5 = VAR_7;
}
