
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct data_reference {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct data_reference*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,struct data_reference*,int*) ;
 scalar_t__ FUNC_4 (int ,int ,struct data_reference*,struct data_reference*,int*) ;

__attribute__((used)) static bool
FUNC_5 (struct data_reference *VAR_3,
       struct data_reference *VAR_4)
{
  bool VAR_5;
  tree VAR_6 = FUNC_0 (VAR_3);
  tree VAR_7 = FUNC_0 (VAR_4);

  if (FUNC_1 (VAR_7) != VAR_0)
    return 0;




  while (FUNC_1 (VAR_7) == VAR_0)
     VAR_7 = FUNC_2 (VAR_7, 0);


  if (FUNC_1 (VAR_6) == VAR_1
      && ((FUNC_1 (VAR_7) == VAR_2
    && (FUNC_3 (FUNC_2 (VAR_6, 0), VAR_7, VAR_3,
         &VAR_5)
        && !VAR_5))
   || (FUNC_1 (VAR_7) == VAR_1
       && (FUNC_4 (FUNC_2 (VAR_6, 0),
           FUNC_2 (VAR_7, 0), VAR_3, VAR_4,
           &VAR_5)
    && !VAR_5))))
    return 1;
  else
    return 0;
}
