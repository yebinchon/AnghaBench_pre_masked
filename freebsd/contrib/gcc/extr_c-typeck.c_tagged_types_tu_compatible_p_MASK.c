
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct tagged_tu_seen_cache {scalar_t__ t1; scalar_t__ t2; int val; struct tagged_tu_seen_cache* next; } ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

 int VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int * FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

 struct tagged_tu_seen_cache* FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_14 () ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int ,int ) ;
 struct tagged_tu_seen_cache* VAR_4 ;

__attribute__((used)) static int
FUNC_18 (tree VAR_5, tree VAR_6)
{
  tree VAR_7, VAR_8;
  bool VAR_9 = 0;







  while (FUNC_9 (VAR_5)
  && FUNC_4 (FUNC_9 (VAR_5)) == VAR_2
  && FUNC_2 (FUNC_9 (VAR_5)))
    VAR_5 = FUNC_2 (FUNC_9 (VAR_5));

  while (FUNC_9 (VAR_6)
  && FUNC_4 (FUNC_9 (VAR_6)) == VAR_2
  && FUNC_2 (FUNC_9 (VAR_6)))
    VAR_6 = FUNC_2 (FUNC_9 (VAR_6));


  if (VAR_3 && FUNC_9 (VAR_5) != FUNC_9 (VAR_6))
    return 0;




  if (FUNC_10 (VAR_5) == ((void*)0)
      || FUNC_10 (VAR_6) == ((void*)0))
    return 1;

  {
    const struct tagged_tu_seen_cache * VAR_10;
    for (VAR_10 = VAR_4; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
      if (VAR_10->t1 == VAR_5 && VAR_10->t2 == VAR_6)
 return VAR_10->val;
  }

  switch (FUNC_4 (VAR_5))
    {
    case 130:
      {
 struct tagged_tu_seen_cache *VAR_11 = FUNC_12 (VAR_5, VAR_6);

 tree VAR_12 = FUNC_11 (VAR_5);
 tree VAR_13 = FUNC_11 (VAR_6);

 if (VAR_12 == VAR_13)
   {
     return 1;
   }

 for (;VAR_12 && VAR_13; VAR_12 = FUNC_3 (VAR_12), VAR_13 = FUNC_3 (VAR_13))
   {
     if (FUNC_5 (VAR_12) != FUNC_5 (VAR_13))
       break;
     if (FUNC_17 (FUNC_7 (VAR_12), FUNC_7 (VAR_13)) != 1)
       {
  VAR_11->val = 0;
  return 0;
       }
   }

 if (VAR_12 == VAR_1 && VAR_13 == VAR_1)
   {
     return 1;
   }
 if (VAR_12 == VAR_1 || VAR_13 == VAR_1)
   {
     VAR_11->val = 0;
     return 0;
   }

 if (FUNC_15 (FUNC_11 (VAR_5)) != FUNC_15 (FUNC_11 (VAR_6)))
   {
     VAR_11->val = 0;
     return 0;
   }

 for (VAR_7 = FUNC_11 (VAR_5); VAR_7; VAR_7 = FUNC_3 (VAR_7))
   {
     VAR_8 = FUNC_16 (FUNC_5 (VAR_7), FUNC_11 (VAR_6));
     if (VAR_8 == ((void*)0)
  || FUNC_17 (FUNC_7 (VAR_7), FUNC_7 (VAR_8)) != 1)
       {
  VAR_11->val = 0;
  return 0;
       }
   }
 return 1;
      }

    case 128:
      {
 struct tagged_tu_seen_cache *VAR_14 = FUNC_12 (VAR_5, VAR_6);
 if (FUNC_15 (FUNC_8 (VAR_5)) != FUNC_15 (FUNC_8 (VAR_6)))
   {
     VAR_14->val = 0;
     return 0;
   }


 for (VAR_7 = FUNC_8 (VAR_5), VAR_8 = FUNC_8 (VAR_6); VAR_7 && VAR_8;
      VAR_7 = FUNC_3 (VAR_7), VAR_8 = FUNC_3 (VAR_8))
   {
     int VAR_15;


     if (FUNC_1 (VAR_7) == ((void*)0)
  || FUNC_1 (VAR_7) != FUNC_1 (VAR_8))
       break;
     VAR_15 = FUNC_13 (FUNC_6 (VAR_7), FUNC_6 (VAR_8));
     if (VAR_15 == 0)
       {
  VAR_14->val = 0;
  return 0;
       }
     if (VAR_15 == 2)
       VAR_9 = 1;

     if (FUNC_4 (VAR_7) == VAR_0
  && FUNC_17 (FUNC_0 (VAR_7),
         FUNC_0 (VAR_8)) != 1)
       {
  VAR_14->val = 0;
  return 0;
       }
   }
 if (!VAR_7 && !VAR_8)
   {
     VAR_14->val = VAR_9 ? 2 : 1;
     return VAR_14->val;
   }

 for (VAR_7 = FUNC_8 (VAR_5); VAR_7; VAR_7 = FUNC_3 (VAR_7))
   {
     bool VAR_16 = 0;

     if (FUNC_1 (VAR_7) != ((void*)0))
       for (VAR_8 = FUNC_8 (VAR_6); VAR_8; VAR_8 = FUNC_3 (VAR_8))
  if (FUNC_1 (VAR_7) == FUNC_1 (VAR_8))
    {
      int VAR_17;
      VAR_17 = FUNC_13 (FUNC_6 (VAR_7), FUNC_6 (VAR_8));
      if (VAR_17 == 0)
        {
   VAR_14->val = 0;
   return 0;
        }
      if (VAR_17 == 2)
        VAR_9 = 1;

      if (FUNC_4 (VAR_7) == VAR_0
   && FUNC_17 (FUNC_0 (VAR_7),
          FUNC_0 (VAR_8)) != 1)
        break;

      VAR_16 = 1;
      break;
    }
     if (!VAR_16)
       {
  VAR_14->val = 0;
  return 0;
       }
   }
 VAR_14->val = VAR_9 ? 2 : 10;
 return VAR_14->val;
      }

    case 129:
      {
 struct tagged_tu_seen_cache *VAR_18 = FUNC_12 (VAR_5, VAR_6);

 for (VAR_7 = FUNC_8 (VAR_5), VAR_8 = FUNC_8 (VAR_6);
      VAR_7 && VAR_8;
      VAR_7 = FUNC_3 (VAR_7), VAR_8 = FUNC_3 (VAR_8))
   {
     int VAR_19;
     if (FUNC_4 (VAR_7) != FUNC_4 (VAR_8)
  || FUNC_1 (VAR_7) != FUNC_1 (VAR_8))
       break;
     VAR_19 = FUNC_13 (FUNC_6 (VAR_7), FUNC_6 (VAR_8));
     if (VAR_19 == 0)
       break;
     if (VAR_19 == 2)
       VAR_9 = 1;

     if (FUNC_4 (VAR_7) == VAR_0
  && FUNC_17 (FUNC_0 (VAR_7),
         FUNC_0 (VAR_8)) != 1)
       break;
   }
 if (VAR_7 && VAR_8)
   VAR_18->val = 0;
 else
   VAR_18->val = VAR_9 ? 2 : 1;
 return VAR_18->val;
      }

    default:
      FUNC_14 ();
    }
}
