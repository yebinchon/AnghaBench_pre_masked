
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

void
FUNC_0(int VAR_11)
{
    Char *VAR_12, *VAR_13 = ((void*)0);

    if (VAR_11 > VAR_1 - VAR_0)
 VAR_11 = (int) (VAR_1 - VAR_0);

    if (VAR_11 > 0) {
 if (VAR_9) {
     VAR_13 = VAR_6;
     VAR_5 = VAR_4;
     VAR_8 = VAR_11;
     VAR_7 = VAR_0;
     for (VAR_12 = VAR_0; VAR_12 <= VAR_1; VAR_12++) {
  *VAR_13++ = *VAR_12;
  *VAR_12 = VAR_12[VAR_11];
     }
 }
 else
     for (VAR_12 = VAR_0; VAR_12 + VAR_11 <= VAR_1; VAR_12++)
  *VAR_12 = VAR_12[VAR_11];
 VAR_1 -= VAR_11;

 if (VAR_3 && VAR_3 > VAR_0 && VAR_3 <= VAR_0+VAR_11)
  VAR_3 = VAR_0;

 else if (VAR_3 && VAR_3 > VAR_0)
  VAR_3 -= VAR_11;
    }
}
