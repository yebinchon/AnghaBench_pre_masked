
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int FILE ;
typedef int Cell ;


 int FUNC_0 (char*,char*) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;

FILE *FUNC_5(int VAR_0, Node *VAR_1)
{
 FILE *VAR_2;
 Cell *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_2(VAR_3);
 VAR_2 = FUNC_3(VAR_0, VAR_4);
 if (VAR_2 == ((void*)0))
  FUNC_0("can't open file %s", VAR_4);
 FUNC_4(VAR_3);
 return VAR_2;
}
