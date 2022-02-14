
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
struct TYPE_6__ {scalar_t__ outer; } ;
typedef TYPE_1__ omp_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_0, omp_context *VAR_1)
{
  tree VAR_2;

  if (FUNC_5 (FUNC_10 (VAR_0, VAR_1)))
    VAR_2 = VAR_0;
  else if (FUNC_8 (VAR_0))
    {
      VAR_2 = FUNC_1 (FUNC_0 (VAR_0), 0);
      VAR_2 = FUNC_12 (VAR_2, VAR_1);
      VAR_2 = FUNC_2 (VAR_2);
    }
  else if (FUNC_6 (VAR_1))
    {
      bool VAR_3 = FUNC_11 (VAR_0, 0);
      VAR_2 = FUNC_3 (VAR_0, VAR_3, VAR_1);
    }
  else if (VAR_1->outer)
    VAR_2 = FUNC_9 (VAR_0, VAR_1->outer);
  else if (FUNC_7 (VAR_0))


    VAR_2 = VAR_0;
  else
    FUNC_4 ();

  if (FUNC_7 (VAR_0))
    VAR_2 = FUNC_2 (VAR_2);

  return VAR_2;
}
