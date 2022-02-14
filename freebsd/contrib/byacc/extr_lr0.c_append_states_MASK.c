
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Value_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_4;
    int VAR_5;
    Value_t VAR_6;




    for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
    {
 VAR_6 = VAR_1[VAR_4];
 VAR_5 = VAR_4;
 while (VAR_5 > 0 && VAR_1[VAR_5 - 1] > VAR_6)
 {
     VAR_1[VAR_5] = VAR_1[VAR_5 - 1];
     VAR_5--;
 }
 VAR_1[VAR_5] = VAR_6;
    }

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
 VAR_6 = VAR_1[VAR_4];
 VAR_2[VAR_4] = FUNC_1(VAR_6);
    }
}
