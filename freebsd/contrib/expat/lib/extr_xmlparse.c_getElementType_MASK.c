
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
typedef int XML_Char ;
struct TYPE_11__ {int pool; int elementTypes; } ;
struct TYPE_10__ {int const* name; } ;
struct TYPE_9__ {TYPE_3__* m_dtd; } ;
typedef int ENCODING ;
typedef TYPE_2__ ELEMENT_TYPE ;
typedef TYPE_3__ DTD ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int const*,char const*,char const*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static ELEMENT_TYPE *
FUNC_5(XML_Parser VAR_0,
               const ENCODING *VAR_1,
               const char *VAR_2,
               const char *VAR_3)
{
  DTD * const VAR_4 = VAR_0->m_dtd;
  const XML_Char *VAR_5 = FUNC_3(&VAR_4->pool, VAR_1, VAR_2, VAR_3);
  ELEMENT_TYPE *VAR_6;

  if (!VAR_5)
    return ((void*)0);
  VAR_6 = (ELEMENT_TYPE *) FUNC_0(VAR_0, &VAR_4->elementTypes, VAR_5, sizeof(ELEMENT_TYPE));
  if (!VAR_6)
    return ((void*)0);
  if (VAR_6->name != VAR_5)
    FUNC_1(&VAR_4->pool);
  else {
    FUNC_2(&VAR_4->pool);
    if (!FUNC_4(VAR_0, VAR_6))
      return ((void*)0);
  }
  return VAR_6;
}
