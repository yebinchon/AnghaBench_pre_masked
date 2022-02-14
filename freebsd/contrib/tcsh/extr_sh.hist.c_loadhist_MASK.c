
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Hist {int Href; int Hnum; struct Hist* Hnext; } ;
typedef int Char ;


 struct Hist VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

 int * VAR_5 ;
 int FUNC_0 (int **,int *) ;
 int VAR_6 ;
 int * FUNC_1 (int ) ;

void
FUNC_2(Char *VAR_7, int VAR_8)
{
    static Char *VAR_9[] = {128, ((void*)0), ((void*)0), ((void*)0)};
    VAR_9[1] = VAR_8 ? VAR_4 : VAR_3;

    if (VAR_7 != ((void*)0))
 VAR_9[2] = VAR_7;
    else if ((VAR_7 = FUNC_1(VAR_2)) != VAR_1)
 VAR_9[2] = VAR_7;
    else
 VAR_9[2] = VAR_5;

    FUNC_0(VAR_9, ((void*)0));




    if (VAR_8) {
 int VAR_10 = VAR_6;
        struct Hist *VAR_11 = &VAR_0;
        while ((VAR_11 = VAR_11->Hnext))
     VAR_11->Hnum = VAR_11->Href = VAR_10--;
    }
}
