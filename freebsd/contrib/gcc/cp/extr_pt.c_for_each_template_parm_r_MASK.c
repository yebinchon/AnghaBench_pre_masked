
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* tree_fn_t ) (int ,void*) ;
typedef int tree ;
struct pair_fn_data {int visited; void* data; int (* fn ) (int ,void*) ;} ;




 int FUNC_0 (int ) ;






 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;
 int const FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;


 int FUNC_12 (int ) ;

 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;


 int VAR_1 ;
 scalar_t__ FUNC_22 (int ,int (*) (int ,void*),void*,int ) ;
 int FUNC_23 (int ,void*) ;

__attribute__((used)) static tree
FUNC_24 (tree *VAR_2, int *VAR_3, void *VAR_4)
{
  tree VAR_5 = *VAR_2;
  struct pair_fn_data *VAR_6 = (struct pair_fn_data *) VAR_4;
  tree_fn_t VAR_7 = VAR_6->fn;
  void *VAR_8 = VAR_6->data;

  if (FUNC_17 (VAR_5)
      && FUNC_22 (FUNC_14 (VAR_5), VAR_7, VAR_8, VAR_6->visited))
    return VAR_1;

  switch (FUNC_9 (VAR_5))
    {
    case 139:
      if (FUNC_19 (VAR_5))
 break;


    case 129:
    case 147:
      if (!FUNC_20 (VAR_5))
 *VAR_3 = 0;
      else if (FUNC_22 (FUNC_11 (FUNC_20 (VAR_5)),
           VAR_7, VAR_8, VAR_6->visited))
 return VAR_1;
      break;

    case 143:


      if (FUNC_22 (FUNC_16 (VAR_5), VAR_7, VAR_8,
      VAR_6->visited))
 return VAR_1;


    case 145:

      if (FUNC_22 (FUNC_10 (VAR_5), VAR_7, VAR_8, VAR_6->visited))
 return VAR_1;







      {
 tree VAR_9;

 for (VAR_9 = FUNC_13 (VAR_5); VAR_9; VAR_9 = FUNC_8 (VAR_9))
   if (FUNC_22 (FUNC_11 (VAR_9), VAR_7, VAR_8,
          VAR_6->visited))
     return VAR_1;



 *VAR_3 = 0;
      }
      break;

    case 130:
      if (FUNC_22 (FUNC_15 (VAR_5), VAR_7, VAR_8,
      VAR_6->visited))
 return VAR_1;
      break;

    case 146:
    case 128:
      if (FUNC_3 (VAR_5) && FUNC_4 (VAR_5)
   && FUNC_22 (FUNC_7 (VAR_5), VAR_7, VAR_8,
         VAR_6->visited))
 return VAR_1;


    case 141:
    case 150:
      if (FUNC_9 (VAR_5) == 150 && FUNC_5 (VAR_5)
   && FUNC_22 (FUNC_2 (VAR_5), VAR_7, VAR_8,
         VAR_6->visited))
 return VAR_1;
      if (FUNC_1 (VAR_5)
   && FUNC_22 (FUNC_1 (VAR_5), VAR_7, VAR_8,
         VAR_6->visited))
 return VAR_1;
      break;

    case 155:

      if (FUNC_22 (FUNC_21 (VAR_5), VAR_7, VAR_8, VAR_6->visited))
 return VAR_1;


    case 134:
    case 133:
    case 135:
      if (VAR_7 && (*VAR_7)(VAR_5, VAR_8))
 return VAR_1;
      else if (!VAR_7)
 return VAR_1;
      break;

    case 136:

      if (FUNC_6 (VAR_5)
   && FUNC_22 (FUNC_10 (VAR_5), VAR_7, VAR_8, VAR_6->visited))
 return VAR_1;


      *VAR_3 = 0;
      break;

    case 131:
      if (!VAR_7
   || FUNC_22 (FUNC_12 (VAR_5), VAR_7,
         VAR_8, VAR_6->visited))
 return VAR_1;
      break;

    case 152:
      if (FUNC_10 (VAR_5) && FUNC_19 (FUNC_10 (VAR_5))
   && FUNC_22 (FUNC_18
         (FUNC_10 (VAR_5)), VAR_7, VAR_8,
         VAR_6->visited))
 return VAR_1;
      break;

    case 144:
    case 153:


      if (!VAR_7 && !FUNC_10 (VAR_5))
 return VAR_1;
      break;

    case 142:
    case 154:
    case 138:
    case 151:
    case 137:
    case 148:
    case 157:
    case 149:
    case 132:
    case 140:
      if (!VAR_7)
 return VAR_1;
      break;

    case 156:



      *VAR_3 = 0;
      if (FUNC_22 (FUNC_0 (*VAR_2), VAR_7, VAR_8,
      VAR_6->visited))
 return VAR_1;
      break;

    default:
      break;
    }


  return VAR_0;
}
