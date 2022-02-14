
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct object_size_info {int object_size_type; scalar_t__ pass; int reexamine; int visited; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int VAR_1 ;
 int FUNC_2 (int ,int) ;

 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,unsigned int) ;
 int FUNC_13 (int ,unsigned int) ;
 int FUNC_14 (int ,unsigned int) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (struct object_size_info*,int ,int ) ;
 int FUNC_16 (scalar_t__,char*) ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 (struct object_size_info*,int ,int ,int ) ;
 int** VAR_8 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct object_size_info*,int ,int ) ;
 int FUNC_22 (scalar_t__,int ,int) ;
 int* VAR_9 ;

__attribute__((used)) static void
FUNC_23 (struct object_size_info *VAR_10, tree VAR_11)
{
  int VAR_12 = VAR_10->object_size_type;
  unsigned int VAR_13 = FUNC_7 (VAR_11);
  tree VAR_14;
  bool VAR_15;

  if (FUNC_12 (VAR_5[VAR_12], VAR_13))
    return;

  if (VAR_10->pass == 0)
    {
      if (! FUNC_12 (VAR_10->visited, VAR_13))
 {
   FUNC_14 (VAR_10->visited, VAR_13);
   VAR_8[VAR_12][VAR_13]
     = (VAR_12 & 2) ? -1 : 0;
 }
      else
 {


   FUNC_14 (VAR_10->reexamine, VAR_13);
   if (VAR_6 && (VAR_7 & VAR_4))
     {
       FUNC_16 (VAR_6, "Found a dependency loop at ");
       FUNC_22 (VAR_6, VAR_11, VAR_7);
       FUNC_16 (VAR_6, "\n");
     }
   return;
 }
    }

  if (VAR_6 && (VAR_7 & VAR_4))
    {
      FUNC_16 (VAR_6, "Visiting use-def links for ");
      FUNC_22 (VAR_6, VAR_11, VAR_7);
      FUNC_16 (VAR_6, "\n");
    }

  VAR_14 = FUNC_5 (VAR_11);
  VAR_15 = 0;

  switch (FUNC_9 (VAR_14))
    {
    case 128:
      FUNC_17 (FUNC_9 (FUNC_10 (VAR_14, 0)) == 131);
      VAR_14 = FUNC_10 (VAR_14, 0);


    case 131:
      {
 tree VAR_16 = FUNC_10 (VAR_14, 1), VAR_17;
 FUNC_8 (VAR_16);

 if (FUNC_9 (VAR_16) == VAR_0)
   {
     VAR_17 = FUNC_20 (VAR_16);
     if (VAR_17)
       VAR_16 = VAR_17;
   }

 if (FUNC_9 (VAR_16) == VAR_3
     && FUNC_4 (FUNC_11 (VAR_16)))
   VAR_15 = FUNC_19 (VAR_10, VAR_11, VAR_16, 0);

 else if (FUNC_9 (VAR_16) == VAR_2)
   VAR_15 = FUNC_21 (VAR_10, VAR_11, VAR_16);

 else
   FUNC_15 (VAR_10, VAR_11, VAR_16);
 break;
      }

    case 132:

      VAR_8[VAR_12][VAR_13] = VAR_9[VAR_12];
      break;

    case 130:
      {
 tree VAR_18 = FUNC_6 (VAR_11);

 FUNC_17 (FUNC_1 (VAR_14));

 if (FUNC_9 (VAR_18) != VAR_1 && FUNC_0 (VAR_18))
   FUNC_15 (VAR_10, VAR_11, FUNC_0 (VAR_18));
 else
   FUNC_15 (VAR_10, VAR_11, VAR_18);
      }
      break;

    case 129:
      {
 int VAR_19;

 for (VAR_19 = 0; VAR_19 < FUNC_3 (VAR_14); VAR_19++)
   {
     tree VAR_20 = FUNC_2 (VAR_14, VAR_19);

     if (VAR_8[VAR_12][VAR_13]
  == VAR_9[VAR_12])
       break;

     if (FUNC_9 (VAR_20) == VAR_3)
       VAR_15 |= FUNC_19 (VAR_10, VAR_11, VAR_20, 0);
     else if (VAR_10->pass == 0)
       FUNC_15 (VAR_10, VAR_11, VAR_20);
   }
 break;
      }
    default:
      FUNC_18 ();
    }

  if (! VAR_15
      || VAR_8[VAR_12][VAR_13] == VAR_9[VAR_12])
    {
      FUNC_14 (VAR_5[VAR_12], VAR_13);
      FUNC_13 (VAR_10->reexamine, VAR_13);
    }
  else
    {
      FUNC_14 (VAR_10->reexamine, VAR_13);
      if (VAR_6 && (VAR_7 & VAR_4))
 {
   FUNC_16 (VAR_6, "Need to reexamine ");
   FUNC_22 (VAR_6, VAR_11, VAR_7);
   FUNC_16 (VAR_6, "\n");
 }
    }
}
