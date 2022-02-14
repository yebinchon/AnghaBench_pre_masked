
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int regset ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_2 (unsigned int) ;
 size_t VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,unsigned int) ;
 unsigned int VAR_10 ;
 int FUNC_5 (int ,unsigned int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int (*) (scalar_t__,int ),int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__* VAR_18 ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__* VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static void
FUNC_8 (regset VAR_22)
{
  unsigned int VAR_23;



  if ((VAR_7 && VAR_14)
      || ! VAR_2
      || (! VAR_5
   && ! VAR_11
   && VAR_16)
      || VAR_13)
    {
      FUNC_4 (VAR_22, VAR_10);
    }





  if (! VAR_21 || VAR_17)
    {
      FUNC_4 (VAR_22, VAR_4);





    }





  if ((unsigned) VAR_9 != VAR_8
      && VAR_15[VAR_9])
    FUNC_4 (VAR_22, VAR_9);





  for (VAR_23 = 0; VAR_23 < VAR_3; VAR_23++)
    if (VAR_18[VAR_23] || FUNC_1 (VAR_23))
      FUNC_4 (VAR_22, VAR_23);

  if (VAR_7 && VAR_14)
    {

      for (VAR_23 = 0; VAR_23 < VAR_3; VAR_23++)
 if (VAR_19[VAR_23] && ! FUNC_2 (VAR_23)
     && ! FUNC_5 (VAR_20, VAR_23))
   FUNC_4 (VAR_22, VAR_23);
    }
  FUNC_6 (FUNC_7, VAR_22);
}
