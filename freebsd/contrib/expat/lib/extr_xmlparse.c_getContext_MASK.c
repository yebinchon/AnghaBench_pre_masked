
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_4__* XML_Parser ;
typedef scalar_t__ XML_Char ;
typedef scalar_t__ XML_Bool ;
struct TYPE_17__ {scalar_t__ const* start; } ;
struct TYPE_11__ {TYPE_1__* binding; } ;
struct TYPE_16__ {int generalEntities; int prefixes; TYPE_2__ defaultPrefix; } ;
struct TYPE_15__ {scalar_t__* name; int open; } ;
struct TYPE_14__ {TYPE_3__* binding; scalar_t__* name; } ;
struct TYPE_13__ {TYPE_8__ m_tempPool; scalar_t__ m_namespaceSeparator; TYPE_7__* m_dtd; } ;
struct TYPE_12__ {int uriLen; scalar_t__ const* uri; } ;
struct TYPE_10__ {int uriLen; scalar_t__ const* uri; } ;
typedef TYPE_5__ PREFIX ;
typedef int HASH_TABLE_ITER ;
typedef TYPE_6__ ENTITY ;
typedef TYPE_7__ DTD ;


 char VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const FUNC_0 (char) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_8__*,scalar_t__ const) ;

__attribute__((used)) static const XML_Char *
FUNC_4(XML_Parser VAR_4)
{
  DTD * const VAR_5 = VAR_4->m_dtd;
  HASH_TABLE_ITER VAR_6;
  XML_Bool VAR_7 = VAR_2;

  if (VAR_5->defaultPrefix.binding) {
    int VAR_8;
    int VAR_9;
    if (!FUNC_3(&VAR_4->m_tempPool, FUNC_0(VAR_0)))
      return ((void*)0);
    VAR_9 = VAR_5->defaultPrefix.binding->uriLen;
    if (VAR_4->m_namespaceSeparator)
      VAR_9--;
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
      if (!FUNC_3(&VAR_4->m_tempPool, VAR_5->defaultPrefix.binding->uri[VAR_8])) {
        return ((void*)0);
      }
    }
    VAR_7 = VAR_3;
  }

  FUNC_1(&VAR_6, &(VAR_5->prefixes));
  for (;;) {
    int VAR_10;
    int VAR_11;
    const XML_Char *VAR_12;
    PREFIX *VAR_13 = (PREFIX *)FUNC_2(&VAR_6);
    if (!VAR_13)
      break;
    if (!VAR_13->binding) {






      continue;
    }
    if (VAR_7 && !FUNC_3(&VAR_4->m_tempPool, VAR_1))
      return ((void*)0);
    for (VAR_12 = VAR_13->name; *VAR_12; VAR_12++)
      if (!FUNC_3(&VAR_4->m_tempPool, *VAR_12))
        return ((void*)0);
    if (!FUNC_3(&VAR_4->m_tempPool, FUNC_0(VAR_0)))
      return ((void*)0);
    VAR_11 = VAR_13->binding->uriLen;
    if (VAR_4->m_namespaceSeparator)
      VAR_11--;
    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
      if (!FUNC_3(&VAR_4->m_tempPool, VAR_13->binding->uri[VAR_10]))
        return ((void*)0);
    VAR_7 = VAR_3;
  }


  FUNC_1(&VAR_6, &(VAR_5->generalEntities));
  for (;;) {
    const XML_Char *VAR_14;
    ENTITY *VAR_15 = (ENTITY *)FUNC_2(&VAR_6);
    if (!VAR_15)
      break;
    if (!VAR_15->open)
      continue;
    if (VAR_7 && !FUNC_3(&VAR_4->m_tempPool, VAR_1))
      return ((void*)0);
    for (VAR_14 = VAR_15->name; *VAR_14; VAR_14++)
      if (!FUNC_3(&VAR_4->m_tempPool, *VAR_14))
        return 0;
    VAR_7 = VAR_3;
  }

  if (!FUNC_3(&VAR_4->m_tempPool, FUNC_0('\0')))
    return ((void*)0);
  return VAR_4->m_tempPool.start;
}
