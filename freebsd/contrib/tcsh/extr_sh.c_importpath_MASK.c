
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int**) ;
 int FUNC_2 (int**,int ) ;
 int FUNC_3 (int**) ;
 int FUNC_4 (int ,int**,int *,int ) ;
 int VAR_5 ;
 int** FUNC_5 (size_t,int) ;

void
FUNC_6(Char *VAR_6)
{
    size_t VAR_7 = 0;
    Char *VAR_8;
    Char **VAR_9;
    int VAR_10;

    for (VAR_8 = VAR_6; *VAR_8; VAR_8++)
 if (*VAR_8 == VAR_0)
     VAR_7++;




    VAR_9 = FUNC_5(VAR_7 + 2, sizeof(Char *));
    VAR_8 = VAR_6;
    VAR_7 = 0;
    if (*VAR_8)
 for (;;) {
     if ((VAR_10 = *VAR_8) == VAR_0 || VAR_10 == 0) {
  *VAR_8 = 0;
  VAR_9[VAR_7++] = FUNC_0(*VAR_6 ? VAR_6 : VAR_1);
  if (VAR_10) {
      VAR_6 = VAR_8 + 1;
      *VAR_8 = VAR_0;
  }
  else
      break;
     }




     VAR_8++;
 }
    VAR_9[VAR_7] = 0;
    FUNC_2(VAR_9, VAR_4);
    FUNC_4(VAR_2, VAR_9, &VAR_5, VAR_3);
    FUNC_1(VAR_9);
    FUNC_3(VAR_9);
}
