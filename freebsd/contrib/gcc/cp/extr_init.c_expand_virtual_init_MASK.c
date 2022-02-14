
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_12 (tree VAR_9, tree VAR_10)
{
  tree VAR_11, VAR_12;
  tree VAR_13;


  VAR_11 = FUNC_7 (VAR_9);



  VAR_13 = FUNC_0 (VAR_9);
  if (VAR_13)
    {
      tree VAR_14;
      tree VAR_15;


      VAR_15 = VAR_6;
      VAR_14 = FUNC_2 (VAR_3,
        FUNC_1 (VAR_15),
        VAR_15,
        VAR_13);
      VAR_14 = FUNC_4 (VAR_14, ((void*)0));
      VAR_14 = FUNC_8 (FUNC_1 (VAR_11), VAR_14);




      VAR_11 = FUNC_3 (VAR_0,
       FUNC_1 (VAR_11),
       FUNC_2 (VAR_1, VAR_4,
        VAR_5, VAR_8),
       VAR_14,
       VAR_11);
    }


  VAR_12 = FUNC_6 (FUNC_4 (VAR_10, ((void*)0)),
          FUNC_1 (VAR_9));
  FUNC_11 (VAR_12 != VAR_7);


  VAR_11 = FUNC_9 (FUNC_1 (VAR_12), VAR_11, 0);
  FUNC_10 (FUNC_5 (VAR_12, VAR_2, VAR_11));
}
