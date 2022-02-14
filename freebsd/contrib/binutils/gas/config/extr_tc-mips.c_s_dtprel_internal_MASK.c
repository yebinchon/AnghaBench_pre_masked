
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ X_op; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_7__ {int fr_literal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,char*,size_t,TYPE_1__*,int ,int ) ;
 char* FUNC_5 (size_t) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,size_t) ;

__attribute__((used)) static void
FUNC_8 (size_t VAR_5)
{
  expressionS VAR_6;
  char *VAR_7;

  FUNC_3 (&VAR_6);

  if (VAR_6.X_op != VAR_3)
    {
      FUNC_1 (FUNC_0("Unsupported use of %s"), (VAR_5 == 8
        ? ".dtpreldword"
        : ".dtprelword"));
      FUNC_6 ();
    }

  VAR_7 = FUNC_5 (VAR_5);
  FUNC_7 (VAR_7, 0, VAR_5);
  FUNC_4 (VAR_4, VAR_7 - VAR_4->fr_literal, VAR_5, &VAR_6, VAR_2,
        (VAR_5 == 8
  ? VAR_1
  : VAR_0));

  FUNC_2 ();
}
