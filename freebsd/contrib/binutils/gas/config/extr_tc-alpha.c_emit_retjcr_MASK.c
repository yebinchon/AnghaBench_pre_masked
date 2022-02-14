
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const*,TYPE_1__*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__,int) ;
 int FUNC_3 (TYPE_1__,int) ;
 int FUNC_4 (TYPE_1__,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void
FUNC_6 (const expressionS *VAR_5,
      int VAR_6,
      const void * VAR_7)
{
  const char *VAR_8 = (const char *) VAR_7;
  expressionS VAR_9[3];
  int VAR_10, VAR_11 = 0;

  if (VAR_11 < VAR_6 && VAR_5[VAR_11].X_op == VAR_4)
    VAR_10 = FUNC_1 (VAR_5[VAR_11++].X_add_number);
  else
    VAR_10 = VAR_1;

  FUNC_4 (VAR_9[0], VAR_10);

  if (VAR_11 < VAR_6 &&
      (VAR_5[VAR_11].X_op == VAR_3 || VAR_5[VAR_11].X_op == VAR_2))
    VAR_10 = FUNC_1 (VAR_5[VAR_11++].X_add_number);
  else
    VAR_10 = VAR_0;

  FUNC_3 (VAR_9[1], VAR_10);

  if (VAR_11 < VAR_6)
    VAR_9[2] = VAR_5[VAR_11];
  else
    FUNC_2 (VAR_9[2], FUNC_5 (VAR_8, "ret") == 0);

  FUNC_0 (VAR_8, VAR_9, 3, 0);
}
