
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Value_t ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t** VAR_2 ;
 size_t** VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t* VAR_6 ;
 size_t* VAR_7 ;

__attribute__((used)) static void
FUNC_0(void)
{
    Value_t VAR_8;
    int VAR_9;
    Value_t *VAR_10;
    Value_t *VAR_11;
    Value_t VAR_12;

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
 VAR_3[VAR_8] = 0;

    VAR_9 = 0;
    VAR_10 = VAR_0;
    while (VAR_10 < VAR_1)
    {
 VAR_8 = *VAR_10++;
 VAR_12 = VAR_6[VAR_8];
 if (VAR_12 > 0)
 {
     VAR_11 = VAR_3[VAR_12];
     if (!VAR_11)
     {
  VAR_7[VAR_9++] = VAR_12;
  VAR_11 = VAR_2[VAR_12];
     }

     *VAR_11++ = (Value_t)(VAR_8 + 1);
     VAR_3[VAR_12] = VAR_11;
 }
    }

    VAR_4 = VAR_9;
}
