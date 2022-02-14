
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum XML_Convert_Result { ____Placeholder_XML_Convert_Result } XML_Convert_Result ;
typedef int XML_Char ;
struct TYPE_4__ {int * start; scalar_t__ end; int ptr; } ;
typedef TYPE_1__ STRING_POOL ;
typedef int ICHAR ;
typedef int ENCODING ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const*,char const**,char const*,int **,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static XML_Char *
FUNC_2(STRING_POOL *VAR_2, const ENCODING *VAR_3,
           const char *VAR_4, const char *VAR_5)
{
  if (!VAR_2->ptr && !FUNC_1(VAR_2))
    return ((void*)0);
  for (;;) {
    const enum XML_Convert_Result VAR_6 = FUNC_0(VAR_3, &VAR_4, VAR_5, (ICHAR **)&(VAR_2->ptr), (ICHAR *)VAR_2->end);
    if ((VAR_6 == VAR_0) || (VAR_6 == VAR_1))
      break;
    if (!FUNC_1(VAR_2))
      return ((void*)0);
  }
  return VAR_2->start;
}
