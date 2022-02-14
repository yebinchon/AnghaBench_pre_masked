
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct sra_elt {int type; int element; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static tree
FUNC_10 (struct sra_elt *VAR_9, tree VAR_10)
{
  switch (FUNC_1 (FUNC_3 (VAR_10)))
    {
    case 128:
      {
 tree VAR_11 = VAR_9->element;


 if (FUNC_0 (VAR_11) != FUNC_4 (FUNC_3 (VAR_10)))
   VAR_11 = FUNC_8 (FUNC_3 (VAR_10), VAR_11);

        return FUNC_6 (VAR_2, VAR_9->type, VAR_10, VAR_11, ((void*)0));
      }

    case 130:
      VAR_8 |= VAR_6;
      if (FUNC_1 (VAR_9->element) == VAR_4)
 return FUNC_7 (VAR_0, VAR_9->type, VAR_10,
         FUNC_2 (VAR_9->element, 0), ((void*)0), ((void*)0));
      else
 return FUNC_7 (VAR_1, VAR_9->type, VAR_10, VAR_9->element, ((void*)0), ((void*)0));

    case 129:
      if (VAR_9->element == VAR_7)
 return FUNC_5 (VAR_5, VAR_9->type, VAR_10);
      else
 return FUNC_5 (VAR_3, VAR_9->type, VAR_10);

    default:
      FUNC_9 ();
    }
}
