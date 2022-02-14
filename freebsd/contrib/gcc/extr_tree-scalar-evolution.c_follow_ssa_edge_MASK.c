
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int t_bool ;
struct loop {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct loop*,struct loop*) ;
 int FUNC_4 (struct loop*,int ,int ,int *,int) ;
 int FUNC_5 (struct loop*,int ,int ,int ,int *,int) ;
 int FUNC_6 (struct loop*,int ,int ,int *,int) ;
 struct loop* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static t_bool
FUNC_9 (struct loop *VAR_5, tree VAR_6, tree VAR_7,
   tree *VAR_8, int VAR_9)
{
  struct loop *VAR_10;

  if (FUNC_1 (VAR_6) == VAR_0)
    return VAR_3;


  if (VAR_9++ > FUNC_0 (VAR_1))
    return VAR_2;

  VAR_10 = FUNC_7 (VAR_6);

  switch (FUNC_1 (VAR_6))
    {
    case 128:
      if (!FUNC_8 (VAR_6))




 return FUNC_4
   (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);




      if (VAR_6 == VAR_7)
 return VAR_4;




      if (VAR_10 == VAR_5)
 return VAR_3;


      if (FUNC_3 (VAR_5, VAR_10))
 return FUNC_6
   (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);


      return VAR_3;

    case 129:
      return FUNC_5 (VAR_5, VAR_6,
         FUNC_2 (VAR_6, 1),
         VAR_7,
         VAR_8, VAR_9);

    default:



      return VAR_3;
    }
}
