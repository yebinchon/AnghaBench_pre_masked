
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct object_size_info {int* depths; unsigned int* tos; unsigned int* stack; size_t object_size_type; int reexamine; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int) ;

 int FUNC_1 (int ) ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ,unsigned int) ;
 int * VAR_4 ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__** VAR_5 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (struct object_size_info *VAR_6, tree VAR_7,
      unsigned int VAR_8)
{
  tree VAR_9 = FUNC_2 (VAR_7);
  unsigned int VAR_10 = FUNC_3 (VAR_7);

  if (VAR_6->depths[VAR_10])
    {
      if (VAR_6->depths[VAR_10] != VAR_8)
 {
   unsigned int *VAR_11;


   for (VAR_11 = VAR_6->tos; VAR_11 > VAR_6->stack; )
     {
       --VAR_11;
       FUNC_8 (VAR_6->reexamine, *VAR_11);
       FUNC_9 (VAR_4[VAR_6->object_size_type], *VAR_11);
       VAR_5[VAR_6->object_size_type][*VAR_11] = 0;
       if (*VAR_11 == VAR_10)
  break;
     }
 }
      return;
    }
  else if (! FUNC_7 (VAR_6->reexamine, VAR_10))
    return;

  VAR_6->depths[VAR_10] = VAR_8;
  *VAR_6->tos++ = VAR_10;

  switch (FUNC_5 (VAR_9))
    {
    case 128:
      FUNC_10 (FUNC_5 (FUNC_6 (VAR_9, 0)) == 130);
      VAR_9 = FUNC_6 (VAR_9, 0);


    case 130:
      {
 tree VAR_12 = FUNC_6 (VAR_9, 1), VAR_13;
 FUNC_4 (VAR_12);

 if (FUNC_5 (VAR_12) == VAR_0)
   {
     VAR_13 = FUNC_13 (VAR_12);
     if (VAR_13)
       VAR_12 = VAR_13;
   }

 if (FUNC_5 (VAR_12) == VAR_3)
   FUNC_14 (VAR_6, VAR_12, VAR_8);
 else if (FUNC_5 (VAR_12) == VAR_2)
   {
     tree VAR_14 = FUNC_6 (VAR_12, 0);
     tree VAR_15 = FUNC_6 (VAR_12, 1);
     tree VAR_16, VAR_17;

     if (FUNC_5 (VAR_14) == VAR_3)
       {
  VAR_17 = VAR_14;
  VAR_16 = VAR_15;
       }
     else
       {
  VAR_17 = VAR_15;
  VAR_16 = VAR_14;
  FUNC_10 (FUNC_5 (VAR_17) == VAR_3);
       }
     FUNC_10 (FUNC_5 (VAR_16) == VAR_1);

     FUNC_14 (VAR_6, VAR_17,
           VAR_8 + !FUNC_12 (VAR_16));
   }
 else
   FUNC_11 ();
 break;
      }
    case 129:
      {
 int VAR_18;

 for (VAR_18 = 0; VAR_18 < FUNC_1 (VAR_9); VAR_18++)
   {
     tree VAR_19 = FUNC_0 (VAR_9, VAR_18);

     if (FUNC_5 (VAR_19) == VAR_3)
       FUNC_14 (VAR_6, VAR_19, VAR_8);
   }
 break;
      }
    default:
      FUNC_11 ();
    }

  VAR_6->depths[VAR_10] = 0;
  VAR_6->tos--;
}
