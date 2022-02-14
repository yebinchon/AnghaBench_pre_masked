
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int nb_iterations; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 (scalar_t__,int ,int ) ;

__attribute__((used)) static inline tree
FUNC_8 (struct loop *VAR_5,
      tree VAR_6)
{
  tree VAR_7 = FUNC_5 (VAR_6);

  VAR_6 = FUNC_4 (VAR_7, VAR_6, FUNC_3 (VAR_7, 1));





  if (FUNC_0 (VAR_6) == VAR_0
      && (FUNC_1 (VAR_6) == 0
   || FUNC_2 (VAR_6)))
    VAR_6 = VAR_2;

  if (VAR_3 && (VAR_4 & VAR_1))
    {
      FUNC_6 (VAR_3, "  (set_nb_iterations_in_loop = ");
      FUNC_7 (VAR_3, VAR_6, 0);
      FUNC_6 (VAR_3, "))\n");
    }

  VAR_5->nb_iterations = VAR_6;
  return VAR_6;
}
