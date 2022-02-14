
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef scalar_t__ tree ;
typedef int bitmap ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int,int,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_19 (int ,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int FUNC_21 () ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int FUNC_23 (int ,scalar_t__*,int ,int) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 (scalar_t__*,int ,int) ;

__attribute__((used)) static tree
FUNC_27 (tree VAR_3, tree VAR_4)
{
  tree VAR_5, VAR_6[3];
  tree VAR_7, VAR_8, VAR_9;
  int VAR_10, VAR_11, VAR_12;
  bitmap VAR_13;
  bool VAR_14;

  VAR_14 = FUNC_6 (VAR_3) != VAR_1;



  VAR_7 = FUNC_22 (VAR_4);
  VAR_8 = FUNC_7 (VAR_4, 1);
  VAR_5 = FUNC_11 (VAR_7, VAR_8, VAR_14);
  if (VAR_5)
    {
      if (VAR_14)
 FUNC_4 (VAR_5);
      return VAR_5;
    }


  if (FUNC_2 (VAR_7) == VAR_0)
    return VAR_2;



  if (!VAR_8)
    return VAR_2;


  switch (FUNC_3 (VAR_7))
    {
    case 131:
    case 141:
    case 140:
      VAR_10 = 1;
      VAR_12 = 0;
      break;
    case 133:
    case 130:
      VAR_10 = 2;
      VAR_12 = 0;
      break;
    case 139:
    case 137:
    case 138:
    case 136:
    case 129:
      VAR_10 = 4;
      VAR_12 = 2;
      break;
    case 132:
    case 134:
      VAR_10 = 2;
      VAR_12 = 1;
      break;
    case 135:
    case 128:
      VAR_10 = 2;
      VAR_12 = 2;
      break;
    default:
      return VAR_2;
    }


  VAR_13 = FUNC_0 (((void*)0));

  FUNC_26 (VAR_6, 0, sizeof (VAR_6));
  for (VAR_11 = 0, VAR_9 = VAR_8;
       VAR_10;
       VAR_11++, VAR_10 >>= 1, VAR_9 = FUNC_5 (VAR_9))
    if (VAR_10 & 1)
      {
 FUNC_10 (VAR_13);
 if (!FUNC_23 (FUNC_9 (VAR_9), &VAR_6[VAR_11], VAR_13, VAR_12))
   VAR_6[VAR_11] = VAR_2;
      }

  FUNC_1 (VAR_13);

  VAR_5 = VAR_2;
  switch (FUNC_3 (VAR_7))
    {
    case 131:
      if (VAR_6[0])
 {
   tree VAR_15 = FUNC_19 (FUNC_8 (VAR_4), VAR_6[0]);



   if (FUNC_25 (VAR_15)
       || (FUNC_24 (VAR_15)
    && FUNC_25 (FUNC_7 (VAR_15, 0))))
     return VAR_15;
 }
      break;

    case 133:
      if (VAR_6[1] && FUNC_25 (VAR_6[1]))
 VAR_5 = FUNC_15 (VAR_7, VAR_8, VAR_6[1]);
      break;

    case 130:
      if (VAR_6[1] && FUNC_25 (VAR_6[1]))
 VAR_5 = FUNC_16 (VAR_7, VAR_8, VAR_6[1]);
      break;

    case 141:
      VAR_5 = FUNC_12 (VAR_8,
       FUNC_6 (VAR_3) != VAR_1, 0,
       VAR_6[0]);
      break;

    case 140:
      VAR_5 = FUNC_12 (VAR_8,
       FUNC_6 (VAR_3) != VAR_1, 1,
       VAR_6[0]);
      break;

    case 139:
    case 137:
    case 138:
    case 136:
      if (VAR_6[2] && FUNC_25 (VAR_6[2]))
 VAR_5 = FUNC_13 (VAR_7, VAR_8, VAR_6[2], VAR_14,
       FUNC_3 (VAR_7));
      break;

    case 132:
    case 134:
      if (VAR_6[1] && FUNC_25 (VAR_6[1]))
 VAR_5 = FUNC_18 (VAR_7, VAR_8, VAR_6[1], VAR_14,
       FUNC_3 (VAR_7));
      break;

    case 129:
      if (VAR_6[2] && FUNC_25 (VAR_6[2]))
 VAR_5 = FUNC_17 (VAR_8, VAR_6[2]);
      break;

    case 135:
    case 128:
      if (VAR_6[1] && FUNC_25 (VAR_6[1]))
 VAR_5 = FUNC_14 (VAR_8, VAR_6[1],
         FUNC_3 (VAR_7));
      break;

    default:
      FUNC_21 ();
    }

  if (VAR_5 && VAR_14)
    VAR_5 = FUNC_20 (VAR_5);
  return VAR_5;
}
