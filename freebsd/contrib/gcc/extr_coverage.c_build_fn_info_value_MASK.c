
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct function_list {int * n_ctrs; int checksum; int ident; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_8 (const struct function_list *VAR_3, tree VAR_4)
{
  tree VAR_5 = VAR_1;
  tree VAR_6 = FUNC_2 (VAR_4);
  unsigned VAR_7;
  tree VAR_8 = VAR_1;


  VAR_5 = FUNC_7 (VAR_6, FUNC_4 (FUNC_5 (),
          VAR_3->ident), VAR_5);
  VAR_6 = FUNC_0 (VAR_6);


  VAR_5 = FUNC_7 (VAR_6, FUNC_4 (FUNC_5 (),
          VAR_3->checksum), VAR_5);
  VAR_6 = FUNC_0 (VAR_6);


  for (VAR_7 = 0; VAR_7 != VAR_0; VAR_7++)
    if (VAR_2 & (1 << VAR_7))
      {
 tree VAR_9 = FUNC_4 (FUNC_5 (),
     VAR_3->n_ctrs[VAR_7]);

 VAR_8 = FUNC_7 (VAR_1, VAR_9, VAR_8);
      }


  VAR_8 = FUNC_3 (FUNC_1 (VAR_6),
          FUNC_6 (VAR_8));
  VAR_5 = FUNC_7 (VAR_6, VAR_8, VAR_5);


  VAR_5 = FUNC_3 (VAR_4, FUNC_6 (VAR_5));

  return VAR_5;
}
