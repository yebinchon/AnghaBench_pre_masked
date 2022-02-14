
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (size_t,scalar_t__*) ;
 size_t FUNC_1 (scalar_t__*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static void
FUNC_3(Char *VAR_5)
{
    size_t VAR_6, VAR_7;





    if (VAR_5[0] == VAR_1[0])
 VAR_5++;

    VAR_6 = FUNC_1(VAR_5);

    VAR_7 = VAR_2 + VAR_6 + VAR_0;
    if (VAR_7 >= VAR_3)
 FUNC_2(VAR_7);
    (void) FUNC_0(VAR_4, VAR_5);
    VAR_4 += VAR_6;
    VAR_2 += VAR_6;
}
