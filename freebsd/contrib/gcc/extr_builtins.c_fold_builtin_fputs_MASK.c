
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char const) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__* VAR_8 ;
 char* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 () ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,int ,int ,int ) ;

tree
FUNC_13 (tree VAR_14, bool VAR_15, bool VAR_16, tree VAR_17)
{
  tree VAR_18;


  tree const VAR_19 = VAR_16 ? VAR_8[VAR_1]
    : VAR_9[VAR_0];
  tree const VAR_20 = VAR_16 ? VAR_8[VAR_3]
    : VAR_9[VAR_2];


  if (!VAR_15)
    return 0;


  if (!FUNC_12 (VAR_14, VAR_6, VAR_6, VAR_7))
    return 0;

  if (! VAR_17)
    VAR_17 = FUNC_7 (FUNC_2 (VAR_14), 0);



  if (!VAR_17
      || FUNC_1 (VAR_17) != VAR_4)
    return 0;

  switch (FUNC_8 (VAR_17, 1))
    {
    case -1:
      return FUNC_10 (VAR_10, VAR_11,
          FUNC_2 (FUNC_0 (VAR_14)));

    case 0:
      {
 const char *VAR_21 = FUNC_6 (FUNC_2 (VAR_14));

 if (VAR_21 != ((void*)0))
   {


     VAR_14 = FUNC_5 (VAR_5,
           FUNC_2 (FUNC_0 (VAR_14)));
     VAR_14 = FUNC_11 (VAR_5,
     FUNC_4 (VAR_5, VAR_21[0]),
     VAR_14);
     VAR_18 = VAR_19;
     break;
   }
      }

    case 1:
      {
 tree VAR_22;


 if (VAR_12)
   return 0;
 VAR_22 = FUNC_2 (VAR_14);


 VAR_14 = FUNC_5 (VAR_5,
       FUNC_2 (FUNC_0 (VAR_14)));
 VAR_14 = FUNC_11 (VAR_5, VAR_17, VAR_14);
 VAR_14 = FUNC_11 (VAR_5, VAR_13, VAR_14);
 VAR_14 = FUNC_11 (VAR_5, VAR_22, VAR_14);
 VAR_18 = VAR_20;
 break;
      }
    default:
      FUNC_9 ();
    }



  if (!VAR_18)
    return 0;



  return FUNC_3 (VAR_18, VAR_14);
}
