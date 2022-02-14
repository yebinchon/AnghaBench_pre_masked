
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

void
FUNC_0 (void)
{

  int VAR_3;

  for (VAR_3=0; VAR_3<VAR_0; VAR_3++)
    {
      switch (VAR_3)
 {
 case '0': VAR_2[VAR_3] = 0; break;
 case '1': VAR_2[VAR_3] = 1; break;
 case '2': VAR_2[VAR_3] = 2; break;
 case '3': VAR_2[VAR_3] = 3; break;
 case '4': VAR_2[VAR_3] = 4; break;
 case '5': VAR_2[VAR_3] = 5; break;
 case '6': VAR_2[VAR_3] = 6; break;
 case '7': VAR_2[VAR_3] = 7; break;
 case '8': VAR_2[VAR_3] = 8; break;
 case '9': VAR_2[VAR_3] = 9; break;

 case 'a': case 'A': VAR_2[VAR_3] = 10; break;
 case 'b': case 'B': VAR_2[VAR_3] = 11; break;
 case 'c': case 'C': VAR_2[VAR_3] = 12; break;
 case 'd': case 'D': VAR_2[VAR_3] = 13; break;
 case 'e': case 'E': VAR_2[VAR_3] = 14; break;
 case 'f': case 'F': VAR_2[VAR_3] = 15; break;

 default:
   VAR_2[VAR_3] = VAR_1;
   break;
 }
    }

}
