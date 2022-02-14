
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ n_elems; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__,char*,TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8 (void)
{
  int VAR_4 = 0;

  FUNC_1 (VAR_3, &VAR_1, 0);
  FUNC_3 (&VAR_1);
  if (VAR_0)
    FUNC_4 (VAR_0, "Code Hosting Expressions", &VAR_1);

  if (VAR_1.n_elems > 0)
    {
      FUNC_0 (VAR_2, VAR_1.n_elems);
      FUNC_2 ();
      FUNC_7 ();
      FUNC_5 ();
    }

  FUNC_6 (&VAR_1);

  return VAR_4;
}
