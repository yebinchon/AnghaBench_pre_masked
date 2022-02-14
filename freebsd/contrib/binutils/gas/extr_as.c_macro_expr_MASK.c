
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* ptr; } ;
typedef TYPE_1__ sb ;
struct TYPE_7__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
typedef TYPE_2__ expressionS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_2__*) ;
 char* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_2, int VAR_3, sb *VAR_4, int *VAR_5)
{
  char *VAR_6;
  expressionS VAR_7;

  FUNC_2 (VAR_4);

  VAR_6 = VAR_1;
  VAR_1 = VAR_4->ptr + VAR_3;
  FUNC_1 (&VAR_7);
  VAR_3 = VAR_1 - VAR_4->ptr;
  VAR_1 = VAR_6;

  if (VAR_7.X_op != VAR_0)
    FUNC_0 ("%s", VAR_2);

  *VAR_5 = (int) VAR_7.X_add_number;

  return VAR_3;
}
