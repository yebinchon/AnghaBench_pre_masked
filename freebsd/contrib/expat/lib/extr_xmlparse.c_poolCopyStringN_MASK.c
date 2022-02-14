
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int XML_Char ;
struct TYPE_6__ {int * start; int ptr; } ;
typedef TYPE_1__ STRING_POOL ;


 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static const XML_Char *
FUNC_3(STRING_POOL *VAR_0, const XML_Char *VAR_1, int VAR_2)
{
  if (!VAR_0->ptr && !FUNC_2(VAR_0)) {
    return ((void*)0);
  }
  for (; VAR_2 > 0; --VAR_2, VAR_1++) {
    if (!FUNC_0(VAR_0, *VAR_1))
      return ((void*)0);
  }
  VAR_1 = VAR_0->start;
  FUNC_1(VAR_0);
  return VAR_1;
}
