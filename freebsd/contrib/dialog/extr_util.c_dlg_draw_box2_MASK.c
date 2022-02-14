
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char chtype ;
typedef int WINDOW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char) ;
 char FUNC_1 (int ) ;
 char FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,int,int) ;

void
FUNC_5(WINDOW *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10,
       chtype VAR_11, chtype VAR_12, chtype VAR_13)
{
    int VAR_14, VAR_15;
    chtype VAR_16 = FUNC_2(VAR_6);

    FUNC_0(VAR_6, 0);
    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
 (void) FUNC_4(VAR_6, VAR_7 + VAR_14, VAR_8);
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
     if (!VAR_14 && !VAR_15)
  (void) FUNC_3(VAR_6, VAR_12 | FUNC_1(VAR_3));
     else if (VAR_14 == VAR_9 - 1 && !VAR_15)
  (void) FUNC_3(VAR_6, VAR_12 | FUNC_1(VAR_1));
     else if (!VAR_14 && VAR_15 == VAR_10 - 1)
  (void) FUNC_3(VAR_6, VAR_13 | FUNC_1(VAR_4));
     else if (VAR_14 == VAR_9 - 1 && VAR_15 == VAR_10 - 1)
  (void) FUNC_3(VAR_6, VAR_13 | FUNC_1(VAR_2));
     else if (!VAR_14)
  (void) FUNC_3(VAR_6, VAR_12 | FUNC_1(VAR_0));
     else if (VAR_14 == VAR_9 - 1)
  (void) FUNC_3(VAR_6, VAR_13 | FUNC_1(VAR_0));
     else if (!VAR_15)
  (void) FUNC_3(VAR_6, VAR_12 | FUNC_1(VAR_5));
     else if (VAR_15 == VAR_10 - 1)
  (void) FUNC_3(VAR_6, VAR_13 | FUNC_1(VAR_5));
     else
  (void) FUNC_3(VAR_6, VAR_11 | ' ');
    }
    FUNC_0(VAR_6, VAR_16);
}
