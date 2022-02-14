
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ access_kind ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 () ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,int,int *,int ,int *) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_10 (tree VAR_7, tree VAR_8, bool VAR_9)
{
  tree VAR_10;
  tree VAR_11;
  access_kind VAR_12;



  int VAR_13 = 0;



  if (!FUNC_3 (FUNC_5 (VAR_8)))
    return 1;


  VAR_11 = FUNC_6 ();
  if (VAR_11 && FUNC_1 (VAR_11))
    return 1;
  if (VAR_5
      && (!VAR_6 || VAR_5 > 1))
    return 1;

  if (!FUNC_3 (VAR_7))
    {
      VAR_10 = VAR_7;
      VAR_7 = FUNC_0 (VAR_7);
    }
  else
    VAR_10 = FUNC_2 (VAR_7);
  if (VAR_9)
    {



      if (VAR_3)
 VAR_13 = FUNC_9 (VAR_8,
            VAR_3, VAR_10);


      if (!VAR_13)
 VAR_13 = FUNC_8 (VAR_11, VAR_8, VAR_10);
    }



  VAR_10 = FUNC_2 (VAR_7);



  VAR_12 = FUNC_4 (VAR_7, VAR_8);
  if (VAR_12 == VAR_2
      || (VAR_12 == VAR_1 && VAR_13))
    return 1;

  if (!VAR_9)
    return 0;



  return FUNC_7 (VAR_10, 1,
       ((void*)0), VAR_4, ((void*)0))
    != VAR_0;
}
