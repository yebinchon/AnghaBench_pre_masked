
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 char** VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,size_t,size_t,...) ;
 int VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void
FUNC_2(Char VAR_7, int VAR_8)
{
    while (VAR_5 + VAR_8 > VAR_2)
 FUNC_2(' ', 1);
    VAR_4[VAR_6][VAR_5] = VAR_7;
    if (VAR_8)
 VAR_5++;
    while (--VAR_8 > 0)
 VAR_4[VAR_6][VAR_5++] = VAR_1;
    if (VAR_5 >= VAR_2) {
 VAR_4[VAR_6][VAR_2] = '\0';
 VAR_5 = 0;
 VAR_6++;







    }
}
