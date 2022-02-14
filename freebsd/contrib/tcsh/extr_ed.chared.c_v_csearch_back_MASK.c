
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;
typedef int CCRETVAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 () ;

__attribute__((used)) static CCRETVAL
FUNC_2(Char VAR_7, int VAR_8, int VAR_9)
{
    Char *VAR_10;

    VAR_10 = VAR_4;
    while (VAR_8--) {
 if (*VAR_10 == VAR_7)
     VAR_10--;
 while (VAR_10 > VAR_5 && *VAR_10 != VAR_7)
     VAR_10--;
    }

    if (VAR_10 < VAR_5 || (VAR_10 == VAR_5 && *VAR_10 != VAR_7))
 return(VAR_1);

    if (*VAR_10 == VAR_7 && VAR_9)
 VAR_10++;

    VAR_4 = VAR_10;

    if (VAR_0 & VAR_6) {
 VAR_4++;
 FUNC_1();
 return(VAR_3);
    }

    FUNC_0();
    return(VAR_2);
}
