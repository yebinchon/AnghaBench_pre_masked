
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct varobj*) ;
 int FUNC_1 (struct type*) ;



 struct type* FUNC_2 (struct varobj*) ;

__attribute__((used)) static int
FUNC_3 (struct varobj *VAR_0)
{
  int VAR_1;
  struct type *VAR_2;

  if (FUNC_0 (VAR_0))
    return 0;

  VAR_2 = FUNC_2 (VAR_0);

  switch (FUNC_1 (VAR_2))
    {
    case 129:
    case 128:
    case 130:
      VAR_1 = 0;
      break;

    default:
      VAR_1 = 1;
    }

  return VAR_1;
}
