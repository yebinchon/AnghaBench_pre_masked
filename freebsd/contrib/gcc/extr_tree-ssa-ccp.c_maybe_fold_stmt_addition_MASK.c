
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__,int *,int *) ;
 int * FUNC_10 (int *,int *) ;
 int * FUNC_11 (int ,int *,int *) ;
 int * FUNC_12 (scalar_t__,int *,int *,int ) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,int *,int *) ;
 int * FUNC_15 (int *,int *,int *,int *,int) ;
 int * VAR_8 ;
 scalar_t__ FUNC_16 (int *,int *) ;

__attribute__((used)) static tree
FUNC_17 (tree VAR_9)
{
  tree VAR_10 = FUNC_3 (VAR_9, 0);
  tree VAR_11 = FUNC_3 (VAR_9, 1);
  tree VAR_12 = FUNC_4 (VAR_9);
  tree VAR_13;
  tree VAR_14;
  bool VAR_15 = (FUNC_2 (VAR_9) == VAR_3);


  if (!FUNC_1 (VAR_12))
    return VAR_6;

  if (FUNC_0 (FUNC_4 (VAR_10)))
    {
      if (VAR_15)
 return VAR_6;
      VAR_14 = VAR_10, VAR_10 = VAR_11, VAR_11 = VAR_14;
    }

  if (FUNC_2 (VAR_11) != VAR_2)
    return VAR_6;

  if (FUNC_2 (VAR_10) != VAR_0)
    return VAR_6;
  VAR_10 = FUNC_3 (VAR_10, 0);



  while (FUNC_2 (VAR_10) == VAR_1)
    {
      tree VAR_16 = FUNC_3 (VAR_10, 0);
      tree VAR_17 = FUNC_3 (VAR_10, 1);
      tree VAR_18 = FUNC_4 (VAR_10);
      tree VAR_19 = FUNC_7 (VAR_18);
      tree VAR_20;

      if (FUNC_2 (VAR_17) != VAR_2)
 break;
      if (FUNC_2 (VAR_19) != VAR_2)
 break;


      VAR_20 = FUNC_5 (FUNC_4 (VAR_16));
      if (VAR_20)
 {
   VAR_20 = FUNC_6 (VAR_20);
   if (VAR_20)
     {
       if (FUNC_2 (VAR_20) != VAR_2)
  break;

       VAR_17 = FUNC_10 (FUNC_4 (VAR_20), VAR_17);
       if (!FUNC_13 (VAR_20))
  VAR_17 = FUNC_12 (VAR_3, VAR_17,
          VAR_20, 0);
     }
 }


      VAR_17 = FUNC_10 (VAR_8, VAR_17);
      VAR_17 = FUNC_12 (VAR_4, VAR_17, VAR_19, 0);





      if (VAR_15
   && FUNC_8 (FUNC_4 (VAR_11))
   && FUNC_16 (VAR_17, VAR_11))
 return ((void*)0);
      VAR_11 = FUNC_12 (VAR_15 ? VAR_3 : VAR_7,
        VAR_17, VAR_11, 0);
      VAR_15 = 0;
      VAR_10 = VAR_16;
    }




  if (VAR_15)
    {
      if (FUNC_8 (FUNC_4 (VAR_11)))
 return ((void*)0);
      VAR_11 = FUNC_11 (VAR_5, FUNC_4 (VAR_11), VAR_11);

      if (VAR_11 == ((void*)0) || FUNC_2 (VAR_11) != VAR_2)
 return ((void*)0);
    }

  VAR_13 = FUNC_4 (VAR_12);


  VAR_14 = FUNC_14 (VAR_10, VAR_11, VAR_13);
  if (!VAR_14)
    VAR_14 = FUNC_15 (FUNC_4 (VAR_10), VAR_10, VAR_11,
         VAR_13, 0);
  if (VAR_14)
    VAR_14 = FUNC_9 (VAR_0, VAR_12, VAR_14);

  return VAR_14;
}
