
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

void
FUNC_0(int VAR_10)
{
    Char *VAR_11, *VAR_12 = ((void*)0);

    if (VAR_10 > VAR_0 - VAR_1)
 VAR_10 = (int) (VAR_0 - VAR_1);

    if (VAR_10 > 0) {
 if (VAR_9) {
     VAR_12 = VAR_6;
     VAR_5 = VAR_4;
     VAR_8 = VAR_10;
     VAR_7 = VAR_0 - VAR_10;
     for (VAR_11 = VAR_0 - VAR_10; VAR_11 <= VAR_2; VAR_11++) {
  *VAR_12++ = *VAR_11;
  *VAR_11 = VAR_11[VAR_10];
     }
 }
 else
     for (VAR_11 = VAR_0 - VAR_10; VAR_11 + VAR_10 <= VAR_2; VAR_11++)
  *VAR_11 = VAR_11[VAR_10];
 VAR_2 -= VAR_10;
 VAR_0 -= VAR_10;

 if (VAR_3 && VAR_3 > VAR_0 && VAR_3 <= VAR_0+VAR_10)
  VAR_3 = VAR_0;

 else if (VAR_3 && VAR_3 > VAR_0)
  VAR_3 -= VAR_10;
    }
}
