
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int action ;


 scalar_t__ FUNC_0 (unsigned int*,int) ;
 unsigned int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int,int) ;
 int* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static action *
FUNC_3(int VAR_4, action *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11;
    unsigned *VAR_12;

    VAR_11 = FUNC_1(VAR_3);
    VAR_8 = VAR_2[VAR_4];
    VAR_9 = VAR_2[VAR_4 + 1];
    for (VAR_6 = VAR_8; VAR_6 < VAR_9; VAR_6++)
    {
 VAR_10 = VAR_1[VAR_6];
 VAR_12 = VAR_0 + VAR_6 * VAR_11;
 for (VAR_7 = VAR_3 - 1; VAR_7 >= 0; VAR_7--)
 {
     if (FUNC_0(VAR_12, VAR_7))
  VAR_5 = FUNC_2(VAR_5, VAR_10, VAR_7);
 }
    }
    return (VAR_5);
}
