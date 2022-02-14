
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;
 int* VAR_11 ;

void
FUNC_1 (void)
{
   int VAR_12 = 0;
   int VAR_13;


   for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
     if (FUNC_0 (VAR_13) && VAR_10[VAR_13])
 VAR_11 [VAR_12++] = VAR_13;


   for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
     if (FUNC_0 (VAR_13) && !VAR_10[VAR_13])
 VAR_11 [VAR_12++] = VAR_13;



   if (!VAR_9)
     for (VAR_13 = VAR_4; VAR_13 <= VAR_8; VAR_13++)
       VAR_11 [VAR_12++] = VAR_13;


   for (VAR_13 = VAR_3; VAR_13 <= VAR_7; VAR_13++)
     VAR_11 [VAR_12++] = VAR_13;
   for (VAR_13 = VAR_2; VAR_13 <= VAR_6; VAR_13++)
     VAR_11 [VAR_12++] = VAR_13;


   if (VAR_9)
     for (VAR_13 = VAR_4; VAR_13 <= VAR_8; VAR_13++)
       VAR_11 [VAR_12++] = VAR_13;

   for (VAR_13 = VAR_0; VAR_13 <= VAR_5; VAR_13++)
     VAR_11 [VAR_12++] = VAR_13;



   while (VAR_12 < VAR_1)
     VAR_11 [VAR_12++] = 0;
}
