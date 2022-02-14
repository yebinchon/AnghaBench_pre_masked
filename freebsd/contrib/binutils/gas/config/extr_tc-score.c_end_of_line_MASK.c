
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_4)
{
  int VAR_5 = VAR_2;

  FUNC_0 (VAR_4);
  if (*VAR_4 != '\0')
    {
      VAR_5 = (int) VAR_1;

      if (!VAR_3.error)
        VAR_3.error = VAR_0;
    }

  return VAR_5;
}
