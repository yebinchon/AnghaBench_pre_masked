
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 struct type* FUNC_0 (struct type*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct value*) ;
 struct value* FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (struct type*,struct type*) ;
 int FUNC_5 (struct type*) ;

void
FUNC_6 (struct type *VAR_2, struct type *VAR_3, char *VAR_4,
        int VAR_5, int *VAR_6, int *VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;

  struct value *VAR_11;
  CORE_ADDR VAR_12;
  struct type *VAR_13;





  VAR_8 = 0;
  VAR_13 = FUNC_0 (VAR_2);
  if (VAR_13)
    {
      FUNC_6 (VAR_13, VAR_3, VAR_4, VAR_5, &VAR_8, &VAR_10);
      if (VAR_10 < 0)
 {
   *VAR_6 = VAR_8;
   *VAR_7 = -1;
   return;
 }
    }
  else
    VAR_10 = 0;




  VAR_9 = FUNC_4 (VAR_3, VAR_2);

  if (VAR_9 < 0)
    {
      *VAR_7 = VAR_10 + FUNC_5 (VAR_2);
      *VAR_6 = 0;
      return;
    }



  VAR_12 = *(CORE_ADDR *) (VAR_4 + VAR_5);


  if (VAR_12 == 0)
    FUNC_1 ("Couldn't find virtual table -- object may not be constructed yet.");
  VAR_11 = FUNC_3 (VAR_1, VAR_12 + 4 * (-VAR_10 - VAR_9 - VAR_0), ((void*)0));
  VAR_8 = FUNC_2 (VAR_11);
  *VAR_7 = -1;
  *VAR_6 = VAR_8;
  return;
}
