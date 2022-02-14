
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbitmap ;
typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void
FUNC_5 (sbitmap VAR_3, basic_block VAR_4, rtx VAR_5)
{
  int VAR_6 = FUNC_0 (VAR_5) ? VAR_1 : 0;
  rtx VAR_7, VAR_8;

  VAR_7 = FUNC_4 (VAR_5);

  for (VAR_8 = VAR_7; VAR_8; VAR_8 = FUNC_1 (VAR_8, 1))
    FUNC_3 (VAR_3, VAR_4, FUNC_1 (VAR_8, 0),
       VAR_0 | VAR_2 | VAR_6);

  FUNC_2 (&VAR_7);
}
