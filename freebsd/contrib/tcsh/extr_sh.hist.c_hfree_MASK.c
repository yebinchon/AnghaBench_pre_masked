
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Hist {struct Hist* histline; int Hlex; scalar_t__ Hhash; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct Hist* VAR_0 ;
 int FUNC_2 (struct Hist*) ;
 int FUNC_3 (struct Hist*) ;

__attribute__((used)) static void
FUNC_4(struct Hist *VAR_1)
{
    FUNC_0(VAR_1 != VAR_0);
    if (VAR_1->Hhash)
        FUNC_2(VAR_1);
    FUNC_1(&VAR_1->Hlex);
    if (VAR_1->histline)
        FUNC_3(VAR_1->histline);
    FUNC_3(VAR_1);
}
