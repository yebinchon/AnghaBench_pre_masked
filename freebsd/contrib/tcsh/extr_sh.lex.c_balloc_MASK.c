
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int FUNC_0 (int **,int **) ;
 int VAR_1 ;
 int ** VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static void
FUNC_3(int VAR_3)
{
    Char **VAR_4;

    while (VAR_3 >= VAR_1) {
 VAR_4 = FUNC_1(VAR_1 + 2, sizeof(Char **));
 if (VAR_2) {
     (void) FUNC_0(VAR_4, VAR_2);
     FUNC_2(VAR_2);
 }
 VAR_2 = VAR_4;
 VAR_2[VAR_1] = FUNC_1(VAR_0, sizeof(Char));
 VAR_1++;
    }
}
