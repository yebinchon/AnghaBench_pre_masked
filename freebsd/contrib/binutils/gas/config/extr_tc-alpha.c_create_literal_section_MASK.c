
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
typedef int segT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6 (const char *VAR_8,
   segT *VAR_9,
   symbolS **VAR_10)
{
  segT VAR_11 = VAR_5;
  int VAR_12 = VAR_6;
  segT VAR_13;

  *VAR_9 = VAR_13 = FUNC_4 (VAR_8, 0);
  FUNC_5 (VAR_11, VAR_12);
  FUNC_1 (VAR_7, VAR_13, 4);
  FUNC_2 (VAR_7, VAR_13,
    VAR_4 | VAR_0 | VAR_2 | VAR_3
    | VAR_1);

  FUNC_0 (*VAR_10 = FUNC_3 (VAR_13));
}
