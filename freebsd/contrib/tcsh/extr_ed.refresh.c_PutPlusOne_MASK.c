
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int* VAR_11 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(Char VAR_12, int VAR_13)
{
    while (VAR_13 > 1 && VAR_1 + VAR_13 > VAR_10)
 FUNC_2(' ', 1);
    if ((VAR_12 & VAR_4) != 0) {
 Char *VAR_14;
 for (VAR_14 = VAR_11 + (VAR_12 & ~VAR_4) * VAR_5; *VAR_14; VAR_14++)
     (void) FUNC_1(*VAR_14);
    } else {
 (void) FUNC_1(VAR_12);
    }
    VAR_3[VAR_2][VAR_1++] = (Char) VAR_12;
    while (--VAR_13 > 0)
 VAR_3[VAR_2][VAR_1++] = VAR_0;
    if (VAR_1 >= VAR_10) {
 VAR_1 = 0;
 VAR_2++;
 VAR_8++;
 if (VAR_9 & VAR_6) {
     if (VAR_9 & VAR_7) {
  (void) FUNC_0(' ');
  (void) FUNC_0('\b');
     }
 }
 else {
     (void) FUNC_0('\r');
     (void) FUNC_0('\n');
 }
    }
}
