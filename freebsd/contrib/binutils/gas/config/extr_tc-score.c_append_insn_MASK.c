
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_2__ {int * error; int str; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3 (char *VAR_3, bfd_boolean VAR_4)
{
  int VAR_5 = VAR_1;

  FUNC_2 (VAR_3, VAR_4);

  if (VAR_2.error)
    {
      VAR_5 = (int) VAR_0;
      FUNC_1 (FUNC_0("%s -- `%s'"), VAR_2.error, VAR_2.str);
      VAR_2.error = ((void*)0);
    }

  return VAR_5;
}
