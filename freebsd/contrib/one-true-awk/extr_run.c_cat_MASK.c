
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* sval; int tval; } ;
typedef int Node ;
typedef TYPE_1__ Cell ;


 int VAR_0 ;
 int FUNC_0 (char**,int*,int,int ,int ,char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;

Cell *FUNC_7(Node **VAR_2, int VAR_3)
{
 Cell *VAR_4, *VAR_5, *VAR_6;
 int VAR_7, VAR_8;
 char *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 VAR_4 = FUNC_1(VAR_2[0]);
 VAR_7 = FUNC_4(FUNC_2(VAR_4));
 FUNC_0(&VAR_9, &VAR_10, VAR_7 + 1, VAR_1, 0, "cat1");
 (void) FUNC_5(VAR_9, VAR_4->sval, VAR_10);

 VAR_5 = FUNC_1(VAR_2[1]);
 VAR_8 = FUNC_4(FUNC_2(VAR_5));
 FUNC_0(&VAR_9, &VAR_10, VAR_7 + VAR_8 + 1, VAR_1, 0, "cat2");
 (void) FUNC_5(VAR_9 + VAR_7, VAR_5->sval, VAR_10 - VAR_7);

 FUNC_6(VAR_4);
 FUNC_6(VAR_5);

 VAR_6 = FUNC_3();
 VAR_6->sval = VAR_9;
 VAR_6->tval = VAR_0;

 return(VAR_6);
}
