
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {scalar_t__ num; } ;
struct TYPE_2__ {struct loop** parray; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int*) ;
 scalar_t__ FUNC_7 (struct loop*) ;

__attribute__((used)) static tree
FUNC_8 (struct loop *VAR_3, tree VAR_4)
{
  bool VAR_5 = 0;

  if (VAR_4 == VAR_1)
    return VAR_1;

  else if (FUNC_1 (VAR_4) == VAR_0)
    {
      if (FUNC_0 (VAR_4) >= (unsigned) VAR_3->num)
 {
   struct loop *VAR_6 =
     VAR_2->parray[FUNC_0 (VAR_4)];
   tree VAR_7 = FUNC_7 (VAR_6);

   if (VAR_7 == VAR_1)
     return VAR_1;
   else
     {
       tree VAR_8;
       tree VAR_9 = FUNC_5 (VAR_7);



       VAR_7 = FUNC_4 (VAR_9, VAR_7,
       FUNC_2 (VAR_9, 1));



       VAR_8 = FUNC_3 (VAR_6->num, VAR_4, VAR_7);


       return FUNC_8 (VAR_3, VAR_8);
     }
 }
      else
 return VAR_4;
     }


  else if (FUNC_6 (VAR_4, VAR_3->num, &VAR_5) && VAR_5)
    return VAR_4;

  else
    return VAR_1;
}
