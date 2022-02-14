
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Hist {struct Hist* Hprev; struct Hist* Hnext; } ;


 int VAR_0 ;
 struct Hist* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct Hist *VAR_2, struct Hist *VAR_3)
{
    struct Hist *VAR_4 = VAR_3->Hnext;
    VAR_2->Hnext = VAR_4, VAR_2->Hprev = VAR_3;
    VAR_3->Hnext = VAR_2;
    if (VAR_4)
        VAR_4->Hprev = VAR_2;
    else
        VAR_1 = VAR_2;
    VAR_0++;
}
