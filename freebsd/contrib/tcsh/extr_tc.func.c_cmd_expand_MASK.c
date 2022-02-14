
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {int * word; struct wordent* prev; struct wordent* next; } ;
struct varent {int * vec; } ;
typedef int Char ;


 int FUNC_0 (int,int,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 struct varent* FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wordent*,int **) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char) ;

int
FUNC_7(Char *VAR_4, Char **VAR_5)
{
    struct wordent VAR_6[3];
    struct varent *VAR_7;
    int VAR_8 = VAR_2;

    VAR_6[0].next = &VAR_6[1];
    VAR_6[1].next = &VAR_6[2];
    VAR_6[2].next = &VAR_6[0];

    VAR_6[0].prev = &VAR_6[2];
    VAR_6[1].prev = &VAR_6[0];
    VAR_6[2].prev = &VAR_6[1];

    VAR_6[0].word = VAR_0;
    VAR_6[2].word = VAR_1;

    if ((VAR_7 = FUNC_1(VAR_4, &VAR_3)) != ((void*)0) && VAR_7->vec != ((void*)0)) {
 if (VAR_5 == ((void*)0)) {
     FUNC_5(FUNC_0(22, 1, "%S: \t aliased to "), VAR_4);
     FUNC_3(VAR_7->vec);
     FUNC_6('\n');
 }
 else
     *VAR_5 = FUNC_2(VAR_7->vec);
    }
    else {
 VAR_6[1].word = VAR_4;
 VAR_8 = FUNC_4(VAR_6, VAR_5);
    }
    return VAR_8;
}
